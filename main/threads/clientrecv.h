#ifndef CLIENTRECV_H
#define CLIENTRECV_H
#include<QtNetwork>
#include<QImage>
#include<QImageReader>
#include<QTime>
#include<QDebug>
#include<QMessageBox>
#include<QFileDialog>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/core/core.hpp>

class clientrecv : public QThread
{
     Q_OBJECT

public:
    clientrecv(int width,int height);
    void run();
    int width;
    int height;

private:
    struct RData //数据包
    {
        int index;
        int length;
        char receivemessage[1050*3]; //内容信息
        int fin;
        int f;
    }data;
};

#endif // CLIENTRECV_H
