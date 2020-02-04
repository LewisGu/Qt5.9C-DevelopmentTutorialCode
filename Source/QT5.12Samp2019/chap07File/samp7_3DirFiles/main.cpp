#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("China University of Petroleum");
    Dialog w;
    w.show();

    return a.exec();
}
