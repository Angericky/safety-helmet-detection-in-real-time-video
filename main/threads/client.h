#ifndef CLIENT_H
#define CLIENT_H

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
#include<clientrecv.h>

class Client : public QThread
{
    Q_OBJECT

public:
    Client(std::string filename);
    ~Client();
    void run();
    int Send();
    qint64 blockSize;
    cv::VideoCapture cap;

private:
    QTimer* timer;
    int width;
    int height;
    clientrecv *recvThread;

private slots:
    void displayError(QAbstractSocket::SocketError);
    void requestNewFortune();
    void enableGetFortuneButton();
    void SendData();
    void Login();

private:
    bool c_stop;
};

#endif // CLIENT_H
