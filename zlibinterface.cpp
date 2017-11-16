#include "zlibinterface.h"

ZlibInterface::ZlibInterface()
{

}

ZlibInterface::~ZlibInterface()
{

}

int ZlibInterface::compressFile(const char *compressPath, const char *destPath)
{
    long long fileSize;
    uLong sourceLen, destLen;
    ifstream compressInStream;
    ofstream compressOutStream;
    MyZipHeader mh;//zip文件头，保存压缩前的大小

    compressInStream.open(compressPath, ios::in | ios::binary);
    compressOutStream.open(destPath, ios::out | ios::binary);
    compressInStream.seekg(0, ios::end);
    fileSize = compressInStream.tellg();
    mh.beforeCompress = fileSize;
//    cout << "file size : " << fileSize << endl;
    compressInStream.seekg(0, ios::beg);
    sourceLen = fileSize;
    destLen = compressBound(sourceLen);
    //大文件有问题,此处待修改
    unsigned char* pBufferRes=new unsigned char[sourceLen];
    unsigned char* pBufferDes=new unsigned char[destLen];
    memset(pBufferRes,0,sourceLen);
    memset(pBufferDes,0,destLen);
    compressInStream.read((char *)pBufferRes, sourceLen);
    compressInStream.close();
    compress(pBufferDes, &destLen, pBufferRes, sourceLen);
//    cout << "compress : " << destLen << endl;
//    memset(pBufferRes,0,sourceLen);
//    uncompress(pBufferRes, &sourceLen, pBufferDes, destLen);
//    cout << "uncompress : " << sourceLen << endl;
//    cout << "uncompress : " << pBufferRes << endl;

    mh.afterCompress = destLen;
    compressOutStream.write((char *)&mh, sizeof(mh));
    compressOutStream.write((char *)pBufferDes, destLen);
    compressOutStream.close();
    delete []pBufferRes;
    delete []pBufferDes;

    return 0;
}

int ZlibInterface::uncompressFile(const char *uncompressPath, const char *destPath)
{
    long long fileSize;
    uLong sourceLen, destLen;
    ifstream compressInStream;
    ofstream compressOutStream;
    MyZipHeader mh;

    compressInStream.open(uncompressPath, ios::in | ios::binary);
    compressOutStream.open(destPath, ios::out | ios::binary);
    compressInStream.seekg(0, ios::end);
    fileSize = compressInStream.tellg();
//    cout << "file size : " << fileSize << endl;
    compressInStream.seekg(0, ios::beg);
    sourceLen = fileSize;
    compressInStream.read((char *)&mh, sizeof(mh));
    destLen = mh.beforeCompress;
//    cout << mh.afterCompress << endl;

    //大文件有问题,此处待修改
    unsigned char* pBufferRes=new unsigned char[sourceLen];
    unsigned char* pBufferDes=new unsigned char[destLen];
    memset(pBufferRes,0,sourceLen);
    memset(pBufferDes,0,destLen);
    compressInStream.read((char *)pBufferRes, sourceLen);
    compressInStream.close();
    uncompress(pBufferDes, &destLen, pBufferRes, sourceLen);
//    cout << "uncompress : " << sourceLen << endl;
//    cout << "uncompress : " << destLen << endl;

    compressOutStream.write((char *)pBufferDes, destLen);
    compressOutStream.close();
    delete []pBufferRes;
    delete []pBufferDes;

    return 0;
}

int ZlibInterface::compressStdZip()
{
    zipFile newZipFile = zipOpen(W2CA(zipFileName), APPEND_STATUS_CREATE);
    return 0;
}
