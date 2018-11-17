#pragma once
#include "client.h"
#include <QDebug>
#include <QMessageBox>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string>
#include <cheader.h>
#include <string.h>
#include <winsock2.h>
#define printf qDebug
#define SERVER_PORT 9210 //侦听端口
#pragma comment(lib,"ws2_32.lib")

using namespace std;
extern WORD wVersionRequested;
extern WSADATA wsaData;
extern SOCKET sClient; //连接套接字
extern struct sockaddr_in saServer; //地址信息

struct SData //数据包
{
    int index;
    int length;
    char sendMessage[1050*3];
    int fin;
    int f;
}sdata;

struct SDatawh
{
    int w;
    int h;
}sdatawh;

Client::Client(string filename)
{
    //releaseFile();
    this->cap = cv::VideoCapture();
    cap.open(filename);
    c_stop=false;
    //WinSock初始化
    int ret;
    wVersionRequested = MAKEWORD(2, 2); //希望使用的WinSock DLL的版本
    ret = WSAStartup(wVersionRequested, &wsaData);
    if (ret != 0)
    {
        printf("WSAStartup() failed!\n");
    }
    //确认WinSock DLL支持版本2.2
    if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2)
    {
        WSACleanup();
        printf("Invalid WinSock version!\n");
    }
    //创建Socket,使用TCP协议
    sClient = socket(AF_INET, SOCK_STREAM, 0);
    if (sClient == INVALID_SOCKET)
    {
        WSACleanup();
        printf("INVALID SOCKET\n");
    }
    //构建服务器地址信息
    saServer.sin_family = AF_INET; //地址家族
    saServer.sin_port = htons(SERVER_PORT); //注意转化为网络节序
    saServer.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
    //连接服务器
    ret = ::connect(sClient, (struct sockaddr *)&saServer, sizeof(saServer));
    if (ret == SOCKET_ERROR)
    {
        printf("connect() failed!");
        closesocket(sClient); //关闭套接字
        WSACleanup();
    }
    else{
        printf("Client connect success!");
    }
    int nZero = 10;
    setsockopt(sClient, SOL_SOCKET, SO_SNDBUF, (char *)&nZero, sizeof(nZero));
}

Client::~Client()
{
    c_stop=true;
}

void Client::run(){
    int val=Send();
    if(!val)
        printf("send success!\n");
    else
        printf("send failed!\n");
}

int Client::Send()
{
    int ret;
    cv::Mat frame;
    int f=0;
    height=cap.get(CV_CAP_PROP_FRAME_HEIGHT);
    width=cap.get(CV_CAP_PROP_FRAME_WIDTH);
    sdatawh.h=height;
    sdatawh.w=width;
    ret = ::send(sClient, (char*)&sdatawh, sizeof(struct SDatawh), 0);
    if (ret == SOCKET_ERROR)
    {
        printf("socket error: width and height failed! code:%d", WSAGetLastError());
    }
    else{
        printf("width and height send success!");
    }
    while(1){
        cap>>frame;
        if(!frame.empty()){
            int index=0;
            f++;
            printf("success send: file%d",f);

            int end = height*width*3;
            printf("width=%d height=%d index=%d",width,height,width*height/1024);
            while (end > 0)
            {
                int i,j;
                for (j = 0; j < height ; j++)
                {
                    for(i = 0; i < width; i++)
                    {
                        if(j * width + i - index*1024<1024){
                            sdata.sendMessage[(j * width  + i - index * 1024) * 3] = frame.at<cv::Vec3b>(j, i)[0];//pData[width * i + j];//frame.at<Vec3b>(j, i);//((char *)(frame.data + i * frame->widthStep))[j];
                            sdata.sendMessage[(j * width  + i - index * 1024) * 3+1] = frame.at<cv::Vec3b>(j, i)[1];//pData[width * i + j];//frame.at<Vec3b>(j, i);//((char *)(frame.data + i * frame->widthStep))[j];
                            sdata.sendMessage[(j * width  + i - index * 1024) * 3+2] = frame.at<cv::Vec3b>(j, i)[2];//pData[width * i + j];//frame.at<Vec3b>(j, i);//((char *)(frame.data + i * frame->widthStep))[j];
                        }
                        else{
                            if (end >= 1024*3) //剩余很多信息
                            {
                                sdata.fin = 0;
                                sdata.length = 1024*3;
                            }
                            else
                            {
                                printf("END!");
                                sdata.fin = 1;
                                sdata.length = end;
                            }
                            sdata.f=f;
                            sdata.index=index;
                            ret = ::send(sClient, (char*)&sdata, sizeof(struct SData), 0);
                            if (ret == SOCKET_ERROR)
                            {
                                printf("socket error: send() failed! code:%d", WSAGetLastError());
                            }
                            else
                            {
                                end -= 1024*3;
                            }
                            index++;
                            memset(sdata.sendMessage, '0', sizeof(sdata.sendMessage));
                            i--;
                        }
                    }
                }

                printf("END!");
                sdata.fin = 1;
                sdata.length = end;

                sdata.f=f;
                sdata.index=index;
                ret = ::send(sClient, (char*)&sdata, sizeof(struct SData), 0);
                if(f==1)
                {
                    recvThread=new clientrecv(width,height);
                    recvThread->start();
                }
                if (ret == SOCKET_ERROR)
                {
                    printf("socket error: send() failed! code:%d", WSAGetLastError());
                }
                else
                {
                    end -= 1024*3;
                    //printf("success send: file%d %dth",f,index);
                }
                index++;
                memset(sdata.sendMessage, '0', sizeof(sdata.sendMessage));
            }
            cv::waitKey(30);
        }
        else
        {
            sdata.length=0;
            sdata.f=0;
            sdata.fin=2;
            sdata.index=0;
            sdata.sendMessage[0]=0;
            ret = ::send(sClient, (char*)&sdata, sizeof(struct SData), 0);
            if (ret == SOCKET_ERROR)
            {
                printf("video finish send failed! code:%d", WSAGetLastError());
            }
            else{
                printf("video finish send success!");
            }
            break;
        }
    }
    //closesocket(sClient); //关闭套接字
    //WSACleanup();
    return 0;
}

void Client::displayError(QAbstractSocket::SocketError)
{
    qDebug()<<"传输失败！\n";
}

void Client::requestNewFortune()
{
    //timer->start(30);
}

void Client::enableGetFortuneButton()
{

    //timer->stop();
}

void Client::SendData()
{
    while(!c_stop){


        //Login();
    }
}

void Client::Login()
{
    /*qDebug()<<"connect";
    Mat frame;
    cap>>frame;
    if(!frame.empty()){
       cvtColor(frame,frame,CV_BGR2RGB);

        QByteArray byte;
        QBuffer buf(&byte);
        QImage image((unsigned const char*)frame.data,frame.cols,frame.rows,QImage::Format_RGB888);
        image.save(&buf,"JPEG");
        QByteArray ss=qCompress(byte,1);
        QByteArray vv=ss.toBase64();

        QByteArray ba;
        QDataStream out(&ba,QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_5_7);

        out<<(quint64)0;
        out<<vv;
        out.device()->seek(0);
        out<<(quint64)(ba.size()-sizeof(quint64));
        tcpSocket->write(ba);

        qDebug()<<"Client send.";

    }
    else{
        qDebug()<<"ClientThread quit.";
        c_stop=true;
        quit();
    }*/
}
