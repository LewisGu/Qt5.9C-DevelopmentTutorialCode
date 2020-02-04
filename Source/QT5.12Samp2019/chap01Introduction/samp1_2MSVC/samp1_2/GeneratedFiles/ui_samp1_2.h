/********************************************************************************
** Form generated from reading UI file 'samp1_2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMP1_2_H
#define UI_SAMP1_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_samp1_2Class
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *samp1_2Class)
    {
        if (samp1_2Class->objectName().isEmpty())
            samp1_2Class->setObjectName(QString::fromUtf8("samp1_2Class"));
        samp1_2Class->resize(399, 229);
        centralWidget = new QWidget(samp1_2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 241, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        samp1_2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(samp1_2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 399, 23));
        samp1_2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(samp1_2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        samp1_2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(samp1_2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        samp1_2Class->setStatusBar(statusBar);

        retranslateUi(samp1_2Class);

        QMetaObject::connectSlotsByName(samp1_2Class);
    } // setupUi

    void retranslateUi(QMainWindow *samp1_2Class)
    {
        samp1_2Class->setWindowTitle(QApplication::translate("samp1_2Class", "samp1_2", nullptr));
        label->setText(QApplication::translate("samp1_2Class", "\344\275\240\345\245\275\357\274\214Visual Studio 2015", nullptr));
    } // retranslateUi

};

namespace Ui {
    class samp1_2Class: public Ui_samp1_2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMP1_2_H
