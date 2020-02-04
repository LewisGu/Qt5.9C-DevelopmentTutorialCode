/********************************************************************************
** Form generated from reading UI file 'qdlglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDLGLOGIN_H
#define UI_QDLGLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgLogin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *editUser;
    QLabel *label_3;
    QLineEdit *editPSWD;
    QCheckBox *chkBoxSave;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *dlgLogin)
    {
        if (dlgLogin->objectName().isEmpty())
            dlgLogin->setObjectName(QString::fromUtf8("dlgLogin"));
        dlgLogin->resize(520, 360);
        dlgLogin->setMaximumSize(QSize(520, 360));
        QFont font;
        font.setPointSize(11);
        dlgLogin->setFont(font);
        verticalLayout = new QVBoxLayout(dlgLogin);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(dlgLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(520, 334));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/splash2.jpg")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(dlgLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        editUser = new QLineEdit(dlgLogin);
        editUser->setObjectName(QString::fromUtf8("editUser"));

        horizontalLayout->addWidget(editUser);

        label_3 = new QLabel(dlgLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        editPSWD = new QLineEdit(dlgLogin);
        editPSWD->setObjectName(QString::fromUtf8("editPSWD"));
        editPSWD->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(editPSWD);

        chkBoxSave = new QCheckBox(dlgLogin);
        chkBoxSave->setObjectName(QString::fromUtf8("chkBoxSave"));

        horizontalLayout->addWidget(chkBoxSave);

        horizontalSpacer_3 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnOK = new QPushButton(dlgLogin);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon);

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(dlgLogin);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(dlgLogin);
        QObject::connect(btnCancel, SIGNAL(clicked()), dlgLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(dlgLogin);
    } // setupUi

    void retranslateUi(QDialog *dlgLogin)
    {
        dlgLogin->setWindowTitle(QApplication::translate("dlgLogin", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("dlgLogin", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QApplication::translate("dlgLogin", "\345\257\206 \347\240\201", nullptr));
        chkBoxSave->setText(QApplication::translate("dlgLogin", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", nullptr));
        btnOK->setText(QApplication::translate("dlgLogin", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QApplication::translate("dlgLogin", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgLogin: public Ui_dlgLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDLGLOGIN_H
