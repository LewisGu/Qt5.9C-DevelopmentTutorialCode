/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnGetHostInfo;
    QPushButton *btnDetail;
    QCheckBox *chkOnlyIPv4;
    QPushButton *btnALLInterface;
    QPushButton *btnLookup;
    QLineEdit *editHost;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(466, 364);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnGetHostInfo = new QPushButton(Dialog);
        btnGetHostInfo->setObjectName(QString::fromUtf8("btnGetHostInfo"));

        gridLayout->addWidget(btnGetHostInfo, 0, 0, 1, 1);

        btnDetail = new QPushButton(Dialog);
        btnDetail->setObjectName(QString::fromUtf8("btnDetail"));

        gridLayout->addWidget(btnDetail, 0, 1, 1, 1);

        chkOnlyIPv4 = new QCheckBox(Dialog);
        chkOnlyIPv4->setObjectName(QString::fromUtf8("chkOnlyIPv4"));
        chkOnlyIPv4->setChecked(true);

        gridLayout->addWidget(chkOnlyIPv4, 1, 0, 1, 1);

        btnALLInterface = new QPushButton(Dialog);
        btnALLInterface->setObjectName(QString::fromUtf8("btnALLInterface"));

        gridLayout->addWidget(btnALLInterface, 1, 1, 1, 1);

        btnLookup = new QPushButton(Dialog);
        btnLookup->setObjectName(QString::fromUtf8("btnLookup"));

        gridLayout->addWidget(btnLookup, 2, 0, 1, 1);

        editHost = new QLineEdit(Dialog);
        editHost->setObjectName(QString::fromUtf8("editHost"));

        gridLayout->addWidget(editHost, 2, 1, 1, 1);

        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout->addWidget(btnClear, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\347\275\221\347\273\234\344\270\273\346\234\272\344\277\241\346\201\257", nullptr));
        btnGetHostInfo->setText(QApplication::translate("Dialog", "QHostInfo \350\216\267\345\217\226\346\234\254\346\234\272\344\270\273\346\234\272\345\220\215\345\222\214IP\345\234\260\345\235\200", nullptr));
        btnDetail->setText(QApplication::translate("Dialog", "QNetworkInterface ::allAddresses()", nullptr));
        chkOnlyIPv4->setText(QApplication::translate("Dialog", "\345\217\252\346\230\276\347\244\272IPv4 \345\215\217\350\256\256\345\234\260\345\235\200", nullptr));
        btnALLInterface->setText(QApplication::translate("Dialog", "QNetworkInterface::allInterfaces()", nullptr));
        btnLookup->setText(QApplication::translate("Dialog", "QHostInfo \346\237\245\346\211\276\345\237\237\345\220\215\347\232\204IP\345\234\260\345\235\200", nullptr));
        editHost->setText(QApplication::translate("Dialog", "www.163.com", nullptr));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
