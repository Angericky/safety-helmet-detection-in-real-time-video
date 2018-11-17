#ifndef MATTOQIMAGE_H
#define MATTOQIMAGE_H

// Qt
#include <QtGui/QImage>
// OpenCV
#include <opencv/cv.h>
#include <opencv/highgui.h>

using namespace cv;

QImage MatToQImage(const Mat&);

#endif // MATTOQIMAGE_H
