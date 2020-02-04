/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpenDB;
    QAction *actQuit;
    QAction *actRecFirst;
    QAction *actRecPrevious;
    QAction *actRecNext;
    QAction *actRecLast;
    QWidget *centralWidget;
    QSplitter *splitter;
    QTableView *tableView;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *dbSpinEmpNo;
    QLabel *label_2;
    QLineEdit *dbEditName;
    QLabel *label_3;
    QComboBox *dbComboSex;
    QLabel *label_4;
    QDoubleSpinBox *dbSpinHeight;
    QLabel *label_5;
    QDateEdit *dbEditBirth;
    QLabel *label_10;
    QLineEdit *dbEditMobile;
    QLabel *label_7;
    QComboBox *dbComboProvince;
    QLabel *label_8;
    QLineEdit *dbEditCity;
    QLabel *label_6;
    QComboBox *dbComboDep;
    QPlainTextEdit *dbEditMemo;
    QLabel *label_9;
    QLabel *label_11;
    QSpinBox *dbSpinSalary;
    QLabel *label_12;
    QComboBox *dbComboEdu;
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QLabel *dbLabPhoto;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(744, 494);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        actOpenDB = new QAction(MainWindow);
        actOpenDB->setObjectName(QStringLiteral("actOpenDB"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpenDB->setIcon(icon);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actRecFirst = new QAction(MainWindow);
        actRecFirst->setObjectName(QStringLiteral("actRecFirst"));
        actRecFirst->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/616.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecFirst->setIcon(icon2);
        actRecPrevious = new QAction(MainWindow);
        actRecPrevious->setObjectName(QStringLiteral("actRecPrevious"));
        actRecPrevious->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/310.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecPrevious->setIcon(icon3);
        actRecNext = new QAction(MainWindow);
        actRecNext->setObjectName(QStringLiteral("actRecNext"));
        actRecNext->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/312.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecNext->setIcon(icon4);
        actRecLast = new QAction(MainWindow);
        actRecLast->setObjectName(QStringLiteral("actRecLast"));
        actRecLast->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/630.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecLast->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 20, 661, 371));
        splitter->setOrientation(Qt::Horizontal);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter->addWidget(tableView);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dbSpinEmpNo = new QSpinBox(groupBox);
        dbSpinEmpNo->setObjectName(QStringLiteral("dbSpinEmpNo"));
        dbSpinEmpNo->setMinimum(1);
        dbSpinEmpNo->setMaximum(10000);

        gridLayout->addWidget(dbSpinEmpNo, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        dbEditName = new QLineEdit(groupBox);
        dbEditName->setObjectName(QStringLiteral("dbEditName"));

        gridLayout->addWidget(dbEditName, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dbComboSex = new QComboBox(groupBox);
        dbComboSex->setObjectName(QStringLiteral("dbComboSex"));

        gridLayout->addWidget(dbComboSex, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dbSpinHeight = new QDoubleSpinBox(groupBox);
        dbSpinHeight->setObjectName(QStringLiteral("dbSpinHeight"));
        dbSpinHeight->setMaximum(3);
        dbSpinHeight->setSingleStep(0.01);
        dbSpinHeight->setValue(1.56);

        gridLayout->addWidget(dbSpinHeight, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        dbEditBirth = new QDateEdit(groupBox);
        dbEditBirth->setObjectName(QStringLiteral("dbEditBirth"));
        dbEditBirth->setCalendarPopup(true);
        dbEditBirth->setDate(QDate(2017, 2, 20));

        gridLayout->addWidget(dbEditBirth, 4, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        dbEditMobile = new QLineEdit(groupBox);
        dbEditMobile->setObjectName(QStringLiteral("dbEditMobile"));

        gridLayout->addWidget(dbEditMobile, 5, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        dbComboProvince = new QComboBox(groupBox);
        dbComboProvince->setObjectName(QStringLiteral("dbComboProvince"));

        gridLayout->addWidget(dbComboProvince, 6, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        dbEditCity = new QLineEdit(groupBox);
        dbEditCity->setObjectName(QStringLiteral("dbEditCity"));

        gridLayout->addWidget(dbEditCity, 7, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        dbComboDep = new QComboBox(groupBox);
        dbComboDep->setObjectName(QStringLiteral("dbComboDep"));

        gridLayout->addWidget(dbComboDep, 8, 1, 1, 1);

        dbEditMemo = new QPlainTextEdit(groupBox);
        dbEditMemo->setObjectName(QStringLiteral("dbEditMemo"));
        dbEditMemo->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(dbEditMemo, 11, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 11, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        dbSpinSalary = new QSpinBox(groupBox);
        dbSpinSalary->setObjectName(QStringLiteral("dbSpinSalary"));
        dbSpinSalary->setMinimum(1000);
        dbSpinSalary->setMaximum(50000);
        dbSpinSalary->setSingleStep(100);
        dbSpinSalary->setValue(1000);

        gridLayout->addWidget(dbSpinSalary, 10, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 10, 0, 1, 1);

        dbComboEdu = new QComboBox(groupBox);
        dbComboEdu->setObjectName(QStringLiteral("dbComboEdu"));

        gridLayout->addWidget(dbComboEdu, 9, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout->addWidget(label_13);

        dbLabPhoto = new QLabel(groupBox);
        dbLabPhoto->setObjectName(QStringLiteral("dbLabPhoto"));
        dbLabPhoto->setMinimumSize(QSize(150, 0));
        dbLabPhoto->setMaximumSize(QSize(350, 16777215));

        verticalLayout->addWidget(dbLabPhoto);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        splitter->addWidget(groupBox);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 744, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(dbSpinEmpNo);
        label_2->setBuddy(dbEditName);
        label_3->setBuddy(dbComboSex);
        label_4->setBuddy(dbSpinHeight);
        label_5->setBuddy(dbEditBirth);
        label_10->setBuddy(dbEditMobile);
        label_7->setBuddy(dbComboProvince);
        label_8->setBuddy(dbEditCity);
        label_6->setBuddy(dbComboDep);
        label_9->setBuddy(dbEditMemo);
        label_11->setBuddy(dbComboEdu);
        label_12->setBuddy(dbSpinSalary);
#endif // QT_NO_SHORTCUT

        mainToolBar->addAction(actOpenDB);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actRecFirst);
        mainToolBar->addAction(actRecPrevious);
        mainToolBar->addAction(actRecNext);
        mainToolBar->addAction(actRecLast);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QSqlQueryModel\347\232\204\344\275\277\347\224\250--Readonly", Q_NULLPTR));
        actOpenDB->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpenDB->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRecFirst->setText(QApplication::translate("MainWindow", "\351\246\226\350\256\260\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRecFirst->setToolTip(QApplication::translate("MainWindow", "\347\247\273\345\210\260\351\246\226\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRecPrevious->setText(QApplication::translate("MainWindow", "\345\211\215\344\270\200\350\256\260\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRecPrevious->setToolTip(QApplication::translate("MainWindow", "\345\211\215\344\270\200\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRecNext->setText(QApplication::translate("MainWindow", "\345\220\216\344\270\200\350\256\260\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRecNext->setToolTip(QApplication::translate("MainWindow", "\345\220\216\344\270\200\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRecLast->setText(QApplication::translate("MainWindow", "\345\260\276\350\256\260\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRecLast->setToolTip(QApplication::translate("MainWindow", "\345\260\276\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\345\267\245  \345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\247\223  \345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\200\247  \345\210\253", Q_NULLPTR));
        dbComboSex->clear();
        dbComboSex->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\245\263", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\350\272\253  \351\253\230", Q_NULLPTR));
        dbSpinHeight->setSuffix(QString());
        label_5->setText(QApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        dbEditBirth->setDisplayFormat(QApplication::translate("MainWindow", "yyyy-MM-dd", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\345\207\272\347\224\237\347\234\201\344\273\275", Q_NULLPTR));
        dbComboProvince->clear();
        dbComboProvince->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\214\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\212\346\265\267", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\244\251\346\264\245", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\207\215\345\272\206", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\256\211\345\276\275", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\262\263\345\214\227", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\262\263\345\215\227", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\271\226\345\214\227", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\271\226\345\215\227", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\261\261\350\245\277", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\261\261\344\270\234", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\231\225\350\245\277", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\261\237\350\213\217", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\261\237\350\245\277", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("MainWindow", "\345\237\216  \345\270\202", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\351\203\250  \351\227\250", Q_NULLPTR));
        dbComboDep->clear();
        dbComboDep->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\351\224\200\345\224\256\351\203\250", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\212\200\346\234\257\351\203\250", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\224\237\344\272\247\351\203\250", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\241\214\346\224\277\351\203\250", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("MainWindow", "\345\244\207   \346\263\250", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\255\246  \345\216\206", Q_NULLPTR));
        dbSpinSalary->setPrefix(QString());
        label_12->setText(QApplication::translate("MainWindow", "\345\267\245  \350\265\204", Q_NULLPTR));
        dbComboEdu->clear();
        dbComboEdu->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\215\232\345\243\253\347\240\224\347\251\266\347\224\237", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\241\225\345\243\253\347\240\224\347\251\266\347\224\237", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\244\247\345\255\246\346\234\254\347\247\221", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\244\247\345\255\246\344\270\223\347\247\221", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\351\253\230\344\270\255", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\210\235\344\270\255", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\260\217\345\255\246", Q_NULLPTR)
        );
        label_13->setText(QApplication::translate("MainWindow", "\347\205\247  \347\211\207", Q_NULLPTR));
        dbLabPhoto->setText(QApplication::translate("MainWindow", "dbLabPhoto", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
