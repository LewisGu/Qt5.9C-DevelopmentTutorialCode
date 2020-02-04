/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpen_IODevice;
    QAction *actOpen_TextStream;
    QAction *actOpen_Binary;
    QAction *actQuit;
    QAction *actSave_IODevice;
    QAction *actSave_TextStream;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(775, 524);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        actOpen_IODevice = new QAction(MainWindow);
        actOpen_IODevice->setObjectName(QStringLiteral("actOpen_IODevice"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/804.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen_IODevice->setIcon(icon);
        actOpen_TextStream = new QAction(MainWindow);
        actOpen_TextStream->setObjectName(QStringLiteral("actOpen_TextStream"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen_TextStream->setIcon(icon1);
        actOpen_Binary = new QAction(MainWindow);
        actOpen_Binary->setObjectName(QStringLiteral("actOpen_Binary"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/135.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen_Binary->setIcon(icon2);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon3);
        actSave_IODevice = new QAction(MainWindow);
        actSave_IODevice->setObjectName(QStringLiteral("actSave_IODevice"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSave_IODevice->setIcon(icon4);
        actSave_TextStream = new QAction(MainWindow);
        actSave_TextStream->setObjectName(QStringLiteral("actSave_TextStream"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/066.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actSave_TextStream->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 671, 411));
        tabWidget->setDocumentMode(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QFont font1;
        font1.setPointSize(12);
        plainTextEdit->setFont(font1);

        verticalLayout->addWidget(plainTextEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 775, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actOpen_IODevice);
        mainToolBar->addAction(actSave_IODevice);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actOpen_TextStream);
        mainToolBar->addAction(actSave_TextStream);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actOpen_IODevice->setText(QApplication::translate("MainWindow", "IODevice\346\211\223\345\274\200", 0));
#ifndef QT_NO_TOOLTIP
        actOpen_IODevice->setToolTip(QApplication::translate("MainWindow", "\347\224\250IODevice\346\211\223\345\274\200\346\226\207\346\234\254\346\226\207\344\273\266", 0));
#endif // QT_NO_TOOLTIP
        actOpen_TextStream->setText(QApplication::translate("MainWindow", "QtextStream\346\211\223\345\274\200", 0));
#ifndef QT_NO_TOOLTIP
        actOpen_TextStream->setToolTip(QApplication::translate("MainWindow", "\347\224\250QtextStream\346\211\223\345\274\200\346\226\207\346\234\254\346\226\207\344\273\266", 0));
#endif // QT_NO_TOOLTIP
        actOpen_Binary->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\272\214\350\277\233\345\210\266\346\226\207\344\273\266", 0));
#ifndef QT_NO_TOOLTIP
        actOpen_Binary->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\272\214\350\277\233\345\210\266\346\226\207\344\273\266", 0));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
#endif // QT_NO_TOOLTIP
        actSave_IODevice->setText(QApplication::translate("MainWindow", "IODevice\345\217\246\345\255\230", 0));
#ifndef QT_NO_TOOLTIP
        actSave_IODevice->setToolTip(QApplication::translate("MainWindow", "\347\224\250IODevice\345\217\246\345\255\230\346\226\207\344\273\266", 0));
#endif // QT_NO_TOOLTIP
        actSave_TextStream->setText(QApplication::translate("MainWindow", "QTextStream\345\217\246\345\255\230", 0));
#ifndef QT_NO_TOOLTIP
        actSave_TextStream->setToolTip(QApplication::translate("MainWindow", "\347\224\250QTextStream\345\217\246\345\255\230\346\226\207\344\273\266", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Text File", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Binary File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
