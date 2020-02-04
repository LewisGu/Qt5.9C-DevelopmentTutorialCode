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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(466, 364);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnGetHostInfo = new QPushButton(Dialog);
        btnGetHostInfo->setObjectName(QStringLiteral("btnGetHostInfo"));

        gridLayout->addWidget(btnGetHostInfo, 0, 0, 1, 1);

        btnDetail = new QPushButton(Dialog);
        btnDetail->setObjectName(QStringLiteral("btnDetail"));

        gridLayout->addWidget(btnDetail, 0, 1, 1, 1);

        chkOnlyIPv4 = new QCheckBox(Dialog);
        chkOnlyIPv4->setObjectName(QStringLiteral("chkOnlyIPv4"));
        chkOnlyIPv4->setChecked(true);

        gridLayout->addWidget(chkOnlyIPv4, 1, 0, 1, 1);

        btnALLInterface = new QPushButton(Dialog);
        btnALLInterface->setObjectName(QStringLiteral("btnALLInterface"));

        gridLayout->addWidget(btnALLInterface, 1, 1, 1, 1);

        btnLookup = new QPushButton(Dialog);
        btnLookup->setObjectName(QStringLiteral("btnLookup"));

        gridLayout->addWidget(btnLookup, 2, 0, 1, 1);

        editHost = new QLineEdit(Dialog);
        editHost->setObjectName(QStringLiteral("editHost"));

        gridLayout->addWidget(editHost, 2, 1, 1, 1);

        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout->addWidget(btnClear, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\347\275\221\347\273\234\344\270\273\346\234\272\344\277\241\346\201\257", Q_NULLPTR));
        btnGetHostInfo->setText(QApplication::translate("Dialog", "QHostInfo \350\216\267\345\217\226\346\234\254\346\234\272\344\270\273\346\234\272\345\220\215\345\222\214IP\345\234\260\345\235\200", Q_NULLPTR));
        btnDetail->setText(QApplication::translate("Dialog", "QNetworkInterface ::allAddresses()", Q_NULLPTR));
        chkOnlyIPv4->setText(QApplication::translate("Dialog", "\345\217\252\346\230\276\347\244\272IPv4 \345\215\217\350\256\256\345\234\260\345\235\200", Q_NULLPTR));
        btnALLInterface->setText(QApplication::translate("Dialog", "QNetworkInterface::allInterfaces()", Q_NULLPTR));
        btnLookup->setText(QApplication::translate("Dialog", "QHostInfo \346\237\245\346\211\276\345\237\237\345\220\215\347\232\204IP\345\234\260\345\235\200", Q_NULLPTR));
        editHost->setText(QApplication::translate("Dialog", "www.163.com", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
