#include "qwmisc.h"


//QString WWB::extractFileName(const QString& aFileName)
//{ //获取文件名，去除文件目录
//    QString str=aFileName;
//    int i=str.lastIndexOf("/");
//    if (i>=0)
//        return  str.right(str.length()-i-1);
//    else
//        return  str;
//}

QString WWB::extractFilePath(const QString& aFileName)
{ //获取文件目录
    QString str=aFileName;
    int i=str.lastIndexOf("/");
    if (i>=0)
        return  str.left(i);
    else
        return  str;
}
