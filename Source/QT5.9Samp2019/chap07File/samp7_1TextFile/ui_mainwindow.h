/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpen_IODevice;
    QAction *actOpen_TextStream;
    QAction *actQuit;
    QAction *actSave_IODevice;
    QAction *actSave_TextStream;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *textEditDevice;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *textEditStream;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(880, 561);
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
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon2);
        actSave_IODevice = new QAction(MainWindow);
        actSave_IODevice->setObjectName(QStringLiteral("actSave_IODevice"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSave_IODevice->setIcon(icon3);
        actSave_TextStream = new QAction(MainWindow);
        actSave_TextStream->setObjectName(QStringLiteral("actSave_TextStream"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/066.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actSave_TextStream->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 811, 431));
        tabWidget->setDocumentMode(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        textEditDevice = new QPlainTextEdit(tab);
        textEditDevice->setObjectName(QStringLiteral("textEditDevice"));
        QFont font1;
        font1.setPointSize(12);
        textEditDevice->setFont(font1);

        verticalLayout->addWidget(textEditDevice);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        textEditStream = new QPlainTextEdit(tab_2);
        textEditStream->setObjectName(QStringLiteral("textEditStream"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        textEditStream->setPalette(palette);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        textEditStream->setFont(font2);

        verticalLayout_2->addWidget(textEditStream);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 880, 23));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\226\207\346\234\254\346\226\207\344\273\266\350\257\273\345\206\231", Q_NULLPTR));
        actOpen_IODevice->setText(QApplication::translate("MainWindow", "QFile\347\233\264\346\216\245\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen_IODevice->setToolTip(QApplication::translate("MainWindow", "\347\224\250QFile\347\233\264\346\216\245\346\211\223\345\274\200\346\226\207\346\234\254\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actOpen_TextStream->setText(QApplication::translate("MainWindow", "QTextStream\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen_TextStream->setToolTip(QApplication::translate("MainWindow", "\347\224\250QtextStream\346\211\223\345\274\200\346\226\207\346\234\254\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSave_IODevice->setText(QApplication::translate("MainWindow", "QFile\345\217\246\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSave_IODevice->setToolTip(QApplication::translate("MainWindow", "\347\224\250QFile\347\233\264\346\216\245\345\217\246\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSave_TextStream->setText(QApplication::translate("MainWindow", "QTextStream\345\217\246\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSave_TextStream->setToolTip(QApplication::translate("MainWindow", "\347\224\250QTextStream\345\217\246\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "QFile\347\233\264\346\216\245\346\223\215\344\275\234", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "QTextStream\346\223\215\344\275\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
