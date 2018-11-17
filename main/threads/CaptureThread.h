#ifndef CAPTURETHREAD_H
#define CAPTURETHREAD_H

// Qt
#include <QtCore/QTime>
#include <QtCore/QThread>
// OpenCV
#include <opencv2/highgui/highgui.hpp>
// Local
#include "main/helper/SharedImageBuffer.h"
#include "main/other/Config.h"
#include "main/other/Structures.h"

using namespace cv;

class ImageBuffer;

class CaptureThread : public QThread
{
    Q_OBJECT

    public:
        CaptureThread(SharedImageBuffer *sharedImageBuffer, int deviceNumber,
                      bool dropFrameIfBufferFull, int width, int height, int fpsLimit);
        void stop();
        bool connectToCamera();
        bool disconnectCamera();
        bool isCameraConnected();
        int getInputSourceWidth();
        int getInputSourceHeight();

    private:
        void updateFPS(int);
        SharedImageBuffer *sharedImageBuffer;
        VideoCapture cap;
        Mat grabbedFrame;
        QTime t;
        QMutex doStopMutex;
        QQueue<int> fps;
        struct ThreadStatisticsData statsData;
        volatile bool doStop;
        int captureTime;
        int sampleNumber;
        int fpsSum;
        bool dropFrameIfBufferFull;
        int deviceNumber;
        int width;
        int height;
        int fpsGoal;

    protected:
        void run();

    signals:
        void updateStatisticsInGUI(struct ThreadStatisticsData);
        void updateFramerate(double FPS);
};

#endif // CAPTURETHREAD_H
