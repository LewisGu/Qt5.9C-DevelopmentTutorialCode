/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actTab_SetSize;
    QAction *actTab_SetHeader;
    QAction *actFile_Quit;
    QAction *actTab_Locate;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(567, 367);
        actTab_SetSize = new QAction(MainWindow);
        actTab_SetSize->setObjectName(QStringLiteral("actTab_SetSize"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetSize->setIcon(icon);
        actTab_SetHeader = new QAction(MainWindow);
        actTab_SetHeader->setObjectName(QStringLiteral("actTab_SetHeader"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/516.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetHeader->setIcon(icon1);
        actFile_Quit = new QAction(MainWindow);
        actFile_Quit->setObjectName(QStringLiteral("actFile_Quit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Quit->setIcon(icon2);
        actTab_Locate = new QAction(MainWindow);
        actTab_Locate->setObjectName(QStringLiteral("actTab_Locate"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/304.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_Locate->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 10, 421, 211));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 567, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actTab_SetSize);
        mainToolBar->addAction(actTab_SetHeader);
        mainToolBar->addAction(actTab_Locate);
        mainToolBar->addAction(actFile_Quit);

        retranslateUi(MainWindow);
        QObject::connect(actFile_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\345\257\271\350\257\235\346\241\206\345\217\212\345\205\266\350\260\203\347\224\250", Q_NULLPTR));
        actTab_SetSize->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260\345\210\227\346\225\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTab_SetSize->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\210\227\346\225\260", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actTab_SetHeader->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTab_SetHeader->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFile_Quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFile_Quit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\350\275\257\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actTab_Locate->setText(QApplication::translate("MainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTab_Locate->setToolTip(QApplication::translate("MainWindow", "\345\256\232\344\275\215\345\210\260\346\237\220\344\270\252\345\215\225\345\205\203\346\240\274", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
