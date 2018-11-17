/********************************************************************************
** Form generated from reading UI file 'VideoView.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOVIEW_H
#define UI_VIDEOVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
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
    QProgressBar *saveProgressBar;
    QFrame *line;

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


        retranslateUi(VideoView);

        QMetaObject::connectSlotsByName(VideoView);
    } // setupUi

    void retranslateUi(QWidget *VideoView)
    {
        VideoView->setWindowTitle(QApplication::translate("VideoView", "Form", nullptr));
        PlayButton->setText(QApplication::translate("VideoView", "Play", nullptr));
#ifndef QT_NO_SHORTCUT
        PlayButton->setShortcut(QApplication::translate("VideoView", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        StopButton->setText(QApplication::translate("VideoView", "Stop", nullptr));
        currentTimeLabel->setText(QApplication::translate("VideoView", "00:00", nullptr));
        totalTimeLabel->setText(QApplication::translate("VideoView", "00:00", nullptr));
        LoopCheckBox->setText(QApplication::translate("VideoView", "Loop", nullptr));
        saveButton->setText(QApplication::translate("VideoView", "Save", nullptr));
        saveOriginalCheckBox->setText(QApplication::translate("VideoView", "Save Original", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoView: public Ui_VideoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOVIEW_H
