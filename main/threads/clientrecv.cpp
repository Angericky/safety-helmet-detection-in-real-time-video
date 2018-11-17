#include "clientrecv.h"
#include <winsock2.h>
extern WORD wVersionRequested;
extern WSADATA wsaData;
extern SOCKET sClient; //连接套接字
extern struct sockaddr_in saServer; //地址信息
extern std::vector<cv::Mat> recvbuffer;

clientrecv::clientrecv(int width,int height)
{
    this->width=width;
    this->height=height;
}

void clientrecv::run()
{
  qDebug("recv start!");
  cv::Mat image = cv::Mat::zeros(height, width, CV_8UC3);
  int ret,index;
  while(1){
      memset(data.receivemessage, '0', sizeof(data.receivemessage));
      ret = recv(sClient, (char *)&data, sizeof(data), 0);  //第二个参数使用强制类型，为一个数据包
      if (ret == SOCKET_ERROR)
      {
          qDebug("recv() failed!\n");
          break;
      }

      int i,k,j;
      //qDebug("length: %d",data.length/3);
      index=data.index*1024;
      //qDebug("index: %d",index);
      for (i = 0; i < 1024; i++)
      {
          j = index / width;
          k = index - j * width;
          if(j<height&&k<width&&j>=0&&k>=0)
          {
              image.at<cv::Vec3b>(j, k)[0]=data.receivemessage[i * 3];
              image.at<cv::Vec3b>(j, k)[1]=data.receivemessage[i * 3 + 1];
              image.at<cv::Vec3b>(j, k)[2]=data.receivemessage[i * 3 + 2];
              index++;
          }
      }
      if (data.fin==1){
          cv::imshow("clientrecv", image);
          index=0;
          recvbuffer.push_back(image);
          qDebug("client receive success! file: %d\n",data.f);
          cv::waitKey(30);
      }
      if(data.fin==2)
            {
                cv::destroyWindow("clientrecv");
                break;
            }
  }
}
