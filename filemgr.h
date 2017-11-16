#ifndef FILEMGR
#define FILEMGR

#include <QDir>
#include <QFile>
#include <iostream>

class FileMgr {

public:
    FileMgr();
    FileMgr(QDir dir);
    ~FileMgr();
    QFileInfoList getFileList();//获取当前目录文件列表

//变量
private :
    QDir curDir;//当前目录
    QFileInfoList fileInfoList;

//方法
private :
    void initFileMgr(QDir dir);//初始化FileMgr类
    void setFileList(QDir dir);
    QDir *bakeToParentDir();//回到上层目录
};

#endif // FILEMGR
