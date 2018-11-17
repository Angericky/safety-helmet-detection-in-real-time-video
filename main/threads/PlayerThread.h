#ifndef PLAYERTHREAD_H
#define PLAYERTHREAD_H

// C++
#include <cmath>
// Qt
#include <QtCore/QThread>
#include <QFile>
#include <QMutex>
#include <QDebug>
#include <QtCore/QTime>
#include <QtCore/QQueue>
// OpenCV
#include <opencv2/highgui/highgui.hpp>
// Local
#include "main/other/Config.h"
#include "main/other/Structures.h"
#include "main/helper/MatToQImage.h"
#include "main/magnification/Magnificator.h"
#include "main/threads/client.h"

class PlayerThread : public QThread
{
    Q_OBJECT
    
    public:
        PlayerThread(const std::string filepath, int width, int height, double fps);
        ~PlayerThread();
        void stop();
        // Capture
        bool loadFile();
        bool releaseFile();
        bool isFileLoaded();
        int getInputSourceWidth();
        int getInputSourceHeight();
        // Process
        QRect getCurrentROI();
        // Player
        bool isStopping();
        bool isPausing();
        bool isPlaying();
        void setCurrentFrame(int framenumber);
        void playAction();
        void stopAction();
        void pauseAction();
        void setCurrentTime(int ms);
        double getCurrentFramenumber();
        double getCurrentPosition();
        double getInputFrameLength();
        double getInputTimeLength();
        double getFPS();
        void getOriginalFrame(bool doEmit);

private:
        QMutex doStopMutex;
        struct ThreadStatisticsData statsData;
        double lengthInMs;
        double lengthInFrames;
        const std::string filepath;
        int getCurrentReadIndex();
        // Capture
        cv::VideoCapture cap;
        cv::Mat grabbedFrame;
        int playedTime;
        int width;
        int height;
        std::vector<cv::Mat> originalBuffer;
        void setBufferSize();
        Client *clientThread;

        // Process
        // This is the current Framenr that is grabbed from magnificator is always
        // < processingBufferLength, used to process videos rightly from beginning of vid
        int currentWriteIndex;
        //Client *clientThread;
        //Server *serverThread;
        double fps;
        void updateFPS(int timeElapsed);
        cv::Mat currentFrame;
        cv::Rect currentROI;
        QImage frame;
        QImage originalFrame;
        // processing measurement
        QTime t;
        int processingTime;
        int fpsSum;
        int sampleNumber;
        QQueue<int> fpsQueue;
        QMutex processingMutex;
        cv::Size frameSize;
        cv::Point framePoint;
        struct ImageProcessingFlags imgProcFlags;
        struct ImageProcessingSettings imgProcSettings;
        // Player variables
        volatile bool doStop;
        volatile bool doPause;
        volatile bool doPlay;
        bool emitOriginal;
        void endOfFrame_action();
        // Magnifying
        bool processingBufferFilled();
        void fillProcessingBuffer();
        Magnificator magnificator;
        std::vector<cv::Mat> processingBuffer;
        int processingBufferLength;


protected:
        void run();

private slots:
        void updateImageProcessingFlags(struct ImageProcessingFlags);
        void updateImageProcessingSettings(struct ImageProcessingSettings);
        void setROI(QRect roi);
        void pauseThread();

signals:
        void updateStatisticsInGUI(struct ThreadStatisticsData);
        void newFrame(const QImage &frame);
        void origFrame(const QImage &frame);
        void endOfFrame();
        void maxLevels(int levels);
};

#endif // PLAYERTHREAD_H
