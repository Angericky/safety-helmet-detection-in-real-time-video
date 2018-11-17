/********************************************************************************
** Form generated from reading UI file 'VideoView.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOVIEW_H
#define UI_VIDEOVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "FrameLabel.h"

QT_BEGIN_NAMESPACE

class Ui_VideoView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *frameLayout;
    FrameLabel *frameLabel;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *playerControlLayout;
    QPushButton *PlayButton;
    QPushButton *StopButton;
    QLabel *currentTimeLabel;
    QSlider *TimeSlider;
    QLabel *totalTimeLabel;
    QCheckBox *LoopCheckBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *saveButton;
    QCheckBox *saveOriginalCheckBox;
    QSpacerItem *saveHorizontalSpacer;
    QPushButton *hideSettingsButton;
    QProgressBar *saveProgressBar;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *InfoTab;
    QGridLayout *gridLayout;
    QLabel *nFramesCapturedLabel;
    QLabel *label_23;
    QLabel *processingRateLabel;
    QLabel *cameraResolutionLabel;
    QLabel *deviceNumberLabel;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *captureRateLabel;
    QLabel *nFramesProcessedLabel;
    QLabel *label_28;
    QLabel *roiLabel;
    QLabel *label_22;
    QLabel *mouseCursorPosLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_24;
    QLabel *label;
    QLabel *currentFrameNumberLabel;

    void setupUi(QWidget *VideoView)
    {
        if (VideoView->objectName().isEmpty())
            VideoView->setObjectName(QStringLiteral("VideoView"));
        VideoView->resize(681, 695);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VideoView->sizePolicy().hasHeightForWidth());
        VideoView->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(VideoView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frameLayout = new QHBoxLayout();
        frameLayout->setObjectName(QStringLiteral("frameLayout"));
        frameLabel = new FrameLabel(VideoView);
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

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        playerControlLayout = new QHBoxLayout();
        playerControlLayout->setObjectName(QStringLiteral("playerControlLayout"));
        PlayButton = new QPushButton(VideoView);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(PlayButton->sizePolicy().hasHeightForWidth());
        PlayButton->setSizePolicy(sizePolicy2);
        PlayButton->setCheckable(false);

        playerControlLayout->addWidget(PlayButton);

        StopButton = new QPushButton(VideoView);
        StopButton->setObjectName(QStringLiteral("StopButton"));
        sizePolicy2.setHeightForWidth(StopButton->sizePolicy().hasHeightForWidth());
        StopButton->setSizePolicy(sizePolicy2);

        playerControlLayout->addWidget(StopButton);

        currentTimeLabel = new QLabel(VideoView);
        currentTimeLabel->setObjectName(QStringLiteral("currentTimeLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(currentTimeLabel->sizePolicy().hasHeightForWidth());
        currentTimeLabel->setSizePolicy(sizePolicy3);

        playerControlLayout->addWidget(currentTimeLabel);

        TimeSlider = new QSlider(VideoView);
        TimeSlider->setObjectName(QStringLiteral("TimeSlider"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TimeSlider->sizePolicy().hasHeightForWidth());
        TimeSlider->setSizePolicy(sizePolicy4);
        TimeSlider->setOrientation(Qt::Horizontal);

        playerControlLayout->addWidget(TimeSlider);

        totalTimeLabel = new QLabel(VideoView);
        totalTimeLabel->setObjectName(QStringLiteral("totalTimeLabel"));
        sizePolicy3.setHeightForWidth(totalTimeLabel->sizePolicy().hasHeightForWidth());
        totalTimeLabel->setSizePolicy(sizePolicy3);

        playerControlLayout->addWidget(totalTimeLabel);

        LoopCheckBox = new QCheckBox(VideoView);
        LoopCheckBox->setObjectName(QStringLiteral("LoopCheckBox"));

        playerControlLayout->addWidget(LoopCheckBox);


        verticalLayout_2->addLayout(playerControlLayout);

        line_2 = new QFrame(VideoView);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        saveButton = new QPushButton(VideoView);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_2->addWidget(saveButton);

        saveOriginalCheckBox = new QCheckBox(VideoView);
        saveOriginalCheckBox->setObjectName(QStringLiteral("saveOriginalCheckBox"));

        horizontalLayout_2->addWidget(saveOriginalCheckBox);

        saveHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(saveHorizontalSpacer);

        hideSettingsButton = new QPushButton(VideoView);
        hideSettingsButton->setObjectName(QStringLiteral("hideSettingsButton"));

        horizontalLayout_2->addWidget(hideSettingsButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);

        saveProgressBar = new QProgressBar(VideoView);
        saveProgressBar->setObjectName(QStringLiteral("saveProgressBar"));
        saveProgressBar->setValue(0);

        verticalLayout->addWidget(saveProgressBar);

        line = new QFrame(VideoView);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(VideoView);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sizePolicy4.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy4);
        tabWidget->setMinimumSize(QSize(0, 0));
        InfoTab = new QWidget();
        InfoTab->setObjectName(QStringLiteral("InfoTab"));
        sizePolicy2.setHeightForWidth(InfoTab->sizePolicy().hasHeightForWidth());
        InfoTab->setSizePolicy(sizePolicy2);
        InfoTab->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(InfoTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        nFramesCapturedLabel = new QLabel(InfoTab);
        nFramesCapturedLabel->setObjectName(QStringLiteral("nFramesCapturedLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(nFramesCapturedLabel->sizePolicy().hasHeightForWidth());
        nFramesCapturedLabel->setSizePolicy(sizePolicy5);
        QFont font;
        font.setPointSize(8);
        nFramesCapturedLabel->setFont(font);
        nFramesCapturedLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nFramesCapturedLabel, 3, 3, 1, 1);

        label_23 = new QLabel(InfoTab);
        label_23->setObjectName(QStringLiteral("label_23"));
        sizePolicy5.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy5);
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_23->setFont(font1);

        gridLayout->addWidget(label_23, 5, 1, 1, 1);

        processingRateLabel = new QLabel(InfoTab);
        processingRateLabel->setObjectName(QStringLiteral("processingRateLabel"));
        sizePolicy5.setHeightForWidth(processingRateLabel->sizePolicy().hasHeightForWidth());
        processingRateLabel->setSizePolicy(sizePolicy5);
        processingRateLabel->setFont(font);

        gridLayout->addWidget(processingRateLabel, 5, 2, 1, 1);

        cameraResolutionLabel = new QLabel(InfoTab);
        cameraResolutionLabel->setObjectName(QStringLiteral("cameraResolutionLabel"));
        sizePolicy5.setHeightForWidth(cameraResolutionLabel->sizePolicy().hasHeightForWidth());
        cameraResolutionLabel->setSizePolicy(sizePolicy5);
        cameraResolutionLabel->setFont(font);
        cameraResolutionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(cameraResolutionLabel, 2, 2, 1, 1);

        deviceNumberLabel = new QLabel(InfoTab);
        deviceNumberLabel->setObjectName(QStringLiteral("deviceNumberLabel"));
        sizePolicy5.setHeightForWidth(deviceNumberLabel->sizePolicy().hasHeightForWidth());
        deviceNumberLabel->setSizePolicy(sizePolicy5);
        deviceNumberLabel->setFont(font);
        deviceNumberLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(deviceNumberLabel, 1, 2, 1, 1);

        label_26 = new QLabel(InfoTab);
        label_26->setObjectName(QStringLiteral("label_26"));
        sizePolicy5.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy5);
        label_26->setFont(font1);
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_26, 2, 1, 1, 1);

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

        nFramesProcessedLabel = new QLabel(InfoTab);
        nFramesProcessedLabel->setObjectName(QStringLiteral("nFramesProcessedLabel"));
        sizePolicy5.setHeightForWidth(nFramesProcessedLabel->sizePolicy().hasHeightForWidth());
        nFramesProcessedLabel->setSizePolicy(sizePolicy5);
        nFramesProcessedLabel->setFont(font);
        nFramesProcessedLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nFramesProcessedLabel, 5, 3, 1, 1);

        label_28 = new QLabel(InfoTab);
        label_28->setObjectName(QStringLiteral("label_28"));
        sizePolicy5.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy5);
        label_28->setFont(font1);

        gridLayout->addWidget(label_28, 6, 1, 1, 1);

        roiLabel = new QLabel(InfoTab);
        roiLabel->setObjectName(QStringLiteral("roiLabel"));
        sizePolicy5.setHeightForWidth(roiLabel->sizePolicy().hasHeightForWidth());
        roiLabel->setSizePolicy(sizePolicy5);
        roiLabel->setFont(font);

        gridLayout->addWidget(roiLabel, 6, 2, 1, 1);

        label_22 = new QLabel(InfoTab);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy5.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy5);
        label_22->setFont(font1);

        gridLayout->addWidget(label_22, 7, 1, 1, 1);

        mouseCursorPosLabel = new QLabel(InfoTab);
        mouseCursorPosLabel->setObjectName(QStringLiteral("mouseCursorPosLabel"));
        sizePolicy5.setHeightForWidth(mouseCursorPosLabel->sizePolicy().hasHeightForWidth());
        mouseCursorPosLabel->setSizePolicy(sizePolicy5);
        mouseCursorPosLabel->setFont(font);

        gridLayout->addWidget(mouseCursorPosLabel, 7, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 8, 4, 1, 1);

        label_24 = new QLabel(InfoTab);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy5.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy5);
        label_24->setFont(font1);
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_24, 1, 1, 1, 1);

        label = new QLabel(InfoTab);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 4, 1, 1, 1);

        currentFrameNumberLabel = new QLabel(InfoTab);
        currentFrameNumberLabel->setObjectName(QStringLiteral("currentFrameNumberLabel"));
        currentFrameNumberLabel->setFont(font);

        gridLayout->addWidget(currentFrameNumberLabel, 4, 2, 1, 1);

        tabWidget->addTab(InfoTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(VideoView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VideoView);
    } // setupUi

    void retranslateUi(QWidget *VideoView)
    {
        VideoView->setWindowTitle(QApplication::translate("VideoView", "Form", Q_NULLPTR));
        PlayButton->setText(QApplication::translate("VideoView", "Play", Q_NULLPTR));
        PlayButton->setShortcut(QApplication::translate("VideoView", "Return", Q_NULLPTR));
        StopButton->setText(QApplication::translate("VideoView", "Stop", Q_NULLPTR));
        currentTimeLabel->setText(QApplication::translate("VideoView", "00:00", Q_NULLPTR));
        totalTimeLabel->setText(QApplication::translate("VideoView", "00:00", Q_NULLPTR));
        LoopCheckBox->setText(QApplication::translate("VideoView", "Loop", Q_NULLPTR));
        saveButton->setText(QApplication::translate("VideoView", "Save", Q_NULLPTR));
        saveOriginalCheckBox->setText(QApplication::translate("VideoView", "Save Original", Q_NULLPTR));
        hideSettingsButton->setText(QApplication::translate("VideoView", "Hide Settings", Q_NULLPTR));
        nFramesCapturedLabel->setText(QString());
        label_23->setText(QApplication::translate("VideoView", "Processing Rate:", Q_NULLPTR));
        processingRateLabel->setText(QString());
        label_26->setText(QApplication::translate("VideoView", "Resolution:", Q_NULLPTR));
        label_27->setText(QApplication::translate("VideoView", "Framerate:", Q_NULLPTR));
        captureRateLabel->setText(QString());
        nFramesProcessedLabel->setText(QString());
        label_28->setText(QApplication::translate("VideoView", "ROI:", Q_NULLPTR));
        roiLabel->setText(QString());
        label_22->setText(QApplication::translate("VideoView", "Cursor:", Q_NULLPTR));
        mouseCursorPosLabel->setText(QString());
        label_24->setText(QApplication::translate("VideoView", "Filename:", Q_NULLPTR));
        label->setText(QApplication::translate("VideoView", "Framenumber:", Q_NULLPTR));
        currentFrameNumberLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(InfoTab), QApplication::translate("VideoView", "Video Information", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoView: public Ui_VideoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOVIEW_H
