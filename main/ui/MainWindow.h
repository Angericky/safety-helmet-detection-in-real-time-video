#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Qt
#include <QMainWindow>
#include <QPushButton>
#include <QShortcut>
#include <QLabel>
#include <QMessageBox>
#include <QUrl>
// Local
#include "main/ui/CameraConnectDialog.h"
#include "main/ui/CameraView.h"
#include "main/ui/VideoView.h"
#include "main/other/Buffer.h"
#include "main/helper/SharedImageBuffer.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;
        QPushButton *connectToCameraButton;
        QPushButton *hideSettingsButton;
        QMap<int, int> deviceNumberMap;
        QMap<int, CameraView*> cameraViewMap;
        QMap<QString, int> fileNumberMap;
        QMap<QString, VideoView*> videoViewMap;
        SharedImageBuffer *sharedImageBuffer;
        bool removeFromMapByTabIndex(QMap<int, int>& map, int tabIndex);
        void updateMapValues(QMap<int, int>& map, int tabIndex);
        bool removeFromMapByTabIndex(QMap<QString, int>& map, int tabIndex);
        void updateMapValues(QMap<QString, int>& map, int tabIndex);
        void setTabCloseToolTips(QTabWidget *tabs, QString tooltip);
        void addCodecs();
        //Codecs
        int saveCodec;
        bool useVideoCodec;

    public slots:
        void connectToCamera();
        void disconnectCamera(int index);
        void showAboutDialog();
        void showAboutQtDialog();
        void showHelpDialog();
        void setFullScreen(bool);
        void setCodec(QAction* action);
};

#endif // MAINWINDOW_H
