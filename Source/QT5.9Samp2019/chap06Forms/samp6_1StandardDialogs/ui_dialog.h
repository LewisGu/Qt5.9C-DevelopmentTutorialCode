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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClearText;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPushButton *btnInputString;
    QPushButton *btnInputInt;
    QPushButton *btnInputFloat;
    QPushButton *btnInputItem;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnMsgQuestion;
    QPushButton *btnMsgInformation;
    QPushButton *btnMsgWarning;
    QPushButton *btnMsgCritical;
    QPushButton *btnMsgAbout;
    QPushButton *btnMsgAboutQt;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnSelDir;
    QPushButton *btnColor;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QPushButton *btnFont;
    QPushButton *btnOpenMulti;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(498, 319);
        QFont font;
        font.setPointSize(10);
        Dialog->setFont(font);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnClearText = new QPushButton(groupBox_4);
        btnClearText->setObjectName(QStringLiteral("btnClearText"));

        horizontalLayout->addWidget(btnClearText);


        gridLayout_4->addWidget(groupBox_4, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(3);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        btnInputString = new QPushButton(groupBox_3);
        btnInputString->setObjectName(QStringLiteral("btnInputString"));

        gridLayout_3->addWidget(btnInputString, 0, 0, 1, 1);

        btnInputInt = new QPushButton(groupBox_3);
        btnInputInt->setObjectName(QStringLiteral("btnInputInt"));

        gridLayout_3->addWidget(btnInputInt, 0, 1, 1, 1);

        btnInputFloat = new QPushButton(groupBox_3);
        btnInputFloat->setObjectName(QStringLiteral("btnInputFloat"));

        gridLayout_3->addWidget(btnInputFloat, 1, 0, 1, 1);

        btnInputItem = new QPushButton(groupBox_3);
        btnInputItem->setObjectName(QStringLiteral("btnInputItem"));

        gridLayout_3->addWidget(btnInputItem, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(3);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        btnMsgQuestion = new QPushButton(groupBox_2);
        btnMsgQuestion->setObjectName(QStringLiteral("btnMsgQuestion"));

        gridLayout_2->addWidget(btnMsgQuestion, 0, 0, 1, 1);

        btnMsgInformation = new QPushButton(groupBox_2);
        btnMsgInformation->setObjectName(QStringLiteral("btnMsgInformation"));

        gridLayout_2->addWidget(btnMsgInformation, 0, 1, 1, 1);

        btnMsgWarning = new QPushButton(groupBox_2);
        btnMsgWarning->setObjectName(QStringLiteral("btnMsgWarning"));

        gridLayout_2->addWidget(btnMsgWarning, 0, 2, 1, 1);

        btnMsgCritical = new QPushButton(groupBox_2);
        btnMsgCritical->setObjectName(QStringLiteral("btnMsgCritical"));

        gridLayout_2->addWidget(btnMsgCritical, 1, 0, 1, 1);

        btnMsgAbout = new QPushButton(groupBox_2);
        btnMsgAbout->setObjectName(QStringLiteral("btnMsgAbout"));

        gridLayout_2->addWidget(btnMsgAbout, 1, 1, 1, 1);

        btnMsgAboutQt = new QPushButton(groupBox_2);
        btnMsgAboutQt->setObjectName(QStringLiteral("btnMsgAboutQt"));

        gridLayout_2->addWidget(btnMsgAboutQt, 1, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(220, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        btnSelDir = new QPushButton(groupBox);
        btnSelDir->setObjectName(QStringLiteral("btnSelDir"));

        gridLayout->addWidget(btnSelDir, 1, 0, 1, 1);

        btnColor = new QPushButton(groupBox);
        btnColor->setObjectName(QStringLiteral("btnColor"));

        gridLayout->addWidget(btnColor, 2, 0, 1, 1);

        btnOpen = new QPushButton(groupBox);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        gridLayout->addWidget(btnOpen, 0, 0, 1, 1);

        btnSave = new QPushButton(groupBox);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        gridLayout->addWidget(btnSave, 1, 1, 1, 1);

        btnFont = new QPushButton(groupBox);
        btnFont->setObjectName(QStringLiteral("btnFont"));

        gridLayout->addWidget(btnFont, 2, 1, 1, 1);

        btnOpenMulti = new QPushButton(groupBox);
        btnOpenMulti->setObjectName(QStringLiteral("btnOpenMulti"));

        gridLayout->addWidget(btnOpenMulti, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\346\240\207\345\207\206\345\257\271\350\257\235\346\241\206\347\232\204\344\275\277\347\224\250", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        btnClearText->setText(QApplication::translate("Dialog", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Dialog", "\346\240\207\345\207\206\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206 QInputDialog", Q_NULLPTR));
        btnInputString->setText(QApplication::translate("Dialog", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", Q_NULLPTR));
        btnInputInt->setText(QApplication::translate("Dialog", "\350\276\223\345\205\245\346\225\264\346\225\260", Q_NULLPTR));
        btnInputFloat->setText(QApplication::translate("Dialog", "\350\276\223\345\205\245\346\265\256\347\202\271\346\225\260", Q_NULLPTR));
        btnInputItem->setText(QApplication::translate("Dialog", "\346\235\241\347\233\256\351\200\211\346\213\251\350\276\223\345\205\245", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Dialog", "\346\240\207\345\207\206\346\266\210\346\201\257\346\241\206 QMessageBox", Q_NULLPTR));
        btnMsgQuestion->setText(QApplication::translate("Dialog", "question", Q_NULLPTR));
        btnMsgInformation->setText(QApplication::translate("Dialog", "information", Q_NULLPTR));
        btnMsgWarning->setText(QApplication::translate("Dialog", "warning", Q_NULLPTR));
        btnMsgCritical->setText(QApplication::translate("Dialog", "critical", Q_NULLPTR));
        btnMsgAbout->setText(QApplication::translate("Dialog", "about", Q_NULLPTR));
        btnMsgAboutQt->setText(QApplication::translate("Dialog", "aboutQt", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "\346\240\207\345\207\206\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnSelDir->setText(QApplication::translate("Dialog", "\351\200\211\346\213\251\345\267\262\346\234\211\347\233\256\345\275\225", Q_NULLPTR));
        btnColor->setText(QApplication::translate("Dialog", "\351\200\211\346\213\251\351\242\234\350\211\262", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\200\344\270\252\346\226\207\344\273\266", Q_NULLPTR));
        btnSave->setText(QApplication::translate("Dialog", "\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
        btnFont->setText(QApplication::translate("Dialog", "\351\200\211\346\213\251\345\255\227\344\275\223", Q_NULLPTR));
        btnOpenMulti->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200\345\244\232\344\270\252\346\226\207\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
