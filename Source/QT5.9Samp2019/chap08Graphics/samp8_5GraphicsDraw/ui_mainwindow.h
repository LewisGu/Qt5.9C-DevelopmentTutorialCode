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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qwgraphicsview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actItem_Rect;
    QAction *actItem_Ellipse;
    QAction *actItem_Line;
    QAction *actEdit_Delete;
    QAction *actQuit;
    QAction *actItem_Text;
    QAction *actEdit_Front;
    QAction *actEdit_Back;
    QAction *actItem_Polygon;
    QAction *actZoomIn;
    QAction *actZoomOut;
    QAction *actRotateLeft;
    QAction *actRotateRight;
    QAction *actRestore;
    QAction *actGroup;
    QAction *actGroupBreak;
    QAction *actItem_Circle;
    QAction *actItem_Triangle;
    QWidget *centralWidget;
    QWGraphicsView *View;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(731, 460);
        actItem_Rect = new QAction(MainWindow);
        actItem_Rect->setObjectName(QStringLiteral("actItem_Rect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/RECTANGL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Rect->setIcon(icon);
        actItem_Ellipse = new QAction(MainWindow);
        actItem_Ellipse->setObjectName(QStringLiteral("actItem_Ellipse"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/ELLIPSE.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Ellipse->setIcon(icon1);
        actItem_Line = new QAction(MainWindow);
        actItem_Line->setObjectName(QStringLiteral("actItem_Line"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/LINE.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Line->setIcon(icon2);
        actEdit_Delete = new QAction(MainWindow);
        actEdit_Delete->setObjectName(QStringLiteral("actEdit_Delete"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/108.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Delete->setIcon(icon3);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon4);
        actItem_Text = new QAction(MainWindow);
        actItem_Text->setObjectName(QStringLiteral("actItem_Text"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/800.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Text->setIcon(icon5);
        actEdit_Front = new QAction(MainWindow);
        actEdit_Front->setObjectName(QStringLiteral("actEdit_Front"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/528.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Front->setIcon(icon6);
        actEdit_Back = new QAction(MainWindow);
        actEdit_Back->setObjectName(QStringLiteral("actEdit_Back"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/526.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Back->setIcon(icon7);
        actItem_Polygon = new QAction(MainWindow);
        actItem_Polygon->setObjectName(QStringLiteral("actItem_Polygon"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/images/FREEFORM.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Polygon->setIcon(icon8);
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName(QStringLiteral("actZoomIn"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/images/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomIn->setIcon(icon9);
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName(QStringLiteral("actZoomOut"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/images/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomOut->setIcon(icon10);
        actRotateLeft = new QAction(MainWindow);
        actRotateLeft->setObjectName(QStringLiteral("actRotateLeft"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/images/rotateleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRotateLeft->setIcon(icon11);
        actRotateRight = new QAction(MainWindow);
        actRotateRight->setObjectName(QStringLiteral("actRotateRight"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/images/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRotateRight->setIcon(icon12);
        actRestore = new QAction(MainWindow);
        actRestore->setObjectName(QStringLiteral("actRestore"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/images/420.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRestore->setIcon(icon13);
        actGroup = new QAction(MainWindow);
        actGroup->setObjectName(QStringLiteral("actGroup"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/images/UNGROUP.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actGroup->setIcon(icon14);
        actGroupBreak = new QAction(MainWindow);
        actGroupBreak->setObjectName(QStringLiteral("actGroupBreak"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/images/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actGroupBreak->setIcon(icon15);
        actItem_Circle = new QAction(MainWindow);
        actItem_Circle->setObjectName(QStringLiteral("actItem_Circle"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/images/08.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Circle->setIcon(icon16);
        actItem_Triangle = new QAction(MainWindow);
        actItem_Triangle->setObjectName(QStringLiteral("actItem_Triangle"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/images/Icon1242.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Triangle->setIcon(icon17);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        View = new QWGraphicsView(centralWidget);
        View->setObjectName(QStringLiteral("View"));
        View->setGeometry(QRect(10, 10, 641, 351));
        View->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
        View->setDragMode(QGraphicsView::RubberBandDrag);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 731, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(16, 16));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setAllowedAreas(Qt::LeftToolBarArea);
        toolBar->setIconSize(QSize(16, 16));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        mainToolBar->addAction(actZoomIn);
        mainToolBar->addAction(actZoomOut);
        mainToolBar->addAction(actRestore);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actRotateLeft);
        mainToolBar->addAction(actRotateRight);
        mainToolBar->addAction(actEdit_Front);
        mainToolBar->addAction(actEdit_Back);
        mainToolBar->addAction(actGroup);
        mainToolBar->addAction(actGroupBreak);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actEdit_Delete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);
        toolBar->addAction(actItem_Rect);
        toolBar->addAction(actItem_Ellipse);
        toolBar->addAction(actItem_Circle);
        toolBar->addAction(actItem_Triangle);
        toolBar->addAction(actItem_Polygon);
        toolBar->addAction(actItem_Line);
        toolBar->addAction(actItem_Text);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Graphics  View\347\273\230\345\233\276", Q_NULLPTR));
        actItem_Rect->setText(QApplication::translate("MainWindow", "\347\237\251\345\275\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actItem_Rect->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\237\251\345\275\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actItem_Ellipse->setText(QApplication::translate("MainWindow", "\346\244\255\345\234\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actItem_Ellipse->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\244\255\345\234\206\345\236\213", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actItem_Line->setText(QApplication::translate("MainWindow", "\347\233\264\347\272\277", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actItem_Line->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\264\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actEdit_Delete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actEdit_Delete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\347\232\204\345\233\276\345\205\203", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actItem_Text->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actItem_Text->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\345\255\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actEdit_Front->setText(QApplication::translate("MainWindow", "\345\211\215\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actEdit_Front->setToolTip(QApplication::translate("MainWindow", "\345\261\205\344\272\216\346\234\200\345\211\215\351\235\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actEdit_Back->setText(QApplication::translate("MainWindow", "\345\220\216\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actEdit_Back->setToolTip(QApplication::translate("MainWindow", "\345\261\205\344\272\216\346\234\200\345\220\216\351\235\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actItem_Polygon->setText(QApplication::translate("MainWindow", "\346\242\257\345\275\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actItem_Polygon->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\242\257\345\275\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomIn->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomIn->setToolTip(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomOut->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomOut->setToolTip(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRotateLeft->setText(QApplication::translate("MainWindow", "\345\267\246\346\227\213\350\275\254", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRotateLeft->setToolTip(QApplication::translate("MainWindow", "\345\267\246\346\227\213\350\275\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRotateRight->setText(QApplication::translate("MainWindow", "\345\217\263\346\227\213\350\275\254", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRotateRight->setToolTip(QApplication::translate("MainWindow", "\345\217\263\346\227\213\350\275\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRestore->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRestore->setToolTip(QApplication::translate("MainWindow", "\346\201\242\345\244\215\345\244\247\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actGroup->setText(QApplication::translate("MainWindow", "\347\273\204\345\220\210", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actGroup->setToolTip(QApplication::translate("MainWindow", "\347\273\204\345\220\210", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actGroupBreak->setText(QApplication::translate("MainWindow", "\346\211\223\346\225\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actGroupBreak->setToolTip(QApplication::translate("MainWindow", "\345\217\226\346\266\210\347\273\204\345\220\210", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actItem_Circle->setText(QApplication::translate("MainWindow", "\345\234\206\345\275\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actItem_Circle->setToolTip(QApplication::translate("MainWindow", "\345\234\206\345\275\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actItem_Triangle->setText(QApplication::translate("MainWindow", "\344\270\211\350\247\222\345\275\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actItem_Triangle->setToolTip(QApplication::translate("MainWindow", "\344\270\211\350\247\222\345\275\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
