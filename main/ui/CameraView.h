#ifndef CAMERAVIEW_H
#define CAMERAVIEW_H

// Qt
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
// Local
#include "main/threads/CaptureThread.h"
#include "main/threads/ProcessingThread.h"
#include "main/other/Structures.h"
#include "main/helper/SharedImageBuffer.h"
#include "main/ui/MagnifyOptions.h"
#include "main/ui/FrameLabel.h"

namespace Ui {
    class CameraView;
}

class CameraView : public QWidget
{
    Q_OBJECT

    public:
        explicit CameraView(QWidget *parent, int deviceNumber, SharedImageBuffer *sharedImageBuffer);
        ~CameraView();
        bool connectToCamera(bool dropFrame, int capThreadPrio, int procThreadPrio, int width, int height, int fps);
        void setCodec(int codec);

    private:
        Ui::CameraView *ui;
        ProcessingThread *processingThread;
        CaptureThread *captureThread;
        SharedImageBuffer *sharedImageBuffer;
        ImageProcessingFlags imageProcessingFlags;
        void stopCaptureThread();
        void stopProcessingThread();
        int deviceNumber;
        bool isCameraConnected;
        FrameLabel *originalFrame;
        void handleOriginalWindow(bool doEmit);
        QString getFormattedTime(int timeInMSeconds);
        int codec;

    public slots:
        void newMouseData(struct MouseData mouseData);
        void newMouseDataOriginalFrame(struct MouseData mouseData);
        void updateMouseCursorPosLabel();
        void updateMouseCursorPosLabelOriginalFrame();
        void clearImageBuffer();
        void frameWritten(int frames);

    private slots:
        void updateFrame(const QImage &frame);
        void updateOriginalFrame(const QImage &frame);
        void updateProcessingThreadStats(struct ThreadStatisticsData statData);
        void updateCaptureThreadStats(struct ThreadStatisticsData statData);
        void handleContextMenuAction(QAction *action);
        void hideSettings();
        void record();
        void selectButton_action();
        void handleTabChange(int index);

    signals:
        void newImageProcessingFlags(struct ImageProcessingFlags imageProcessingFlags);
        void setROI(QRect roi);
};

#endif // CAMERAVIEW_H
