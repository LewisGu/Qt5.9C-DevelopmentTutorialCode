/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(594, 461);
        Form->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	font: 12pt \"\345\256\213\344\275\223\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"     border: 2px groove gray;\n"
"     border-radius: 5px;\n"
"     padding: 2px 4px;\n"
"     border-color: rgb(12,45,68);\n"
"}\n"
"\n"
"QComboBox::drop-down{ image: url(:/images/images/down.bmp); }\n"
"\n"
"QSpinBox::up-button{ image: url(:/images/images/up.bmp); }\n"
"QSpinBox::down-button{ image: url(:/images/images/down.bmp); }\n"
"\n"
"QCheckBox::indicator:checked{\n"
" image: url(:/images/images/checked.bmp);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked{\n"
"image: url(:/images/images/unchecked.bmp);\n"
"}\n"
"\n"
""));
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(35, 230, 181, 26));
        comboBox = new QComboBox(Form);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(75, 75, 101, 31));
        spinBox = new QSpinBox(Form);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(195, 75, 86, 31));
        spinBox->setValue(12);
        checkBox = new QCheckBox(Form);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(70, 155, 79, 20));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(Form);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(190, 155, 106, 20));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 215, 64, 64));
        pushButton->setStyleSheet(QLatin1String("     border: 2px groove red;\n"
"     min-width:60px;\n"
"     min-height:60px;\n"
"     border-radius: 30px;\n"
""));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Form", "Hello\357\274\214\344\275\240\345\245\275", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "New Item", Q_NULLPTR)
        );
        checkBox->setText(QApplication::translate("Form", "Checked", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Form", "Unchecked", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Form", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
