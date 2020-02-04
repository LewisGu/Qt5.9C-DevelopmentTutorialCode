#include "qwmainwindow.h"
#include <QApplication>

#include    <QTextCodec>

int main(int argc, char *argv[])
{

    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec); //解决汉字乱码问题

    QApplication a(argc, argv);
    QWMainWindow w;
    w.show();

    return a.exec();
}
