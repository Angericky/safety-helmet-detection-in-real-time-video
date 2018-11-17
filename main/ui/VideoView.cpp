#pragma once
#include "main/ui/VideoView.h"
#include "ui_VideoView.h"

VideoView::VideoView(QWidget *parent, QString filepath) :
    QWidget(parent),
    ui(new Ui::VideoView),
    codec(-1),
    useVideoCodec(true)
{
    ui->setupUi(this);

    // The FrameLabel for the original Frame
    originalFrame = new FrameLabel(this);
    originalFrame->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    originalFrame->setAutoFillBackground(true);
    originalFrame->setFrameShape(QFrame::Box);
    originalFrame->setAlignment(ui->frameLabel->alignment());
    originalFrame->setMouseTracking(true);
    originalFrame->menu->clear();
    originalFrame->menu->addActions(ui->frameLabel->menu->actions());
    ui->frameLayout->addWidget(originalFrame,0,0);
    originalFrame->setVisible(false);

    this->file = QFileInfo(filepath);
    filename = file.fileName();
    // Internal Flag
    isFileLoaded = false;

    // Set initial GUI state

    // Initialize ImageProcessingFlags structure
    imageProcessingFlags.grayscaleOn=false;
    imageProcessingFlags.laplaceMagnifyOn = false;
    imageProcessingFlags.waveletMagnifyOn = false;
    imageProcessingFlags.colorMagnifyOn = false;

    // Connect signals/slots
    connect(ui->frameLabel, SIGNAL(onMouseMoveEvent()), this, SLOT(updateMouseCursorPosLabel()));
    connect(originalFrame, SIGNAL(onMouseMoveEvent()), this, SLOT(updateMouseCursorPosLabelOriginalFrame()));
    connect(ui->frameLabel->menu, SIGNAL(triggered(QAction*)), this, SLOT(handleContextMenuAction(QAction*)));

    // Register type
    qRegisterMetaType<struct ThreadStatisticsData>("ThreadStatisticsData");
}

VideoView::~VideoView()
{
    if(isFileLoaded){
        // Stop PlayerThread
        if(playerThread->isRunning())
            stopPlayerThread();

        // Release File
        if(playerThread->releaseFile())
            qDebug() << "[" << filename << "] Video succesfully released.";
        else
            qDebug() << "[" << filename << "] WARNING: Video already released.";
    }
    // Delete Threads
    delete playerThread;
    delete vidSaver;
    // Delete UI integrated Pointer
    delete originalFrame;
    // Delete UI
    delete ui;
}

bool VideoView::loadVideo(int threadPrio, int width, int height, double fps)
{
    // Set frame label text
    ui->frameLabel->setText(tr("Loading Video..."));
    QString filepath = file.absoluteFilePath();
    std::string stringFilepath= filepath.toStdString();
    // create player thread
    playerThread = new PlayerThread(stringFilepath, width, height, fps);

    if(playerThread->loadFile())
    {
        ui->frameLabel->setText("Video loaded");

        // Setup signal/slot connections
        connect(this, SIGNAL(setROI(QRect)), playerThread, SLOT(setROI(QRect)));

        // Setup signal/slot for PlayerThread
        connect(playerThread, SIGNAL(endOfFrame()), this, SLOT(endOfFrame_action()));
        connect(playerThread, SIGNAL(updateStatisticsInGUI(struct ThreadStatisticsData)), this, SLOT(updatePlayerThreadStats(struct ThreadStatisticsData)));
        connect(ui->PlayButton, SIGNAL(clicked()), this, SLOT(play()));
        connect(ui->StopButton, SIGNAL(clicked()), this, SLOT(stop()));
        connect(ui->TimeSlider, SIGNAL(sliderPressed()), playerThread, SLOT(pauseThread()));
        connect(ui->TimeSlider, SIGNAL(sliderReleased()), this, SLOT(setTime()));

        // Connect frames emitting
        connect(playerThread, SIGNAL(newFrame(QImage)), this, SLOT(updateFrame(QImage)));
        connect(playerThread, SIGNAL(origFrame(QImage)), this, SLOT(updateOriginalFrame(QImage)));

        // Create the SavingThread and connect buttons to it's meant functions
        vidSaver = new SavingThread();
        connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(save_action()));
        connect(vidSaver, SIGNAL(updateProgress(int)), this, SLOT(updateProgressBar(int)));
        connect(vidSaver, SIGNAL(endOfSaving()), this, SLOT(endOfSaving_action()));
        ui->saveProgressBar->hide();

        connect(ui->frameLabel, SIGNAL(newMouseData(struct MouseData)), this, SLOT(newMouseData(struct MouseData)));
        connect(originalFrame, SIGNAL(newMouseData(struct MouseData)), this, SLOT(newMouseData(struct MouseData)));

        // Set initial data in player thread
        emit setROI(QRect(0, 0, playerThread->getInputSourceWidth(), playerThread->getInputSourceHeight()));
        emit newImageProcessingFlags(imageProcessingFlags);

        // Start capturing frames from camera
        playerThread->start((QThread::Priority)threadPrio);
        ui->totalTimeLabel->setText( getFormattedTime(playerThread->getInputFrameLength()/playerThread->getFPS()) );
        ui->TimeSlider->setMaximum(playerThread->getInputFrameLength());
        // Set internal flag and return
        isFileLoaded = true;
        return true;
    }
    else
        return false;
}

void VideoView::updateOriginalFrame(const QImage &frame)
{
    // Display frame
    originalFrame->setPixmap(QPixmap::fromImage(frame).scaled(ui->frameLabel->width(), ui->frameLabel->height(),Qt::KeepAspectRatio));
}

QString VideoView::getFormattedTime(int timeInSeconds){

    int seconds = (int) (timeInSeconds) % 60 ;
    int minutes = (int) ((timeInSeconds / 60) % 60);
    int hours   = (int) ((timeInSeconds / (60*60)) % 24);

    QTime t(hours, minutes, seconds);
    if (hours == 0 )
        return t.toString("mm:ss");
    else
        return t.toString("h:mm:ss");
}

void VideoView::endOfFrame_action()
{
    ui->TimeSlider->setValue(0);
    ui->PlayButton->setText("Play");
    playerThread->stopAction();

    if(ui->LoopCheckBox->isChecked())
        play();
}

void VideoView::stopPlayerThread()
{
    qDebug() << "[" << filename << "] About to stop player thread...";
    playerThread->stop();
    playerThread->wait();
    qDebug() << "[" << filename << "] Player thread successfully stopped.";
}

void VideoView::updatePlayerThreadStats(struct ThreadStatisticsData statData)
{
    ui->TimeSlider->setValue(statData.nFramesProcessed);
    ui->currentTimeLabel->setText(getFormattedTime(statData.nFramesProcessed/(int)playerThread->getFPS()));
}

void VideoView::updateFrame(const QImage &frame)
{
    int w =ui->frameLabel->width();
    int h = ui->frameLabel->height();
    // Display frame
    ui->frameLabel->setPixmap(QPixmap::fromImage(frame).scaled(w, h, Qt::KeepAspectRatio));
}

void VideoView::updateMouseCursorPosLabel()
{
    // Show pixel cursor position if camera is connected (image is being shown)
    if(ui->frameLabel->pixmap()!=0)
    {
        // Scaling factor calculation depends on whether frame is scaled to fit label or not
        if(!ui->frameLabel->hasScaledContents())
        {
            double xScalingFactor=((double) ui->frameLabel->getMouseCursorPos().x() - ((ui->frameLabel->width() - ui->frameLabel->pixmap()->width()) / 2)) / (double) ui->frameLabel->pixmap()->width();
            double yScalingFactor=((double) ui->frameLabel->getMouseCursorPos().y() - ((ui->frameLabel->height() - ui->frameLabel->pixmap()->height()) / 2)) / (double) ui->frameLabel->pixmap()->height();

        }
        else
        {
            double xScalingFactor=(double) ui->frameLabel->getMouseCursorPos().x() / (double) ui->frameLabel->width();
            double yScalingFactor=(double) ui->frameLabel->getMouseCursorPos().y() / (double) ui->frameLabel->height();


        }
    }
}

void VideoView::newMouseData(struct MouseData mouseData)
{
    // Local variable(s)
    int x_temp, y_temp, width_temp, height_temp;
    QRect selectionBox;

    // Set ROI
    if(mouseData.leftButtonRelease)
    {
        double xScalingFactor;
        double yScalingFactor;
        double wScalingFactor;
        double hScalingFactor;

        // Selection box calculation depends on whether frame is scaled to fit label or not
        if(!ui->frameLabel->hasScaledContents())
        {
            xScalingFactor=((double) mouseData.selectionBox.x() - ((ui->frameLabel->width() - ui->frameLabel->pixmap()->width()) / 2)) / (double) ui->frameLabel->pixmap()->width();
            yScalingFactor=((double) mouseData.selectionBox.y() - ((ui->frameLabel->height() - ui->frameLabel->pixmap()->height()) / 2)) / (double) ui->frameLabel->pixmap()->height();
            wScalingFactor=(double) playerThread->getCurrentROI().width() / (double) ui->frameLabel->pixmap()->width();
            hScalingFactor=(double) playerThread->getCurrentROI().height() / (double) ui->frameLabel->pixmap()->height();
        }
        else
        {
            xScalingFactor=(double) mouseData.selectionBox.x() / (double) ui->frameLabel->width();
            yScalingFactor=(double) mouseData.selectionBox.y() / (double) ui->frameLabel->height();
            wScalingFactor=(double) playerThread->getCurrentROI().width() / (double) ui->frameLabel->width();
            hScalingFactor=(double) playerThread->getCurrentROI().height() / (double) ui->frameLabel->height();
        }

        // Set selection box properties (new ROI)
        selectionBox.setX(xScalingFactor*playerThread->getCurrentROI().width() + playerThread->getCurrentROI().x());
        selectionBox.setY(yScalingFactor*playerThread->getCurrentROI().height() + playerThread->getCurrentROI().y());
        selectionBox.setWidth(wScalingFactor*mouseData.selectionBox.width());
        selectionBox.setHeight(hScalingFactor*mouseData.selectionBox.height());

        // Check if selection box has NON-ZERO dimensions
        if((selectionBox.width()!=0)&&((selectionBox.height())!=0))
        {
            // Selection box can also be drawn from bottom-right to top-left corner
            if(selectionBox.width()<0)
            {
                x_temp=selectionBox.x();
                width_temp=selectionBox.width();
                selectionBox.setX(x_temp+selectionBox.width());
                selectionBox.setWidth(width_temp*-1);
            }
            if(selectionBox.height()<0)
            {
                y_temp=selectionBox.y();
                height_temp=selectionBox.height();
                selectionBox.setY(y_temp+selectionBox.height());
                selectionBox.setHeight(height_temp*-1);
            }

            // Check if selection box is not outside window
            if((selectionBox.x()<0)||(selectionBox.y()<0)||
               ((selectionBox.x()+selectionBox.width())>(playerThread->getCurrentROI().x()+playerThread->getCurrentROI().width()))||
               ((selectionBox.y()+selectionBox.height())>(playerThread->getCurrentROI().y()+playerThread->getCurrentROI().height()))||
               (selectionBox.x()<playerThread->getCurrentROI().x())||
               (selectionBox.y()<playerThread->getCurrentROI().y()))
            {
                // Display error message
                QMessageBox::warning(this,tr("ERROR:"),tr("Selection box outside range. Please try again."));
            }
            // Set ROI
            else
                emit setROI(selectionBox);
        }
    }
}

void VideoView::updateMouseCursorPosLabelOriginalFrame()
{

    // Show pixel cursor position if camera is connected (image is being shown)
    if(originalFrame->pixmap()!=0)
    {
        // Scaling factor calculation depends on whether frame is scaled to fit label or not
        if(!originalFrame->hasScaledContents())
        {
            double xScalingFactor=((double) originalFrame->getMouseCursorPos().x() - ((originalFrame->width() - originalFrame->pixmap()->width()) / 2)) / (double) originalFrame->pixmap()->width();
            double yScalingFactor=((double) originalFrame->getMouseCursorPos().y() - ((originalFrame->height() - originalFrame->pixmap()->height()) / 2)) / (double) originalFrame->pixmap()->height();
        }
        else
        {
            double xScalingFactor=(double) originalFrame->getMouseCursorPos().x() / (double) originalFrame->width();
            double yScalingFactor=(double) originalFrame->getMouseCursorPos().y() / (double) originalFrame->height();
        }
    }
}

void VideoView::newMouseDataOriginalFrame(struct MouseData mouseData)
{
    // Local variable(s)
    int x_temp, y_temp, width_temp, height_temp;
    QRect selectionBox;

    // Set ROI
    if(mouseData.leftButtonRelease)
    {
        double xScalingFactor;
        double yScalingFactor;
        double wScalingFactor;
        double hScalingFactor;

        // Selection box calculation depends on whether frame is scaled to fit label or not
        if(!originalFrame->hasScaledContents())
        {
            xScalingFactor=((double) mouseData.selectionBox.x() - ((originalFrame->width() - originalFrame->pixmap()->width()) / 2)) / (double) originalFrame->pixmap()->width();
            yScalingFactor=((double) mouseData.selectionBox.y() - ((originalFrame->height() - originalFrame->pixmap()->height()) / 2)) / (double) originalFrame->pixmap()->height();
            wScalingFactor=(double) playerThread->getCurrentROI().width() / (double) originalFrame->pixmap()->width();
            hScalingFactor=(double) playerThread->getCurrentROI().height() / (double) originalFrame->pixmap()->height();
        }
        else
        {
            xScalingFactor=(double) mouseData.selectionBox.x() / (double) originalFrame->width();
            yScalingFactor=(double) mouseData.selectionBox.y() / (double) originalFrame->height();
            wScalingFactor=(double) playerThread->getCurrentROI().width() / (double) originalFrame->width();
            hScalingFactor=(double) playerThread->getCurrentROI().height() / (double) originalFrame->height();
        }

        // Set selection box properties (new ROI)
        selectionBox.setX(xScalingFactor*playerThread->getCurrentROI().width() + playerThread->getCurrentROI().x());
        selectionBox.setY(yScalingFactor*playerThread->getCurrentROI().height() + playerThread->getCurrentROI().y());
        selectionBox.setWidth(wScalingFactor*mouseData.selectionBox.width());
        selectionBox.setHeight(hScalingFactor*mouseData.selectionBox.height());

        // Check if selection box has NON-ZERO dimensions
        if((selectionBox.width()!=0)&&((selectionBox.height())!=0))
        {
            // Selection box can also be drawn from bottom-right to top-left corner
            if(selectionBox.width()<0)
            {
                x_temp=selectionBox.x();
                width_temp=selectionBox.width();
                selectionBox.setX(x_temp+selectionBox.width());
                selectionBox.setWidth(width_temp*-1);
            }
            if(selectionBox.height()<0)
            {
                y_temp=selectionBox.y();
                height_temp=selectionBox.height();
                selectionBox.setY(y_temp+selectionBox.height());
                selectionBox.setHeight(height_temp*-1);
            }

            // Check if selection box is not outside window
            if((selectionBox.x()<0)||(selectionBox.y()<0)||
               ((selectionBox.x()+selectionBox.width())>(playerThread->getCurrentROI().x()+playerThread->getCurrentROI().width()))||
               ((selectionBox.y()+selectionBox.height())>(playerThread->getCurrentROI().y()+playerThread->getCurrentROI().height()))||
               (selectionBox.x()<playerThread->getCurrentROI().x())||
               (selectionBox.y()<playerThread->getCurrentROI().y()))
            {
                // Display error message
                QMessageBox::warning(this,tr("ERROR:"),tr("Selection box outside range. Please try again."));
            }
            // Set ROI
            else
                emit setROI(selectionBox);
        }
    }
}

void VideoView::handleContextMenuAction(QAction *action)
{
    if(action->text()=="Scale to Fit Frame") {
        ui->frameLabel->setScaledContents(action->isChecked());
        originalFrame->setScaledContents(action->isChecked());
    }
    else if(action->text()=="Show Original Frame")
        handleOriginalWindow(action->isChecked());
}

void VideoView::handleOriginalWindow(bool doEmit)
{
    originalFrame->setVisible(doEmit);
    playerThread->getOriginalFrame(doEmit);
}

// Actions for Player by User Input
void VideoView::play()
{
    // Video is currently stopped or paused, so play and switch button for pausing
    if(playerThread->isStopping() || playerThread->isPausing()) {
        playerThread->playAction();
        ui->PlayButton->setText(tr("Pause"));
    }
    // Video is currently beeing played, so pause it
    else if(playerThread->isPlaying()) {
        pause();
    }
}

void VideoView::stop()
{
    ui->PlayButton->setText(tr("Play"));
    ui->TimeSlider->setValue(0);
    ui->currentTimeLabel->setText(getFormattedTime(0));
    playerThread->stopAction();
}

void VideoView::pause()
{
    ui->PlayButton->setText(tr("Play"));
    playerThread->pauseAction();
}

void VideoView::setTime()
{
    int val = ui->TimeSlider->value();
    playerThread->setCurrentFrame(val);

    if(ui->PlayButton->text() == "Pause") {
        playerThread->playAction();
    }
}

void VideoView::save_action()
{
    if(vidSaver->isSaving()) {
        vidSaver->stop();
        return;
    }

    std::string source = file.absoluteFilePath().toStdString();
    QString userInput = QFileDialog::getSaveFileName(this,
                                                    tr("Save Capture"),
                                                    ".",
                                                    tr("Video File (*.avi *.mov *.mpeg *.mp4 *.m4v *.mkv)"));
    if(userInput.isEmpty()) {
        return;
    }
    std::string destination = userInput.toStdString();

    // First, load the file about to be processed
    if(vidSaver->loadFile(source)) {
        // Second, hand over the Settings for magnification

        //Set Codec
        int savingCodec = (useVideoCodec) ? vidSaver->getVideoCodec() : codec;
        vidSaver->savingCodec = savingCodec;

        // Third, start saving if destination is valid
        if(vidSaver->saveFile(destination, playerThread->getFPS(), playerThread->getCurrentROI(), ui->saveOriginalCheckBox->checkState())) {
            // Show progressbar and set max value (= nr of frames of video)
            ui->saveProgressBar->show();
            ui->saveProgressBar->setMaximum(vidSaver->getVideoLength());
            ui->saveButton->setText("Abort saving");
            ui->saveButton->setChecked(true);

            // Stop  player Thread to set memory free
            stop();
            // Lock controls
//            ui->PlayButton->setEnabled(false);
//            ui->StopButton->setEnabled(false);
//            ui->TimeSlider->setEnabled(false);
            // start saving the video
            vidSaver->start();
        }
        else
            QMessageBox::warning(this->parentWidget(), "WARNING:","Please enter a valid filename and -ending or change Codec (File->Saving Codec)");
    }
    else
        QMessageBox::warning(this->parentWidget(), "WARNING:","Not able to load video");
}

void VideoView::endOfSaving_action()
{
    ui->saveButton->setText("Save");
    ui->saveButton->setChecked(false);
    ui->saveProgressBar->setValue(0);
    ui->saveProgressBar->hide();

    // Unlock Controls
//    ui->PlayButton->setEnabled(true);
//    ui->StopButton->setEnabled(true);
//    ui->TimeSlider->setEnabled(true);

}

void VideoView::updateProgressBar(int frame)
{
    ui->saveProgressBar->setValue(frame);
}

void VideoView::setCodec(int codec)
{
    this->codec = codec;
}

void VideoView::set_useVideoCodec(bool use)
{
    this->useVideoCodec = use;
}
