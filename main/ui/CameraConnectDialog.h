#ifndef CAMERACONNECTDIALOG_H
#define CAMERACONNECTDIALOG_H

// Qt
#include <QDialog>
#include <QFileDialog>
#include <QtCore/QThread>
#include <QMessageBox>
#include <QDebug>
// Local
#include "main/other/Config.h"
// OpenCV
#include <opencv2/highgui/highgui.hpp>

namespace Ui {
class CameraConnectDialog;
}

class CameraConnectDialog : public QDialog
{
    Q_OBJECT
    
    public:
        explicit CameraConnectDialog(QWidget *parent=0);
        ~CameraConnectDialog();
        void setDeviceNumber();
        void setImageBufferSize();
        int getDeviceNumber();
        int getResolutionWidth();
        int getResolutionHeight();
        int getFpsNumber();
        int getImageBufferSize();
        bool getDropFrameCheckBoxState();
        bool getPgDevCheckBoxState();
        int getCaptureThreadPrio();
        int getProcessingThreadPrio();
        int getPlayerThreadPrio();
        bool isFile();
        bool isCamera();
        QString getFilepath();
        QString getTabLabel();

    private:
        Ui::CameraConnectDialog *ui;
        int countCameraDevices();

    public slots:
        void resetToDefaults();

    private slots:
        void toggleCameraGroupBox(bool state);
        void toggleFileGroupBox(bool state);
        void openButton_clicked();
};

#endif // CAMERACONNECTDIALOG_H
