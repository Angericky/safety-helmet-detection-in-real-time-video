#ifndef SHAREDIMAGEBUFFER_H
#define SHAREDIMAGEBUFFER_H

// Qt
#include <QHash>
#include <QSet>
#include <QWaitCondition>
#include <QMutex>
// OpenCV
#include <opencv/cv.h>
#include <opencv/highgui.h>
// Local
#include <main/other/Buffer.h>

using namespace cv;

class SharedImageBuffer
{
    public:
        SharedImageBuffer();
        void add(int deviceNumber, Buffer<Mat> *imageBuffer);
        Buffer<Mat>* getByDeviceNumber(int deviceNumber);
        void removeByDeviceNumber(int deviceNumber);
        void wakeAll();
        bool containsImageBufferForDeviceNumber(int deviceNumber);

    private:
        QHash<int, Buffer<Mat>*> imageBufferMap;
        QWaitCondition wc;
        QMutex mutex;
        int nArrived;
};

#endif // SHAREDIMAGEBUFFER_H
