/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnIniItems;
    QPushButton *btnClearItems;
    QCheckBox *chkBoxEditable;
    QComboBox *comboBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnIni2;
    QComboBox *comboBox2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnToComboBox;
    QPushButton *btnClearText;
    QCheckBox *chkBoxReadonly;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(542, 426);
        QFont font;
        font.setPointSize(10);
        Widget->setFont(font);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnIniItems = new QPushButton(groupBox);
        btnIniItems->setObjectName(QStringLiteral("btnIniItems"));

        gridLayout->addWidget(btnIniItems, 0, 0, 1, 1);

        btnClearItems = new QPushButton(groupBox);
        btnClearItems->setObjectName(QStringLiteral("btnClearItems"));

        gridLayout->addWidget(btnClearItems, 0, 1, 1, 1);

        chkBoxEditable = new QCheckBox(groupBox);
        chkBoxEditable->setObjectName(QStringLiteral("chkBoxEditable"));
        chkBoxEditable->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(chkBoxEditable, 0, 2, 1, 1);

        comboBox = new QComboBox(groupBox);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/UNIT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEditable(false);

        gridLayout->addWidget(comboBox, 1, 0, 1, 3);


        horizontalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        btnIni2 = new QPushButton(groupBox_3);
        btnIni2->setObjectName(QStringLiteral("btnIni2"));

        verticalLayout_2->addWidget(btnIni2);

        comboBox2 = new QComboBox(groupBox_3);
        comboBox2->setObjectName(QStringLiteral("comboBox2"));

        verticalLayout_2->addWidget(comboBox2);


        horizontalLayout->addWidget(groupBox_3);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnToComboBox = new QPushButton(groupBox_2);
        btnToComboBox->setObjectName(QStringLiteral("btnToComboBox"));

        horizontalLayout_2->addWidget(btnToComboBox);

        btnClearText = new QPushButton(groupBox_2);
        btnClearText->setObjectName(QStringLiteral("btnClearText"));

        horizontalLayout_2->addWidget(btnClearText);

        chkBoxReadonly = new QCheckBox(groupBox_2);
        chkBoxReadonly->setObjectName(QStringLiteral("chkBoxReadonly"));
        chkBoxReadonly->setMaximumSize(QSize(200, 16777215));
        chkBoxReadonly->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(chkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        verticalLayout_3->addWidget(groupBox_2);


        retranslateUi(Widget);

        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "QComboBox\345\222\214QPlainTextEdit", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\347\256\200\345\215\225ComboBox", Q_NULLPTR));
        btnIniItems->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
        btnClearItems->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        chkBoxEditable->setText(QApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        comboBox->setItemText(0, QApplication::translate("Widget", "\345\214\227\344\272\254\345\270\202", Q_NULLPTR));
        comboBox->setItemText(1, QApplication::translate("Widget", "\344\270\212\346\265\267\345\270\202", Q_NULLPTR));

        groupBox_3->setTitle(QApplication::translate("Widget", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204ComboBox", Q_NULLPTR));
        btnIni2->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "QPlainTextEdit(\345\205\267\346\234\211\346\240\207\345\207\206\345\277\253\346\215\267\350\217\234\345\215\225)", Q_NULLPTR));
        btnToComboBox->setText(QApplication::translate("Widget", "\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271\346\267\273\345\212\240\345\210\260ComboBox", Q_NULLPTR));
        btnClearText->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\346\226\207\346\234\254\345\206\205\345\256\271", Q_NULLPTR));
        chkBoxReadonly->setText(QApplication::translate("Widget", "Read Only", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
