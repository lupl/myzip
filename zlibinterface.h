#ifndef ZLIBINTERFACE
#define ZLIBINTERFACE

extern "C" {
#include "zlib.h"
#include "stdlib.h"
//#include "zip.h"
}
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

/**
Myzip文件头
beforeCompress  压缩前文件大小
afterCompress   压缩后文件大小

还可以保存其他信息
*/
typedef struct MyZipHeader
{
long beforeCompress;
long afterCompress;
}MyZipHeader;

/**
封装zlib方法类，该类将C语言风格zlib封装为c++风格
*/
class ZlibInterface {
public :
    ZlibInterface();
    ~ZlibInterface();

    int compressFile(const char *compressPath, const char *destPath);
    int uncompressFile(const char *uncompressPath, const char *destPath);

    int compressStdZip();
};

#endif // ZLIBINTERFACE

