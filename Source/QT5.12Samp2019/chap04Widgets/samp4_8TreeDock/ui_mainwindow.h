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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actAddFolder;
    QAction *actAddFiles;
    QAction *actZoomIn;
    QAction *actZoomOut;
    QAction *actZoomRealSize;
    QAction *actZoomFitW;
    QAction *actDeleteItem;
    QAction *actQuit;
    QAction *actZoomFitH;
    QAction *actScanItems;
    QAction *actDockVisible;
    QAction *actDockFloat;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *LabPicture;
    QMenuBar *menuBar;
    QMenu *menuPic;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeFiles;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(934, 500);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        actAddFolder = new QAction(MainWindow);
        actAddFolder->setObjectName(QStringLiteral("actAddFolder"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAddFolder->setIcon(icon);
        actAddFiles = new QAction(MainWindow);
        actAddFiles->setObjectName(QStringLiteral("actAddFiles"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icons/824.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAddFiles->setIcon(icon1);
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName(QStringLiteral("actZoomIn"));
        actZoomIn->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icons/418.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomIn->setIcon(icon2);
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName(QStringLiteral("actZoomOut"));
        actZoomOut->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icons/416.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomOut->setIcon(icon3);
        actZoomRealSize = new QAction(MainWindow);
        actZoomRealSize->setObjectName(QStringLiteral("actZoomRealSize"));
        actZoomRealSize->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icons/414.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomRealSize->setIcon(icon4);
        actZoomFitW = new QAction(MainWindow);
        actZoomFitW->setObjectName(QStringLiteral("actZoomFitW"));
        actZoomFitW->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/icons/424.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomFitW->setIcon(icon5);
        actDeleteItem = new QAction(MainWindow);
        actDeleteItem->setObjectName(QStringLiteral("actDeleteItem"));
        actDeleteItem->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/icons/delete1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDeleteItem->setIcon(icon6);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon7);
        actZoomFitH = new QAction(MainWindow);
        actZoomFitH->setObjectName(QStringLiteral("actZoomFitH"));
        actZoomFitH->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/icons/426.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomFitH->setIcon(icon8);
        actScanItems = new QAction(MainWindow);
        actScanItems->setObjectName(QStringLiteral("actScanItems"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/icons/fold.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actScanItems->setIcon(icon9);
        actDockVisible = new QAction(MainWindow);
        actDockVisible->setObjectName(QStringLiteral("actDockVisible"));
        actDockVisible->setCheckable(true);
        actDockVisible->setChecked(true);
        actDockVisible->setIcon(icon4);
        actDockFloat = new QAction(MainWindow);
        actDockFloat->setObjectName(QStringLiteral("actDockFloat"));
        actDockFloat->setCheckable(true);
        actDockFloat->setChecked(false);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/icons/814.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDockFloat->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(25, 25, 541, 361));
        scrollArea->setMinimumSize(QSize(200, 0));
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 539, 359));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        LabPicture = new QLabel(scrollAreaWidgetContents);
        LabPicture->setObjectName(QStringLiteral("LabPicture"));
        LabPicture->setScaledContents(false);
        LabPicture->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LabPicture);

        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 934, 23));
        menuPic = new QMenu(menuBar);
        menuPic->setObjectName(QStringLiteral("menuPic"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(4, 2, 4, 2);
        treeFiles = new QTreeWidget(dockWidgetContents);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignLeading|Qt::AlignVCenter);
        __qtreewidgetitem->setFont(1, font1);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font1);
        treeFiles->setHeaderItem(__qtreewidgetitem);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/icons/15.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/icons/31.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeFiles);
        __qtreewidgetitem1->setIcon(0, icon11);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem3->setIcon(0, icon12);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem4);
        __qtreewidgetitem5->setIcon(0, icon12);
        treeFiles->setObjectName(QStringLiteral("treeFiles"));
        treeFiles->setColumnCount(2);
        treeFiles->header()->setDefaultSectionSize(150);

        verticalLayout->addWidget(treeFiles);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menuPic->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuPic->addAction(actAddFolder);
        menuPic->addAction(actAddFiles);
        menuPic->addAction(actDeleteItem);
        menuPic->addAction(actScanItems);
        menuPic->addSeparator();
        menuPic->addAction(actQuit);
        menuView->addAction(actZoomIn);
        menuView->addAction(actZoomOut);
        menuView->addAction(actZoomRealSize);
        menuView->addAction(actZoomFitW);
        menuView->addAction(actZoomFitH);
        mainToolBar->addAction(actAddFolder);
        mainToolBar->addAction(actAddFiles);
        mainToolBar->addAction(actDeleteItem);
        mainToolBar->addAction(actScanItems);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actZoomIn);
        mainToolBar->addAction(actZoomOut);
        mainToolBar->addAction(actZoomRealSize);
        mainToolBar->addAction(actZoomFitW);
        mainToolBar->addAction(actZoomFitH);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actDockFloat);
        mainToolBar->addAction(actDockVisible);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QTreeWidget\347\232\204\344\275\277\347\224\250", Q_NULLPTR));
        actAddFolder->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddFolder->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actAddFolder->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actAddFiles->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddFiles->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actAddFiles->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actZoomIn->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomIn->setToolTip(QApplication::translate("MainWindow", "\346\224\276\345\244\247\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actZoomIn->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actZoomOut->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomOut->setToolTip(QApplication::translate("MainWindow", "\347\274\251\345\260\217\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actZoomOut->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actZoomRealSize->setText(QApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomRealSize->setToolTip(QApplication::translate("MainWindow", "\345\233\276\347\211\207\345\256\236\351\231\205\345\244\247\345\260\217\346\230\276\347\244\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomFitW->setText(QApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomFitW->setToolTip(QApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246\346\230\276\347\244\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actZoomFitW->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actDeleteItem->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDeleteItem->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomFitH->setText(QApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actZoomFitH->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actScanItems->setText(QApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actScanItems->setToolTip(QApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDockVisible->setText(QApplication::translate("MainWindow", "\347\252\227\344\275\223\345\217\257\350\247\201", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDockVisible->setToolTip(QApplication::translate("MainWindow", "\347\252\227\344\275\223\345\217\257\350\247\201", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDockFloat->setText(QApplication::translate("MainWindow", "\347\252\227\344\275\223\346\265\256\345\212\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDockFloat->setToolTip(QApplication::translate("MainWindow", "\347\252\227\344\275\223\346\265\256\345\212\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabPicture->setText(QString());
        menuPic->setTitle(QApplication::translate("MainWindow", "\347\233\256\345\275\225\346\240\221", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276", Q_NULLPTR));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\345\233\276\347\211\207\347\233\256\345\275\225\346\240\221", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeFiles->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\350\212\202\347\202\271", Q_NULLPTR));

        const bool __sortingEnabled = treeFiles->isSortingEnabled();
        treeFiles->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeFiles->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "\345\233\276\347\211\207\346\226\207\344\273\266", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "\345\210\206\347\273\204\350\212\202\347\202\271", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "\345\233\276\347\211\207\350\212\202\347\202\271", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "\345\210\206\347\273\2042", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "\345\233\276\347\211\2072", Q_NULLPTR));
        treeFiles->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
