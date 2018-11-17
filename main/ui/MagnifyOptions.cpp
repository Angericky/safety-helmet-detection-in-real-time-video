
#include "main/ui/MagnifyOptions.h"
#include "ui_MagnifyOptions.h"

MagnifyOptions::MagnifyOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MagnifyOptions)
{
    // Setup Options Widget
    ui->setupUi(this);

    //Create new double slider
    doubleSlider = new QxtSpanSlider(Qt::Horizontal,this);
    //doubleSlider->setHandleMovementMode(QxtSpanSlider::NoOverlapping);


    // Connect all sliders/buttons/boxes directly for responsible feeling
    connect(ui->MagnifcationtypeComboBox, SIGNAL(currentIndexChanged(int)), SLOT(updateFlagsFromOptionsTab()));
    connect(ui->MagnifcationtypeComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(reset(int)));

    // Update Settings
    connect(ui->LevelsSpinBox, SIGNAL(valueChanged(int)), SLOT(updateSettingsFromOptionsTab()));

    // Update Spinbox
    connect(doubleSlider, SIGNAL(lowerPositionChanged(int)), this, SLOT(convertFromSlider(int)));
    connect(doubleSlider, SIGNAL(upperPositionChanged(int)), this, SLOT(convertFromSlider(int)));

    // Other
    connect(ui->grayscaleCheckBox, SIGNAL(clicked()), SLOT(updateFlagsFromOptionsTab()));

    // Initialize Settings with Default values
    ui->MagnifcationtypeComboBox->setCurrentIndex(DEFAULT_MAGNIFY_TYPE);
    reset();
}

MagnifyOptions::~MagnifyOptions()
{
    delete ui;
}

// Internal slots supporting GUI


// Reset everything to Default, configured in Config.h, depending on Magnify Type. On Start its 0
void MagnifyOptions::reset()
{
    int magnifyType = ui->MagnifcationtypeComboBox->currentIndex();
    switch (magnifyType) {
    case 1:
        applyColorInterface();
        ui->LevelsSpinBox->setValue(DEFAULT_COL_MAG_LEVELS);
        doubleSlider->setLowerValue((int)(DEFAULT_CM_COLOW*100.f));
        doubleSlider->setUpperValue((int)(DEFAULT_CM_COHIGH*100.f));
        break;

    default:  
        ui->LevelsSpinBox->setDisabled(true);
        doubleSlider->hide();

        ui->BpmSpacer->hide();
        ui->loBpm->hide();
        ui->hiBpm->hide();
        ui->HzSpacer->hide();

        break;
    }
}


void MagnifyOptions::updateFlagsFromOptionsTab()
{
    // Grayscale
    imgProcFlags.grayscaleOn = ui->grayscaleCheckBox->isChecked();
    // What Magnification Type was chosen?
    imgProcFlags.colorMagnifyOn = (ui->MagnifcationtypeComboBox->currentIndex() == 1);
    imgProcFlags.laplaceMagnifyOn = (ui->MagnifcationtypeComboBox->currentIndex() == 2);
    imgProcFlags.waveletMagnifyOn = (ui->MagnifcationtypeComboBox->currentIndex() == 3);

    emit newImageProcessingFlags(imgProcFlags);
}

void MagnifyOptions::updateSettingsFromOptionsTab()
{
    if(imgProcFlags.colorMagnifyOn) {

        int hiBPM = imgProcSettings.coHigh*60.0;
        int loBPM = imgProcSettings.coLow*60.0;

        QString loBpm = QString::number(loBPM);
        QString hiBpm = QString::number(hiBPM);

        ui->loBpm->setText(loBpm);
        ui->hiBpm->setText(hiBpm);
    }
    imgProcSettings.levels = ui->LevelsSpinBox->value();

    emit newImageProcessingSettings(imgProcSettings);
}

ImageProcessingSettings MagnifyOptions::getSettings()
{
    return this->imgProcSettings;
}

ImageProcessingFlags MagnifyOptions::getFlags()
{
    return this->imgProcFlags;
}

void MagnifyOptions::applyColorInterface()
{
    ui->LevelsSpinBox->setDisabled(false);

    doubleSlider->setMaximum(300);

    doubleSlider->show();
    ui->DoubleSliderValLabel->show();

    ui->BpmSpacer->show();
    ui->loBpm->show();
    ui->hiBpm->show();
    ui->HzSpacer->show();
    ui->DoubleSliderValLabel->setText("Hz");

}

void MagnifyOptions::applyMotionInterface()
{
    ui->LevelsSpinBox->setDisabled(false);

    doubleSlider->setMaximum(100);

    doubleSlider->show();
    ui->DoubleSliderValLabel->show();


    ui->BpmSpacer->hide();
    ui->loBpm->hide();
    ui->hiBpm->hide();
    ui->HzSpacer->show();
    ui->DoubleSliderValLabel->setText("%");

}

void MagnifyOptions::toggleGrayscale(bool isActive)
{
    ui->grayscaleCheckBox->setDisabled(!isActive);
}

void MagnifyOptions::setMaxLevel(int level)
{
    if(ui->LevelsSpinBox->value() > level) {
        ui->LevelsSpinBox->setValue(level);
    }
    ui->LevelsSpinBox->setMaximum(level);
}
