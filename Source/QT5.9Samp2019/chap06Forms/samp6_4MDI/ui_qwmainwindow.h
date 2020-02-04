/********************************************************************************
** Form generated from reading UI file 'qwmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWINDOW_H
#define UI_QWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWindow
{
public:
    QAction *actDoc_New;
    QAction *actQuit;
    QAction *actDoc_Open;
    QAction *actFont;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actViewMode;
    QAction *actCascade;
    QAction *actTile;
    QAction *actCloseALL;
    QWidget *centralWidget;
    QMdiArea *mdiArea;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMainWindow)
    {
        if (QWMainWindow->objectName().isEmpty())
            QWMainWindow->setObjectName(QStringLiteral("QWMainWindow"));
        QWMainWindow->resize(388, 249);
        actDoc_New = new QAction(QWMainWindow);
        actDoc_New->setObjectName(QStringLiteral("actDoc_New"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDoc_New->setIcon(icon);
        actQuit = new QAction(QWMainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actDoc_Open = new QAction(QWMainWindow);
        actDoc_Open->setObjectName(QStringLiteral("actDoc_Open"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDoc_Open->setIcon(icon2);
        actFont = new QAction(QWMainWindow);
        actFont->setObjectName(QStringLiteral("actFont"));
        actFont->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon3);
        actCut = new QAction(QWMainWindow);
        actCut->setObjectName(QStringLiteral("actCut"));
        actCut->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon4);
        actCopy = new QAction(QWMainWindow);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        actCopy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon5);
        actPaste = new QAction(QWMainWindow);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        actPaste->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon6);
        actViewMode = new QAction(QWMainWindow);
        actViewMode->setObjectName(QStringLiteral("actViewMode"));
        actViewMode->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actViewMode->setIcon(icon7);
        actCascade = new QAction(QWMainWindow);
        actCascade->setObjectName(QStringLiteral("actCascade"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/images/400.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCascade->setIcon(icon8);
        actTile = new QAction(QWMainWindow);
        actTile->setObjectName(QStringLiteral("actTile"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/images/406.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTile->setIcon(icon9);
        actCloseALL = new QAction(QWMainWindow);
        actCloseALL->setObjectName(QStringLiteral("actCloseALL"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/images/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCloseALL->setIcon(icon10);
        centralWidget = new QWidget(QWMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(45, 10, 291, 176));
        QWMainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QWMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setAutoFillBackground(true);
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        QWMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QWMainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actDoc_New);
        mainToolBar->addAction(actDoc_Open);
        mainToolBar->addAction(actCloseALL);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addAction(actFont);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actViewMode);
        mainToolBar->addAction(actCascade);
        mainToolBar->addAction(actTile);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QWMainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), QWMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(QWMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWindow)
    {
        QWMainWindow->setWindowTitle(QApplication::translate("QWMainWindow", "MDI\345\272\224\347\224\250\347\250\213\345\272\217", Q_NULLPTR));
        actDoc_New->setText(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDoc_New->setToolTip(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDoc_Open->setText(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDoc_Open->setToolTip(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFont->setText(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCut->setText(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCopy->setText(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actPaste->setText(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actViewMode->setText(QApplication::translate("QWMainWindow", "MDI\346\250\241\345\274\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actViewMode->setToolTip(QApplication::translate("QWMainWindow", "\347\252\227\345\217\243\346\250\241\345\274\217\346\210\226\351\241\265\351\235\242\346\250\241\345\274\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCascade->setText(QApplication::translate("QWMainWindow", "\347\272\247\350\201\224\345\261\225\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCascade->setToolTip(QApplication::translate("QWMainWindow", "\347\252\227\345\217\243\347\272\247\350\201\224\345\261\225\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actTile->setText(QApplication::translate("QWMainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTile->setToolTip(QApplication::translate("QWMainWindow", "\347\252\227\345\217\243\345\271\263\351\223\272\345\261\225\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCloseALL->setText(QApplication::translate("QWMainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCloseALL->setToolTip(QApplication::translate("QWMainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
