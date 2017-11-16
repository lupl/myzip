#include "filemgr.h"

FileMgr::FileMgr(QDir dir)
{
    this->initFileMgr(dir);
}

FileMgr::~FileMgr()
{

}

void FileMgr::initFileMgr(QDir dir)
{
    if (!dir.exists()) {
        dir.setPath(QString("./"));
    }
    this->curDir = dir;
    this->setFileList(dir);
}

void FileMgr::setFileList(QDir dir)
{
    dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::Dirs);
    dir.setSorting(QDir::Name);
    this->fileInfoList = dir.entryInfoList();
    //    for (int i = 0; i < fileInfoList.size(); ++i) {
    //        QFileInfo fileInfo = fileInfoList.at(i);
    //        std::cout << qPrintable(QString("%1 %2").arg(fileInfo.size(), 10)
    //                                .arg(fileInfo.fileName()));
    //        std::cout << std::endl;
    //    }
}

QFileInfoList FileMgr::getFileList()
{
    return this->fileInfoList;
}
