#include "qmywidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QmyWidget w;
    w.show();

    return a.exec();
}
