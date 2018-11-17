/********************************************************************************
** Form generated from reading UI file 'CameraConnectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERACONNECTDIALOG_H
#define UI_CAMERACONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
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
    QGroupBox *fileGroupBox;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *fileSourceEdit;
    QPushButton *openButton;
    QHBoxLayout *horizontalLayout_13;
    QFrame *line_2;
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
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cameraGroupBox->sizePolicy().hasHeightForWidth());
        cameraGroupBox->setSizePolicy(sizePolicy1);
        cameraGroupBox->setAutoFillBackground(false);
        cameraGroupBox->setCheckable(true);
        verticalLayout_6 = new QVBoxLayout(cameraGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));

        verticalLayout_4->addWidget(cameraGroupBox);

        fileGroupBox = new QGroupBox(layoutWidget);
        fileGroupBox->setObjectName(QStringLiteral("fileGroupBox"));
        fileGroupBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy1);
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
        QFont font;
        font.setPointSize(9);
        fileSourceEdit->setFont(font);

        horizontalLayout_10->addWidget(fileSourceEdit);

        openButton = new QPushButton(fileGroupBox);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout_10->addWidget(openButton);


        verticalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));

        verticalLayout_9->addLayout(horizontalLayout_13);


        verticalLayout_4->addWidget(fileGroupBox);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);

        horizontalLayout_5->addWidget(label_8);

        tabLabelEdit = new QLineEdit(layoutWidget);
        tabLabelEdit->setObjectName(QStringLiteral("tabLabelEdit"));
        tabLabelEdit->setFont(font);

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
        CameraConnectDialog->setWindowTitle(QApplication::translate("CameraConnectDialog", "Connect to Camera or Open File", nullptr));
        cameraGroupBox->setTitle(QApplication::translate("CameraConnectDialog", "Camera", nullptr));
        fileGroupBox->setTitle(QApplication::translate("CameraConnectDialog", "Video File", nullptr));
        openButton->setText(QApplication::translate("CameraConnectDialog", "Open", nullptr));
        label_8->setText(QApplication::translate("CameraConnectDialog", "Tab Label:", nullptr));
        resetToDefaultsPushButton->setText(QApplication::translate("CameraConnectDialog", "Reset to Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraConnectDialog: public Ui_CameraConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERACONNECTDIALOG_H
