/********************************************************************************
** Form generated from reading UI file 'MagnifyOptions.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGNIFYOPTIONS_H
#define UI_MAGNIFYOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MagnifyOptions
{
public:
    QGridLayout *gridLayout_2;
    QLabel *DoubleSliderLabel;
    QSpacerItem *verticalSpacer;
    QSlider *COWavelengthSlider;
    QLabel *COWavelengthValLabel;
    QLabel *BpmLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *ChromLabel;
    QLabel *ChromValLabel;
    QLabel *COWavelengthLabel;
    QSlider *AmplificationSlider;
    QLabel *AmplificationValLabel;
    QSlider *ChromSlider;
    QLabel *AmplificationLabel;
    QLabel *BpmSpacer;
    QLabel *hiBpm;
    QDoubleSpinBox *COWavelengthSpinBox;
    QDoubleSpinBox *COHighDoubleSpinBox;
    QHBoxLayout *doubleSliderField;
    QLabel *DoubleSliderValLabel;
    QLabel *HzSpacer;
    QDoubleSpinBox *COLowDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *ChromSpinBox;
    QLabel *loBpm;
    QSpinBox *AmplificationSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *resetButton;
    QCheckBox *grayscaleCheckBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *MagnifcationtypeComboBox;
    QLabel *LevelsLabel;
    QSpinBox *LevelsSpinBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MagnifyOptions)
    {
        if (MagnifyOptions->objectName().isEmpty())
            MagnifyOptions->setObjectName(QStringLiteral("MagnifyOptions"));
        MagnifyOptions->resize(1038, 225);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MagnifyOptions->sizePolicy().hasHeightForWidth());
        MagnifyOptions->setSizePolicy(sizePolicy);
        MagnifyOptions->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(MagnifyOptions);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        DoubleSliderLabel = new QLabel(MagnifyOptions);
        DoubleSliderLabel->setObjectName(QStringLiteral("DoubleSliderLabel"));

        gridLayout_2->addWidget(DoubleSliderLabel, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 2, 1, 1);

        COWavelengthSlider = new QSlider(MagnifyOptions);
        COWavelengthSlider->setObjectName(QStringLiteral("COWavelengthSlider"));
        COWavelengthSlider->setMaximum(1000);
        COWavelengthSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(COWavelengthSlider, 5, 2, 1, 1);

        COWavelengthValLabel = new QLabel(MagnifyOptions);
        COWavelengthValLabel->setObjectName(QStringLiteral("COWavelengthValLabel"));

        gridLayout_2->addWidget(COWavelengthValLabel, 5, 7, 1, 1);

        BpmLabel = new QLabel(MagnifyOptions);
        BpmLabel->setObjectName(QStringLiteral("BpmLabel"));

        gridLayout_2->addWidget(BpmLabel, 7, 7, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(30, 0, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 6, 0, 1, 1);

        ChromLabel = new QLabel(MagnifyOptions);
        ChromLabel->setObjectName(QStringLiteral("ChromLabel"));

        gridLayout_2->addWidget(ChromLabel, 8, 1, 1, 1);

        ChromValLabel = new QLabel(MagnifyOptions);
        ChromValLabel->setObjectName(QStringLiteral("ChromValLabel"));

        gridLayout_2->addWidget(ChromValLabel, 8, 7, 1, 1);

        COWavelengthLabel = new QLabel(MagnifyOptions);
        COWavelengthLabel->setObjectName(QStringLiteral("COWavelengthLabel"));

        gridLayout_2->addWidget(COWavelengthLabel, 5, 1, 1, 1);

        AmplificationSlider = new QSlider(MagnifyOptions);
        AmplificationSlider->setObjectName(QStringLiteral("AmplificationSlider"));
        AmplificationSlider->setMaximum(200);
        AmplificationSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(AmplificationSlider, 4, 2, 1, 1);

        AmplificationValLabel = new QLabel(MagnifyOptions);
        AmplificationValLabel->setObjectName(QStringLiteral("AmplificationValLabel"));

        gridLayout_2->addWidget(AmplificationValLabel, 4, 7, 1, 1);

        ChromSlider = new QSlider(MagnifyOptions);
        ChromSlider->setObjectName(QStringLiteral("ChromSlider"));
        ChromSlider->setMaximum(100);
        ChromSlider->setOrientation(Qt::Horizontal);
        ChromSlider->setInvertedAppearance(false);

        gridLayout_2->addWidget(ChromSlider, 8, 2, 1, 1);

        AmplificationLabel = new QLabel(MagnifyOptions);
        AmplificationLabel->setObjectName(QStringLiteral("AmplificationLabel"));
        AmplificationLabel->setToolTipDuration(-1);

        gridLayout_2->addWidget(AmplificationLabel, 4, 1, 1, 1);

        BpmSpacer = new QLabel(MagnifyOptions);
        BpmSpacer->setObjectName(QStringLiteral("BpmSpacer"));

        gridLayout_2->addWidget(BpmSpacer, 7, 5, 1, 1);

        hiBpm = new QLabel(MagnifyOptions);
        hiBpm->setObjectName(QStringLiteral("hiBpm"));
        hiBpm->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(hiBpm, 7, 6, 1, 1);

        COWavelengthSpinBox = new QDoubleSpinBox(MagnifyOptions);
        COWavelengthSpinBox->setObjectName(QStringLiteral("COWavelengthSpinBox"));
        COWavelengthSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        COWavelengthSpinBox->setMaximum(100);

        gridLayout_2->addWidget(COWavelengthSpinBox, 5, 4, 1, 3);

        COHighDoubleSpinBox = new QDoubleSpinBox(MagnifyOptions);
        COHighDoubleSpinBox->setObjectName(QStringLiteral("COHighDoubleSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(COHighDoubleSpinBox->sizePolicy().hasHeightForWidth());
        COHighDoubleSpinBox->setSizePolicy(sizePolicy1);
        COHighDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        COHighDoubleSpinBox->setMinimum(0);
        COHighDoubleSpinBox->setMaximum(2);
        COHighDoubleSpinBox->setSingleStep(0.01);

        gridLayout_2->addWidget(COHighDoubleSpinBox, 6, 6, 1, 1);

        doubleSliderField = new QHBoxLayout();
        doubleSliderField->setObjectName(QStringLiteral("doubleSliderField"));

        gridLayout_2->addLayout(doubleSliderField, 6, 2, 1, 1);

        DoubleSliderValLabel = new QLabel(MagnifyOptions);
        DoubleSliderValLabel->setObjectName(QStringLiteral("DoubleSliderValLabel"));

        gridLayout_2->addWidget(DoubleSliderValLabel, 6, 7, 1, 1);

        HzSpacer = new QLabel(MagnifyOptions);
        HzSpacer->setObjectName(QStringLiteral("HzSpacer"));
        HzSpacer->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(HzSpacer, 6, 5, 1, 1);

        COLowDoubleSpinBox = new QDoubleSpinBox(MagnifyOptions);
        COLowDoubleSpinBox->setObjectName(QStringLiteral("COLowDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(COLowDoubleSpinBox->sizePolicy().hasHeightForWidth());
        COLowDoubleSpinBox->setSizePolicy(sizePolicy1);
        COLowDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        COLowDoubleSpinBox->setMaximum(2);
        COLowDoubleSpinBox->setSingleStep(0.01);

        gridLayout_2->addWidget(COLowDoubleSpinBox, 6, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 0, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 6, 8, 1, 1);

        ChromSpinBox = new QSpinBox(MagnifyOptions);
        ChromSpinBox->setObjectName(QStringLiteral("ChromSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ChromSpinBox->sizePolicy().hasHeightForWidth());
        ChromSpinBox->setSizePolicy(sizePolicy2);
        ChromSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ChromSpinBox->setMaximum(100);

        gridLayout_2->addWidget(ChromSpinBox, 8, 4, 1, 3);

        loBpm = new QLabel(MagnifyOptions);
        loBpm->setObjectName(QStringLiteral("loBpm"));
        loBpm->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(loBpm, 7, 4, 1, 1);

        AmplificationSpinBox = new QSpinBox(MagnifyOptions);
        AmplificationSpinBox->setObjectName(QStringLiteral("AmplificationSpinBox"));
        sizePolicy2.setHeightForWidth(AmplificationSpinBox->sizePolicy().hasHeightForWidth());
        AmplificationSpinBox->setSizePolicy(sizePolicy2);
        AmplificationSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AmplificationSpinBox->setMaximum(200);

        gridLayout_2->addWidget(AmplificationSpinBox, 4, 4, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        resetButton = new QPushButton(MagnifyOptions);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        sizePolicy1.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy1);
        resetButton->setLayoutDirection(Qt::LeftToRight);
        resetButton->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(resetButton);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 4, 1, 3);

        grayscaleCheckBox = new QCheckBox(MagnifyOptions);
        grayscaleCheckBox->setObjectName(QStringLiteral("grayscaleCheckBox"));
        sizePolicy1.setHeightForWidth(grayscaleCheckBox->sizePolicy().hasHeightForWidth());
        grayscaleCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(grayscaleCheckBox, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MagnifcationtypeComboBox = new QComboBox(MagnifyOptions);
        MagnifcationtypeComboBox->setObjectName(QStringLiteral("MagnifcationtypeComboBox"));
        sizePolicy1.setHeightForWidth(MagnifcationtypeComboBox->sizePolicy().hasHeightForWidth());
        MagnifcationtypeComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(MagnifcationtypeComboBox);

        LevelsLabel = new QLabel(MagnifyOptions);
        LevelsLabel->setObjectName(QStringLiteral("LevelsLabel"));

        horizontalLayout->addWidget(LevelsLabel);

        LevelsSpinBox = new QSpinBox(MagnifyOptions);
        LevelsSpinBox->setObjectName(QStringLiteral("LevelsSpinBox"));
        sizePolicy1.setHeightForWidth(LevelsSpinBox->sizePolicy().hasHeightForWidth());
        LevelsSpinBox->setSizePolicy(sizePolicy1);
        LevelsSpinBox->setMinimum(1);
        LevelsSpinBox->setMaximum(10);

        horizontalLayout->addWidget(LevelsSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 0, 2, 1, 2);


        retranslateUi(MagnifyOptions);
        QObject::connect(AmplificationSlider, SIGNAL(valueChanged(int)), AmplificationSpinBox, SLOT(setValue(int)));
        QObject::connect(AmplificationSpinBox, SIGNAL(valueChanged(int)), AmplificationSlider, SLOT(setValue(int)));
        QObject::connect(ChromSpinBox, SIGNAL(valueChanged(int)), ChromSlider, SLOT(setValue(int)));
        QObject::connect(ChromSlider, SIGNAL(valueChanged(int)), ChromSpinBox, SLOT(setValue(int)));

        MagnifcationtypeComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MagnifyOptions);
    } // setupUi

    void retranslateUi(QWidget *MagnifyOptions)
    {
        MagnifyOptions->setWindowTitle(QApplication::translate("MagnifyOptions", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DoubleSliderLabel->setToolTip(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" font-weight:600;\">Frequency Range</span></p><p>Upper and lower cutoff value for temporal frequency filter. Low values amplify slow movements, high values amplify fast movements.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        DoubleSliderLabel->setWhatsThis(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" font-weight:600;\">Frequency Range</span></p><p>Upper and lower cutoff value for temporal frequency filter. Low values amplify slow movements, high values amplify fast movements.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        DoubleSliderLabel->setText(QApplication::translate("MagnifyOptions", "Frequency Range:", Q_NULLPTR));
        COWavelengthValLabel->setText(QApplication::translate("MagnifyOptions", "%", Q_NULLPTR));
        BpmLabel->setText(QApplication::translate("MagnifyOptions", "BPM", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ChromLabel->setToolTip(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" font-weight:600;\">Chrom Attenuation</span></p><p>Chrominance channel magnification. The higher the value, the more colorful the movements.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ChromLabel->setWhatsThis(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" font-weight:600;\">Chrom Attenuation</span></p><p>Chrominance channel magnification. The higher the value, the more colorful the movements.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ChromLabel->setText(QApplication::translate("MagnifyOptions", "Chrom Attenuation:", Q_NULLPTR));
        ChromValLabel->setText(QApplication::translate("MagnifyOptions", "%", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        COWavelengthLabel->setToolTip(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" font-weight:600;\">Cutoff Wavelength</span></p><p>The higher the value, the less noise and small/short movements are amplified.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        COWavelengthLabel->setWhatsThis(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" font-weight:600;\">Cutoff Wavelength</span></p><p>The higher the value, the less noise and small/short movements are amplified.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        COWavelengthLabel->setText(QApplication::translate("MagnifyOptions", "Cutoff Wavelength:", Q_NULLPTR));
        AmplificationValLabel->setText(QApplication::translate("MagnifyOptions", "%", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AmplificationLabel->setToolTip(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" font-weight:600;\">Amplification factor </span></p><p>The higher the factor, the more movements are amplified. Reduce Amplification or enhance Cutoff Wavelength to reduce noise.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        AmplificationLabel->setWhatsThis(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" font-weight:600;\">Amplification factor </span></p><p>The higher the factor, the more movements are amplified. Reduce Amplification or enhance Cutoff Wavelength to reduce noise.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        AmplificationLabel->setText(QApplication::translate("MagnifyOptions", "Amplification:", Q_NULLPTR));
        BpmSpacer->setText(QApplication::translate("MagnifyOptions", "-", Q_NULLPTR));
        hiBpm->setText(QString());
        DoubleSliderValLabel->setText(QString());
        HzSpacer->setText(QApplication::translate("MagnifyOptions", "-", Q_NULLPTR));
        loBpm->setText(QString());
        resetButton->setText(QApplication::translate("MagnifyOptions", "Reset Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        grayscaleCheckBox->setToolTip(QApplication::translate("MagnifyOptions", "<html><head/><body><p>Converts images in grayscale before processing. Speeds up processing.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        grayscaleCheckBox->setWhatsThis(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" color:#000000;\">Converts images in grayscale before processing. Speeds up processing.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        grayscaleCheckBox->setText(QApplication::translate("MagnifyOptions", "Grayscale", Q_NULLPTR));
        MagnifcationtypeComboBox->clear();
        MagnifcationtypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MagnifyOptions", "No Magnification", Q_NULLPTR)
         << QApplication::translate("MagnifyOptions", "Color Magnification", Q_NULLPTR)
         << QApplication::translate("MagnifyOptions", "Laplace Magnification", Q_NULLPTR)
         << QApplication::translate("MagnifyOptions", "Haar Wavelet Magnification", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        LevelsLabel->setToolTip(QApplication::translate("MagnifyOptions", "<html><head/><body><p>Number of levels of spatial filter (image pyramid).<ul><li><b>Color Magnification:</b>The higher the level, the faster the algorithm, the worse the precision of the measured signal. If level too low, the amplified signal is too low.</li><li><b>Motion Magnification:</b>The higher the level, the more big movements are amplified, so the less little movements are amplified.</li></ul></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        LevelsLabel->setWhatsThis(QApplication::translate("MagnifyOptions", "<html><head/><body><p><span style=\" color:#000000;\">Number of levels of spatial filter (image pyramid).</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        LevelsLabel->setText(QApplication::translate("MagnifyOptions", "Levels:", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        LevelsSpinBox->setWhatsThis(QApplication::translate("MagnifyOptions", "<html><head/><body><p>Number of levels of spatial filter (image pyramid).</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Motion: The higher the value, the slower the processing, the less noise and fast/small movements</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Color: The higher the value, the faster the processing, the more artifacts you get</li></ul></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class MagnifyOptions: public Ui_MagnifyOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGNIFYOPTIONS_H
