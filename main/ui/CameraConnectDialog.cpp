#pragma once
#include "main/ui/CameraConnectDialog.h"
#include "ui_CameraConnectDialog.h"

CameraConnectDialog::CameraConnectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraConnectDialog)
{  
    // Setup dialog
    ui->setupUi(this);
    // deviceNumberEdit (device number) input validation
    QRegExp rx1("^[0-9]{1,3}$"); // Integers 0 to 999
    QRegExpValidator *validator1 = new QRegExpValidator(rx1, 0);
    // imageBufferSizeEdit (image buffer size) input validation
    QRegExp rx2("^[0-9]{1,3}$"); // Integers 0 to 999
    QRegExpValidator *validator2 = new QRegExpValidator(rx2, 0);

    // resWEdit (resolution: width) input validation
    QRegExp rx3("^[0-9]{1,4}$"); // Integers 0 to 9999
    QRegExpValidator *validator3 = new QRegExpValidator(rx3, 0);

    // resHEdit (resolution: height) input validation
    QRegExp rx4("^[0-9]{1,4}$"); // Integers 0 to 9999
    QRegExpValidator *validator4 = new QRegExpValidator(rx4, 0);

    // fpsEdit input validation
    QRegExp rx5("^[0-9]{1,3}$"); // Integers 0 to 999
    QRegExpValidator *validator5 = new QRegExpValidator(rx5, 0);

    // Setup combo boxes
    QStringList threadPriorities;
    threadPriorities<<"Idle"<<"Lowest"<<"Low"<<"Normal"<<"High"<<"Highest"<<"Time Critical"<<"Inherit";


    // Set dialog to defaults
    resetToDefaults();
    // Connect button to slot
    connect(ui->resetToDefaultsPushButton,SIGNAL(released()),SLOT(resetToDefaults()));
    connect(ui->fileGroupBox, SIGNAL(clicked(bool)),SLOT(toggleCameraGroupBox(bool)));
    connect(ui->cameraGroupBox, SIGNAL(clicked(bool)),SLOT(toggleFileGroupBox(bool)));
    connect(ui->openButton, SIGNAL(released()), SLOT(openButton_clicked()));
}

CameraConnectDialog::~CameraConnectDialog()
{
    delete ui;
}

int CameraConnectDialog::getDeviceNumber()
{
    // If theres a PointGrey device, OCV recognizes it as deviceNumber 0, caused by libdc1394, if you still want to
    // access the (internal) webcam (usually device 0) you have to get it through devicenumber -1
    bool withPgDevice = getPgDevCheckBoxState();
    int deviceNumber;

    // Set device number to default (any available camera) if field is blank

    deviceNumber = 0;

    return (withPgDevice ? (deviceNumber-1) : (deviceNumber));
}

int CameraConnectDialog::countCameraDevices()
{
    cv::VideoCapture tmp;
    bool isWorking;
    int count = 0;
    // Test i times if a device is reachable
    for (int i = 0; i <= 5; i++) {
        cv::VideoCapture tmp(i);
        isWorking = tmp.isOpened();
        tmp.release();
        if(isWorking)
            count++;
    }

    return count;
}

int CameraConnectDialog::getFpsNumber()
{
    // Return -1 if field is blank
    return  -1;
}

int CameraConnectDialog::getResolutionWidth()
{
    // Return -1 if field is blank

        return -1;
}

int CameraConnectDialog::getResolutionHeight()
{
    // Return -1 if field is blank

        return -1;
}

int CameraConnectDialog::getImageBufferSize()
{
    // Set image buffer size to default if field is blank
    return DEFAULT_IMAGE_BUFFER_SIZE;
}

bool CameraConnectDialog::getDropFrameCheckBoxState()
{
    return DEFAULT_DROP_FRAMES;
}

bool CameraConnectDialog::getPgDevCheckBoxState()
{
    return DEFAULT_PG_DEVICE;
}

int CameraConnectDialog::getCaptureThreadPrio()
{
    return 3;
}

int CameraConnectDialog::getProcessingThreadPrio()
{
    return 3;
}

int CameraConnectDialog::getPlayerThreadPrio()
{
    return 3;
}

QString CameraConnectDialog::getTabLabel()
{
    return ui->tabLabelEdit->text();
}

void CameraConnectDialog::resetToDefaults()
{
    // PointGrey Device
    //ui->pgDevCheckBox->setChecked(DEFAULT_PG_DEVICE);
    // Default camera
    // Resolution

    // Image buffer size
   // ui->imageBufferSizeEdit->setText(QString::number(DEFAULT_IMAGE_BUFFER_SIZE));
    // Drop frames
    //ui->dropFrameCheckBox->setChecked(DEFAULT_DROP_FRAMES);

    // Tab label
    ui->tabLabelEdit->setText("");
    // FPS

    // Filepath
    ui->fileSourceEdit->clear();
}

// Toggle the GroupBoxes, so either camer OR file is loaded
void CameraConnectDialog::toggleCameraGroupBox(bool state)
{
    ui->cameraGroupBox->setChecked(!state);
}
void CameraConnectDialog::toggleFileGroupBox(bool state)
{
    ui->fileGroupBox->setChecked(!state);
}

// Action to search for file via "Open" Button
void CameraConnectDialog::openButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Video"),
                                                    ".",
                                                    tr("Video Files (*.avi *.wmv *.mov *.mpeg *.m4v *.mp4 *.mkv .*mts .*mpg *.AVI *.WMV *.MOV *.MPEG *.M4V *.MP4 *.MKV .*MTS .*MPG)"));

    if(!fileName.isEmpty()) {
        ui->fileSourceEdit->setText(fileName);
    }

    // Set Focus back on Ok Button
    ui->okCancelBox->button(QDialogButtonBox::Ok)->setFocus();
}

// Get the chosen filepath
QString CameraConnectDialog::getFilepath()
{
    return ui->fileSourceEdit->text();
}

// Check whether User wants to open a File or CameraConnection
bool CameraConnectDialog::isFile()
{
    return ui->fileGroupBox->isChecked();
}
bool CameraConnectDialog::isCamera()
{
    return ui->cameraGroupBox->isChecked();
}
