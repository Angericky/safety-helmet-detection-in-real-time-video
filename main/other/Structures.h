#ifndef STRUCTURES_H
#define STRUCTURES_H

// Qt
#include <QtCore/QRect>

struct ImageProcessingSettings{
    int amplification;
    int coWavelength;
    double coLow;
    double coHigh;
    double chromAttenuation;
    int frameWidth;
    int frameHeight;
    float framerate;
    int levels;

    ImageProcessingSettings() :
        amplification(0),
        coWavelength(0),
        coLow(0.1),
        coHigh(0.4),
        chromAttenuation(0),
        frameWidth(0),
        frameHeight(0),
        framerate(0),
        levels(4)
    {
    }
};

struct ImageProcessingFlags{
    bool grayscaleOn;
    bool colorMagnifyOn;
    bool laplaceMagnifyOn;
    bool waveletMagnifyOn;

    ImageProcessingFlags() :
        grayscaleOn(false),
        colorMagnifyOn(false),
        laplaceMagnifyOn(false),
        waveletMagnifyOn(false)
    {
    }
};

struct MouseData{
    QRect selectionBox;
    bool leftButtonRelease;
    bool rightButtonRelease;
};

struct ThreadStatisticsData{
    int averageFPS;
    double nFramesProcessed;
    double averageVidProcessingFPS;
};

#endif // STRUCTURES_H
