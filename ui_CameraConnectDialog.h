/********************************************************************************
** Form generated from reading UI file 'CameraConnectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERACONNECTDIALOG_H
#define UI_CAMERACONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraConnectDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *cameraGroupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *deviceNumberEdit;
    QLabel *label_devCount;
    QCheckBox *pgDevCheckBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *imageBufferSizeEdit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *dropFrameCheckBox;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QComboBox *capturePrioComboBox;
    QComboBox *processingPrioComboBox;
    QGroupBox *fileGroupBox;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *fileSourceEdit;
    QPushButton *openButton;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_22;
    QComboBox *playerPrioComboBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *resWEdit;
    QLabel *label_13;
    QLineEdit *resHEdit;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *fpsEdit;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *tabLabelEdit;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *resetToDefaultsPushButton;
    QDialogButtonBox *okCancelBox;

    void setupUi(QDialog *CameraConnectDialog)
    {
        if (CameraConnectDialog->objectName().isEmpty())
            CameraConnectDialog->setObjectName(QStringLiteral("CameraConnectDialog"));
        CameraConnectDialog->resize(423, 531);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CameraConnectDialog->sizePolicy().hasHeightForWidth());
        CameraConnectDialog->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(CameraConnectDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 394, 511));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        cameraGroupBox = new QGroupBox(layoutWidget);
        cameraGroupBox->setObjectName(QStringLiteral("cameraGroupBox"));
        cameraGroupBox->setEnabled(true);
        cameraGroupBox->setAutoFillBackground(false);
        cameraGroupBox->setCheckable(true);
        verticalLayout_6 = new QVBoxLayout(cameraGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(cameraGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        label_9->setFont(font);

        horizontalLayout_2->addWidget(label_9);

        deviceNumberEdit = new QLineEdit(cameraGroupBox);
        deviceNumberEdit->setObjectName(QStringLiteral("deviceNumberEdit"));
        deviceNumberEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(deviceNumberEdit->sizePolicy().hasHeightForWidth());
        deviceNumberEdit->setSizePolicy(sizePolicy);
        deviceNumberEdit->setMinimumSize(QSize(50, 0));
        deviceNumberEdit->setMaximumSize(QSize(50, 16777215));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        deviceNumberEdit->setFont(font1);

        horizontalLayout_2->addWidget(deviceNumberEdit);

        label_devCount = new QLabel(cameraGroupBox);
        label_devCount->setObjectName(QStringLiteral("label_devCount"));

        horizontalLayout_2->addWidget(label_devCount);

        pgDevCheckBox = new QCheckBox(cameraGroupBox);
        pgDevCheckBox->setObjectName(QStringLiteral("pgDevCheckBox"));

        horizontalLayout_2->addWidget(pgDevCheckBox);


        verticalLayout_6->addLayout(horizontalLayout_2);

        label_3 = new QLabel(cameraGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);

        verticalLayout_6->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(cameraGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        imageBufferSizeEdit = new QLineEdit(cameraGroupBox);
        imageBufferSizeEdit->setObjectName(QStringLiteral("imageBufferSizeEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageBufferSizeEdit->sizePolicy().hasHeightForWidth());
        imageBufferSizeEdit->setSizePolicy(sizePolicy1);
        imageBufferSizeEdit->setMinimumSize(QSize(50, 0));
        imageBufferSizeEdit->setMaximumSize(QSize(50, 16777215));
        QFont font3;
        font3.setPointSize(9);
        imageBufferSizeEdit->setFont(font3);

        horizontalLayout->addWidget(imageBufferSizeEdit);

        label_4 = new QLabel(cameraGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout);

        dropFrameCheckBox = new QCheckBox(cameraGroupBox);
        dropFrameCheckBox->setObjectName(QStringLiteral("dropFrameCheckBox"));
        dropFrameCheckBox->setFont(font3);

        verticalLayout_6->addWidget(dropFrameCheckBox);

        label_5 = new QLabel(cameraGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        verticalLayout_6->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(cameraGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(cameraGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        capturePrioComboBox = new QComboBox(cameraGroupBox);
        capturePrioComboBox->setObjectName(QStringLiteral("capturePrioComboBox"));
        capturePrioComboBox->setFont(font3);

        verticalLayout_2->addWidget(capturePrioComboBox);

        processingPrioComboBox = new QComboBox(cameraGroupBox);
        processingPrioComboBox->setObjectName(QStringLiteral("processingPrioComboBox"));
        processingPrioComboBox->setFont(font3);

        verticalLayout_2->addWidget(processingPrioComboBox);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(cameraGroupBox);

        fileGroupBox = new QGroupBox(layoutWidget);
        fileGroupBox->setObjectName(QStringLiteral("fileGroupBox"));
        fileGroupBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy2);
        fileGroupBox->setStyleSheet(QStringLiteral(""));
        fileGroupBox->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        fileGroupBox->setFlat(false);
        fileGroupBox->setCheckable(true);
        fileGroupBox->setChecked(false);
        verticalLayout_9 = new QVBoxLayout(fileGroupBox);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        fileSourceEdit = new QLineEdit(fileGroupBox);
        fileSourceEdit->setObjectName(QStringLiteral("fileSourceEdit"));
        fileSourceEdit->setFont(font3);

        horizontalLayout_10->addWidget(fileSourceEdit);

        openButton = new QPushButton(fileGroupBox);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout_10->addWidget(openButton);


        verticalLayout_9->addLayout(horizontalLayout_10);

        label_24 = new QLabel(fileGroupBox);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font2);

        verticalLayout_9->addWidget(label_24);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_22 = new QLabel(fileGroupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font);

        horizontalLayout_13->addWidget(label_22);

        playerPrioComboBox = new QComboBox(fileGroupBox);
        playerPrioComboBox->setObjectName(QStringLiteral("playerPrioComboBox"));
        playerPrioComboBox->setFont(font3);

        horizontalLayout_13->addWidget(playerPrioComboBox);


        verticalLayout_9->addLayout(horizontalLayout_13);


        verticalLayout_4->addWidget(fileGroupBox);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        horizontalLayout_8->addWidget(label_11);

        resWEdit = new QLineEdit(layoutWidget);
        resWEdit->setObjectName(QStringLiteral("resWEdit"));
        resWEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(resWEdit->sizePolicy().hasHeightForWidth());
        resWEdit->setSizePolicy(sizePolicy);
        resWEdit->setMinimumSize(QSize(50, 0));
        resWEdit->setMaximumSize(QSize(50, 16777215));
        resWEdit->setFont(font1);

        horizontalLayout_8->addWidget(resWEdit);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        horizontalLayout_8->addWidget(label_13);

        resHEdit = new QLineEdit(layoutWidget);
        resHEdit->setObjectName(QStringLiteral("resHEdit"));
        resHEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(resHEdit->sizePolicy().hasHeightForWidth());
        resHEdit->setSizePolicy(sizePolicy);
        resHEdit->setMinimumSize(QSize(50, 0));
        resHEdit->setMaximumSize(QSize(50, 16777215));
        resHEdit->setFont(font1);

        horizontalLayout_8->addWidget(resHEdit);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);

        horizontalLayout_8->addWidget(label_12);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setFont(font3);

        horizontalLayout_6->addWidget(label);

        fpsEdit = new QLineEdit(layoutWidget);
        fpsEdit->setObjectName(QStringLiteral("fpsEdit"));
        sizePolicy.setHeightForWidth(fpsEdit->sizePolicy().hasHeightForWidth());
        fpsEdit->setSizePolicy(sizePolicy);
        fpsEdit->setMinimumSize(QSize(50, 0));
        fpsEdit->setMaximumSize(QSize(50, 16777215));
        fpsEdit->setFont(font3);

        horizontalLayout_6->addWidget(fpsEdit);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);

        horizontalLayout_6->addWidget(label_10);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        horizontalLayout_5->addWidget(label_8);

        tabLabelEdit = new QLineEdit(layoutWidget);
        tabLabelEdit->setObjectName(QStringLiteral("tabLabelEdit"));
        tabLabelEdit->setFont(font3);

        horizontalLayout_5->addWidget(tabLabelEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        line = new QFrame(layoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        resetToDefaultsPushButton = new QPushButton(layoutWidget);
        resetToDefaultsPushButton->setObjectName(QStringLiteral("resetToDefaultsPushButton"));

        horizontalLayout_4->addWidget(resetToDefaultsPushButton);

        okCancelBox = new QDialogButtonBox(layoutWidget);
        okCancelBox->setObjectName(QStringLiteral("okCancelBox"));
        okCancelBox->setOrientation(Qt::Horizontal);
        okCancelBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(okCancelBox);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(CameraConnectDialog);
        QObject::connect(okCancelBox, SIGNAL(accepted()), CameraConnectDialog, SLOT(accept()));
        QObject::connect(okCancelBox, SIGNAL(rejected()), CameraConnectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CameraConnectDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraConnectDialog)
    {
        CameraConnectDialog->setWindowTitle(QApplication::translate("CameraConnectDialog", "Connect to Camera or Open File", Q_NULLPTR));
        cameraGroupBox->setTitle(QApplication::translate("CameraConnectDialog", "Camera", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_9->setWhatsThis(QApplication::translate("CameraConnectDialog", "<html><head/><body><p><span style=\" color:#000000;\">Webcams on your PC are numbered, where 0 is normally a built-in webcam</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("CameraConnectDialog", "Device Number:", Q_NULLPTR));
        label_devCount->setText(QString());
#ifndef QT_NO_TOOLTIP
        pgDevCheckBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pgDevCheckBox->setWhatsThis(QApplication::translate("CameraConnectDialog", "<html><head/><body><p><span style=\" color:#000000;\">PointGrey and other dc1394 devices are set to device number 0, overriding your built-in webcam. This sets PointGrey to 1.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pgDevCheckBox->setText(QApplication::translate("CameraConnectDialog", "PointGrey Device on USB", Q_NULLPTR));
        label_3->setText(QApplication::translate("CameraConnectDialog", "Image Buffer:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_2->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        label_2->setWhatsThis(QApplication::translate("CameraConnectDialog", "<html><head/><body><p><span style=\" color:#000000;\">Frames in buffer so capture framerate doesn't drop while processing.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("CameraConnectDialog", "Size (number of images/frames):", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        imageBufferSizeEdit->setWhatsThis(QApplication::translate("CameraConnectDialog", "<html><head/><body><p><span style=\" color:#000000;\">Frames in buffer so capture framerate doesn't drop while processing.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("CameraConnectDialog", "[1-999]", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        dropFrameCheckBox->setWhatsThis(QApplication::translate("CameraConnectDialog", "<html><head/><body><p><span style=\" color:#000000;\">Enabling this will result in a constant capture rate, therefore some images will be dropped when image buffer is full. Otherwise capture rate will drop to processing rate.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        dropFrameCheckBox->setText(QApplication::translate("CameraConnectDialog", "Drop frame if image buffer is full", Q_NULLPTR));
        label_5->setText(QApplication::translate("CameraConnectDialog", "Thread Priorities:", Q_NULLPTR));
        label_6->setText(QApplication::translate("CameraConnectDialog", "Capture Thread:", Q_NULLPTR));
        label_7->setText(QApplication::translate("CameraConnectDialog", "Processing Thread:", Q_NULLPTR));
        fileGroupBox->setTitle(QApplication::translate("CameraConnectDialog", "Video File", Q_NULLPTR));
        openButton->setText(QApplication::translate("CameraConnectDialog", "Open", Q_NULLPTR));
        label_24->setText(QApplication::translate("CameraConnectDialog", "Thread Priorities:", Q_NULLPTR));
        label_22->setText(QApplication::translate("CameraConnectDialog", "Video Player Thread:", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        label_11->setWhatsThis(QApplication::translate("CameraConnectDialog", "<html><head/><body><p><span style=\" color:#000000;\">For webcams, please look in your manufacturers handbook if your webcam supports different capture modes. If it does, change values to the exact values the mode supports.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_11->setText(QApplication::translate("CameraConnectDialog", "Resolution (W x H):", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        resWEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_13->setText(QApplication::translate("CameraConnectDialog", "x", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        resHEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_12->setText(QApplication::translate("CameraConnectDialog", "[optional]", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QApplication::translate("CameraConnectDialog", "<html><head/><body><p><span style=\" color:#000000;\">Change this when your webcam supports multiple capture modes with different framerate or framerate of video isn't recognized correctly.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("CameraConnectDialog", "Frames per Second:", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        fpsEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_10->setText(QApplication::translate("CameraConnectDialog", "[optional]", Q_NULLPTR));
        label_8->setText(QApplication::translate("CameraConnectDialog", "Tab Label:", Q_NULLPTR));
        resetToDefaultsPushButton->setText(QApplication::translate("CameraConnectDialog", "Reset to Defaults", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CameraConnectDialog: public Ui_CameraConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERACONNECTDIALOG_H
