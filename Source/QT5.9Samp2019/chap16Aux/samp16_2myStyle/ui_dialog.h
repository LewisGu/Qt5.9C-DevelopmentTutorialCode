/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(662, 376);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog *{\n"
"	color: rgb(255, 0, 0);\n"
"	font: 12pt \"\345\256\213\344\275\223\";\n"
"}\n"
"\n"
"\n"
"  QPushButton {\n"
"      border: 2px solid gray;\n"
"      border-radius: 6px;\n"
"      background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"      min-width: 80px;\n"
"  }\n"
"\n"
"  QPushButton:pressed {\n"
"      background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"  }\n"
"\n"
"  QPushButton:flat {\n"
"      border: none; /* no border for a flat push button */\n"
"  }\n"
"\n"
"  QPushButton:default {\n"
"      border-color: navy; /* make the default button prominent */\n"
"  }\n"
"\n"
"QLineEdit{\n"
" min-width:50px;\n"
"\n"
" max-height:40px;\n"
"\n"
" border-width: 2px;\n"
" border-style: solid;\n"
" border-color: gray;\n"
" border-radius: 10px;\n"
" padding: 0px 10px; \n"
"	border-image: url(:/images/images/border.jpg);"
                        "\n"
"}\n"
""));
        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(210, 50, 111, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        spinBox->setFont(font);
        spinBox->setValue(66);
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(40, 210, 131, 31));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(Dialog);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(40, 260, 121, 31));
        checkBox_2->setChecked(false);
        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 30, 141, 41));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 120, 111, 64));
        pushButton->setIconSize(QSize(16, 16));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(410, 140, 111, 41));
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(430, 80, 111, 41));
        lineEdit_2->setReadOnly(true);
        comboBox_2 = new QComboBox(Dialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(30, 120, 131, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Dialog", "checked", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Dialog", "unchecked", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "New Item", Q_NULLPTR)
         << QApplication::translate("Dialog", "New Item", Q_NULLPTR)
         << QApplication::translate("Dialog", "New Item", Q_NULLPTR)
         << QApplication::translate("Dialog", "New Item", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Dialog", "Hello", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("Dialog", "Readonly", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
