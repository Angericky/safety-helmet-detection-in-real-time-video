/********************************************************************************
** Form generated from reading UI file 'CameraView.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAVIEW_H
#define UI_CAMERAVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "FrameLabel.h"

QT_BEGIN_NAMESPACE

class Ui_CameraView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *frameLayout;
    FrameLabel *frameLabel;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QPushButton *recordButton;
    QLineEdit *recordPathEdit;
    QCheckBox *recordOriginalCheckbox;
    QPushButton *recordPathButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *hideSettingsButton;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *InfoTab;
    QGridLayout *gridLayout;
    QLabel *deviceNumberLabel;
    QLabel *label_26;
    QLabel *cameraResolutionLabel;
    QLabel *label_27;
    QLabel *captureRateLabel;
    QLabel *nFramesCapturedLabel;
    QLabel *label_23;
    QLabel *processingRateLabel;
    QLabel *nFramesProcessedLabel;
    QLabel *label_28;
    QLabel *roiLabel;
    QLabel *label_22;
    QLabel *mouseCursorPosLabel;
    QLabel *label_25;
    QProgressBar *imageBufferBar;
    QLabel *imageBufferLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearImageBufferButton;
    QLabel *label_24;

    void setupUi(QWidget *CameraView)
    {
        if (CameraView->objectName().isEmpty())
            CameraView->setObjectName(QStringLiteral("CameraView"));
        CameraView->resize(681, 695);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CameraView->sizePolicy().hasHeightForWidth());
        CameraView->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(CameraView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frameLayout = new QHBoxLayout();
        frameLayout->setObjectName(QStringLiteral("frameLayout"));
        frameLabel = new FrameLabel(CameraView);
        frameLabel->setObjectName(QStringLiteral("frameLabel"));
        frameLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameLabel->sizePolicy().hasHeightForWidth());
        frameLabel->setSizePolicy(sizePolicy1);
        frameLabel->setMouseTracking(true);
        frameLabel->setAutoFillBackground(true);
        frameLabel->setFrameShape(QFrame::Box);
        frameLabel->setAlignment(Qt::AlignCenter);

        frameLayout->addWidget(frameLabel);


        verticalLayout->addLayout(frameLayout);

        line_2 = new QFrame(CameraView);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        recordButton = new QPushButton(CameraView);
        recordButton->setObjectName(QStringLiteral("recordButton"));

        gridLayout_2->addWidget(recordButton, 0, 0, 1, 1);

        recordPathEdit = new QLineEdit(CameraView);
        recordPathEdit->setObjectName(QStringLiteral("recordPathEdit"));

        gridLayout_2->addWidget(recordPathEdit, 1, 1, 1, 1);

        recordOriginalCheckbox = new QCheckBox(CameraView);
        recordOriginalCheckbox->setObjectName(QStringLiteral("recordOriginalCheckbox"));

        gridLayout_2->addWidget(recordOriginalCheckbox, 0, 1, 1, 1);

        recordPathButton = new QPushButton(CameraView);
        recordPathButton->setObjectName(QStringLiteral("recordPathButton"));

        gridLayout_2->addWidget(recordPathButton, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        hideSettingsButton = new QPushButton(CameraView);
        hideSettingsButton->setObjectName(QStringLiteral("hideSettingsButton"));

        gridLayout_2->addWidget(hideSettingsButton, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        line = new QFrame(CameraView);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(3);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(CameraView);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        tabWidget->setMinimumSize(QSize(0, 0));
        InfoTab = new QWidget();
        InfoTab->setObjectName(QStringLiteral("InfoTab"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(InfoTab->sizePolicy().hasHeightForWidth());
        InfoTab->setSizePolicy(sizePolicy4);
        InfoTab->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(InfoTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        deviceNumberLabel = new QLabel(InfoTab);
        deviceNumberLabel->setObjectName(QStringLiteral("deviceNumberLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(deviceNumberLabel->sizePolicy().hasHeightForWidth());
        deviceNumberLabel->setSizePolicy(sizePolicy5);
        QFont font;
        font.setPointSize(8);
        deviceNumberLabel->setFont(font);
        deviceNumberLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(deviceNumberLabel, 1, 2, 1, 1);

        label_26 = new QLabel(InfoTab);
        label_26->setObjectName(QStringLiteral("label_26"));
        sizePolicy5.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy5);
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_26->setFont(font1);
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_26, 2, 1, 1, 1);

        cameraResolutionLabel = new QLabel(InfoTab);
        cameraResolutionLabel->setObjectName(QStringLiteral("cameraResolutionLabel"));
        sizePolicy5.setHeightForWidth(cameraResolutionLabel->sizePolicy().hasHeightForWidth());
        cameraResolutionLabel->setSizePolicy(sizePolicy5);
        cameraResolutionLabel->setFont(font);
        cameraResolutionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(cameraResolutionLabel, 2, 2, 1, 1);

        label_27 = new QLabel(InfoTab);
        label_27->setObjectName(QStringLiteral("label_27"));
        sizePolicy5.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy5);
        label_27->setFont(font1);
        label_27->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_27, 3, 1, 1, 1);

        captureRateLabel = new QLabel(InfoTab);
        captureRateLabel->setObjectName(QStringLiteral("captureRateLabel"));
        captureRateLabel->setEnabled(true);
        sizePolicy5.setHeightForWidth(captureRateLabel->sizePolicy().hasHeightForWidth());
        captureRateLabel->setSizePolicy(sizePolicy5);
        captureRateLabel->setFont(font);

        gridLayout->addWidget(captureRateLabel, 3, 2, 1, 1);

        nFramesCapturedLabel = new QLabel(InfoTab);
        nFramesCapturedLabel->setObjectName(QStringLiteral("nFramesCapturedLabel"));
        sizePolicy5.setHeightForWidth(nFramesCapturedLabel->sizePolicy().hasHeightForWidth());
        nFramesCapturedLabel->setSizePolicy(sizePolicy5);
        nFramesCapturedLabel->setFont(font);
        nFramesCapturedLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nFramesCapturedLabel, 3, 3, 1, 1);

        label_23 = new QLabel(InfoTab);
        label_23->setObjectName(QStringLiteral("label_23"));
        sizePolicy5.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy5);
        label_23->setFont(font1);

        gridLayout->addWidget(label_23, 4, 1, 1, 1);

        processingRateLabel = new QLabel(InfoTab);
        processingRateLabel->setObjectName(QStringLiteral("processingRateLabel"));
        sizePolicy5.setHeightForWidth(processingRateLabel->sizePolicy().hasHeightForWidth());
        processingRateLabel->setSizePolicy(sizePolicy5);
        processingRateLabel->setFont(font);

        gridLayout->addWidget(processingRateLabel, 4, 2, 1, 1);

        nFramesProcessedLabel = new QLabel(InfoTab);
        nFramesProcessedLabel->setObjectName(QStringLiteral("nFramesProcessedLabel"));
        sizePolicy5.setHeightForWidth(nFramesProcessedLabel->sizePolicy().hasHeightForWidth());
        nFramesProcessedLabel->setSizePolicy(sizePolicy5);
        nFramesProcessedLabel->setFont(font);
        nFramesProcessedLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nFramesProcessedLabel, 4, 3, 1, 1);

        label_28 = new QLabel(InfoTab);
        label_28->setObjectName(QStringLiteral("label_28"));
        sizePolicy5.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy5);
        label_28->setFont(font1);

        gridLayout->addWidget(label_28, 5, 1, 1, 1);

        roiLabel = new QLabel(InfoTab);
        roiLabel->setObjectName(QStringLiteral("roiLabel"));
        sizePolicy5.setHeightForWidth(roiLabel->sizePolicy().hasHeightForWidth());
        roiLabel->setSizePolicy(sizePolicy5);
        roiLabel->setFont(font);

        gridLayout->addWidget(roiLabel, 5, 2, 1, 1);

        label_22 = new QLabel(InfoTab);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy5.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy5);
        label_22->setFont(font1);

        gridLayout->addWidget(label_22, 6, 1, 1, 1);

        mouseCursorPosLabel = new QLabel(InfoTab);
        mouseCursorPosLabel->setObjectName(QStringLiteral("mouseCursorPosLabel"));
        sizePolicy5.setHeightForWidth(mouseCursorPosLabel->sizePolicy().hasHeightForWidth());
        mouseCursorPosLabel->setSizePolicy(sizePolicy5);
        mouseCursorPosLabel->setFont(font);

        gridLayout->addWidget(mouseCursorPosLabel, 6, 2, 1, 1);

        label_25 = new QLabel(InfoTab);
        label_25->setObjectName(QStringLiteral("label_25"));
        sizePolicy5.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy5);
        label_25->setFont(font1);
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_25, 7, 1, 1, 1);

        imageBufferBar = new QProgressBar(InfoTab);
        imageBufferBar->setObjectName(QStringLiteral("imageBufferBar"));
        sizePolicy5.setHeightForWidth(imageBufferBar->sizePolicy().hasHeightForWidth());
        imageBufferBar->setSizePolicy(sizePolicy5);
        imageBufferBar->setFont(font);
        imageBufferBar->setValue(0);

        gridLayout->addWidget(imageBufferBar, 7, 2, 1, 1);

        imageBufferLabel = new QLabel(InfoTab);
        imageBufferLabel->setObjectName(QStringLiteral("imageBufferLabel"));
        sizePolicy5.setHeightForWidth(imageBufferLabel->sizePolicy().hasHeightForWidth());
        imageBufferLabel->setSizePolicy(sizePolicy5);
        imageBufferLabel->setFont(font);
        imageBufferLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(imageBufferLabel, 7, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clearImageBufferButton = new QPushButton(InfoTab);
        clearImageBufferButton->setObjectName(QStringLiteral("clearImageBufferButton"));
        sizePolicy5.setHeightForWidth(clearImageBufferButton->sizePolicy().hasHeightForWidth());
        clearImageBufferButton->setSizePolicy(sizePolicy5);
        clearImageBufferButton->setFont(font);

        horizontalLayout->addWidget(clearImageBufferButton);


        gridLayout->addLayout(horizontalLayout, 7, 4, 1, 1);

        label_24 = new QLabel(InfoTab);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy5.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy5);
        label_24->setFont(font1);
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_24, 1, 1, 1, 1);

        tabWidget->addTab(InfoTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(CameraView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CameraView);
    } // setupUi

    void retranslateUi(QWidget *CameraView)
    {
        CameraView->setWindowTitle(QApplication::translate("CameraView", "Form", nullptr));
        recordButton->setText(QApplication::translate("CameraView", "Record", nullptr));
        recordOriginalCheckbox->setText(QApplication::translate("CameraView", "Record Original", nullptr));
        recordPathButton->setText(QApplication::translate("CameraView", "Select Destination", nullptr));
        hideSettingsButton->setText(QApplication::translate("CameraView", "Hide Settings", nullptr));
        label_26->setText(QApplication::translate("CameraView", "Camera Resolution:", nullptr));
        label_27->setText(QApplication::translate("CameraView", "Capture Rate:", nullptr));
        captureRateLabel->setText(QString());
        nFramesCapturedLabel->setText(QString());
        label_23->setText(QApplication::translate("CameraView", "Processing Rate:", nullptr));
        processingRateLabel->setText(QString());
        nFramesProcessedLabel->setText(QString());
        label_28->setText(QApplication::translate("CameraView", "ROI:", nullptr));
        roiLabel->setText(QString());
        label_22->setText(QApplication::translate("CameraView", "Cursor:", nullptr));
        mouseCursorPosLabel->setText(QString());
        label_25->setText(QApplication::translate("CameraView", "Image Buffer:", nullptr));
        imageBufferLabel->setText(QString());
        clearImageBufferButton->setText(QApplication::translate("CameraView", "Clear Image Buffer", nullptr));
        label_24->setText(QApplication::translate("CameraView", "Camera Device Number:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(InfoTab), QApplication::translate("CameraView", "Stream Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraView: public Ui_CameraView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAVIEW_H
