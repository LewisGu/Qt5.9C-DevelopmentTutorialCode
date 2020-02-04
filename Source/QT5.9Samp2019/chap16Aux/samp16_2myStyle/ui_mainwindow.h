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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(514, 364);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actSave = new QAction(MainWindow);
        actSave->setObjectName(QStringLiteral("actSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/save1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon1);
        actFind = new QAction(MainWindow);
        actFind->setObjectName(QStringLiteral("actFind"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/304.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFind->setIcon(icon2);
        actEdit = new QAction(MainWindow);
        actEdit->setObjectName(QStringLiteral("actEdit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/812.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit->setIcon(icon3);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        comboSysStyle = new QComboBox(groupBox_2);
        comboSysStyle->setObjectName(QStringLiteral("comboSysStyle"));

        gridLayout->addWidget(comboSysStyle, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QStringLiteral("selection-color: rgb(85, 170, 255);"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QStringLiteral(""));
        lineEdit_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setValue(99);

        gridLayout->addWidget(spinBox, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btnNormal = new QPushButton(groupBox_2);
        btnNormal->setObjectName(QStringLiteral("btnNormal"));

        gridLayout_2->addWidget(btnNormal, 0, 0, 1, 1);

        btnStyleSheet = new QPushButton(groupBox_2);
        btnStyleSheet->setObjectName(QStringLiteral("btnStyleSheet"));

        gridLayout_2->addWidget(btnStyleSheet, 0, 1, 1, 1);

        btnFontLarge = new QPushButton(groupBox_2);
        btnFontLarge->setObjectName(QStringLiteral("btnFontLarge"));

        gridLayout_2->addWidget(btnFontLarge, 1, 0, 1, 1);

        btnFontSmall = new QPushButton(groupBox_2);
        btnFontSmall->setObjectName(QStringLiteral("btnFontSmall"));

        gridLayout_2->addWidget(btnFontSmall, 1, 1, 1, 1);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 2, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setChecked(true);

        gridLayout_2->addWidget(checkBox_2, 2, 1, 1, 1);

        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_2->addWidget(radioButton, 3, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(true);

        gridLayout_2->addWidget(radioButton_2, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox_2);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 514, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QStyle\347\232\204\344\275\277\347\224\250", Q_NULLPTR));
        actOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        actSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        actFind->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        actEdit->setText(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        actQuit->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\346\240\267\345\274\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "ComboBox", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Item 1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "New Item", Q_NULLPTR)
         << QApplication::translate("MainWindow", "New Item 3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "New Item", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "LineEdit", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "SpinBox", Q_NULLPTR));
        btnNormal->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210\346\240\267\345\274\217\350\241\250", Q_NULLPTR));
        btnStyleSheet->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250\346\240\267\345\274\217\350\241\250", Q_NULLPTR));
        btnFontLarge->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        btnFontSmall->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
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
"#endif", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
