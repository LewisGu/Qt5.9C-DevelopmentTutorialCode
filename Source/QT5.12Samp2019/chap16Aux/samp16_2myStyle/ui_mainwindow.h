/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpen;
    QAction *actSave;
    QAction *actFind;
    QAction *actEdit;
    QAction *actQuit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *comboSysStyle;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QSpinBox *spinBox;
    QGridLayout *gridLayout_2;
    QPushButton *btnNormal;
    QPushButton *btnStyleSheet;
    QPushButton *btnFontLarge;
    QPushButton *btnFontSmall;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(514, 364);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actSave = new QAction(MainWindow);
        actSave->setObjectName(QString::fromUtf8("actSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/save1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon1);
        actFind = new QAction(MainWindow);
        actFind->setObjectName(QString::fromUtf8("actFind"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/304.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFind->setIcon(icon2);
        actEdit = new QAction(MainWindow);
        actEdit->setObjectName(QString::fromUtf8("actEdit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/812.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit->setIcon(icon3);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        comboSysStyle = new QComboBox(groupBox_2);
        comboSysStyle->setObjectName(QString::fromUtf8("comboSysStyle"));

        gridLayout->addWidget(comboSysStyle, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("selection-color: rgb(85, 170, 255);"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setValue(99);

        gridLayout->addWidget(spinBox, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnNormal = new QPushButton(groupBox_2);
        btnNormal->setObjectName(QString::fromUtf8("btnNormal"));

        gridLayout_2->addWidget(btnNormal, 0, 0, 1, 1);

        btnStyleSheet = new QPushButton(groupBox_2);
        btnStyleSheet->setObjectName(QString::fromUtf8("btnStyleSheet"));

        gridLayout_2->addWidget(btnStyleSheet, 0, 1, 1, 1);

        btnFontLarge = new QPushButton(groupBox_2);
        btnFontLarge->setObjectName(QString::fromUtf8("btnFontLarge"));

        gridLayout_2->addWidget(btnFontLarge, 1, 0, 1, 1);

        btnFontSmall = new QPushButton(groupBox_2);
        btnFontSmall->setObjectName(QString::fromUtf8("btnFontSmall"));

        gridLayout_2->addWidget(btnFontSmall, 1, 1, 1, 1);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_2->addWidget(checkBox, 2, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(true);

        gridLayout_2->addWidget(checkBox_2, 2, 1, 1, 1);

        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_2->addWidget(radioButton, 3, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(true);

        gridLayout_2->addWidget(radioButton_2, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox_2);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 514, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actSave);
        mainToolBar->addAction(actFind);
        mainToolBar->addAction(actEdit);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QStyle\347\232\204\344\275\277\347\224\250", nullptr));
        actOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        actSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        actFind->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        actEdit->setText(QApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        actQuit->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\346\240\267\345\274\217", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "ComboBox", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Item 1", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "New Item", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "New Item 3", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "New Item", nullptr));

        label->setText(QApplication::translate("MainWindow", "LineEdit", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "SpinBox", nullptr));
        btnNormal->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210\346\240\267\345\274\217\350\241\250", nullptr));
        btnStyleSheet->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250\346\240\267\345\274\217\350\241\250", nullptr));
        btnFontLarge->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        btnFontSmall->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "#ifndef MAINWINDOW_H\n"
"#define MAINWINDOW_H\n"
"\n"
"#include <QtWidgets>\n"
"\n"
"#include \"ui_mainwindow.h\"\n"
"\n"
"class StyleSheetEditor;\n"
"\n"
"class MainWindow : public QMainWindow\n"
"{\n"
"    Q_OBJECT\n"
"\n"
"public:\n"
"    MainWindow();\n"
"\n"
"private slots:\n"
"    void on_editStyleAction_triggered();\n"
"    void on_aboutAction_triggered();\n"
"\n"
"private:\n"
"    StyleSheetEditor *styleSheetEditor;\n"
"    Ui::MainWindow ui;\n"
"};\n"
"\n"
"#endif", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
