#ifndef CHEADER_H
#define CHEADER_H
#include <winsock2.h>
// OpenCV
#include <opencv2/highgui/highgui.hpp>
// Local
#include "main/other/Config.h"

WORD wVersionRequested;
WSADATA wsaData;
SOCKET sClient; //连接套接字
struct sockaddr_in saServer; //地址信息

std::vector<cv::Mat> recvbuffer;

#endif // CHEADER_H
