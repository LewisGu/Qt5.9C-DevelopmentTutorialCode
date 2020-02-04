/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QDoubleSpinBox *spinTotal;
    QSpinBox *spinNum;
    QDoubleSpinBox *spinPrice;
    QLabel *label_2;
    QLabel *label;
    QPushButton *btnCal;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *btnBin;
    QLabel *label_8;
    QPushButton *btnDec;
    QPushButton *btnHex;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinDec;
    QSpinBox *spinBin;
    QSpinBox *spinHex;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(303, 172);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(10);
        Widget->setFont(font);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        spinTotal = new QDoubleSpinBox(Widget);
        spinTotal->setObjectName(QString::fromUtf8("spinTotal"));
        spinTotal->setMaximum(100000.000000000000000);

        gridLayout->addWidget(spinTotal, 1, 3, 1, 1);

        spinNum = new QSpinBox(Widget);
        spinNum->setObjectName(QString::fromUtf8("spinNum"));
        spinNum->setFrame(true);
        spinNum->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinNum->setProperty("showGroupSeparator", QVariant(false));
        spinNum->setMaximum(1000);
        spinNum->setValue(4);

        gridLayout->addWidget(spinNum, 0, 1, 1, 1);

        spinPrice = new QDoubleSpinBox(Widget);
        spinPrice->setObjectName(QString::fromUtf8("spinPrice"));
        spinPrice->setMinimumSize(QSize(90, 0));
        spinPrice->setMaximum(10000.000000000000000);
        spinPrice->setValue(12.430000000000000);

        gridLayout->addWidget(spinPrice, 0, 3, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnCal = new QPushButton(Widget);
        btnCal->setObjectName(QString::fromUtf8("btnCal"));

        gridLayout->addWidget(btnCal, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        btnBin = new QPushButton(Widget);
        btnBin->setObjectName(QString::fromUtf8("btnBin"));

        gridLayout_2->addWidget(btnBin, 1, 3, 1, 1);

        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        btnDec = new QPushButton(Widget);
        btnDec->setObjectName(QString::fromUtf8("btnDec"));

        gridLayout_2->addWidget(btnDec, 0, 3, 1, 1);

        btnHex = new QPushButton(Widget);
        btnHex->setObjectName(QString::fromUtf8("btnHex"));

        gridLayout_2->addWidget(btnHex, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        spinDec = new QSpinBox(Widget);
        spinDec->setObjectName(QString::fromUtf8("spinDec"));
        spinDec->setMinimumSize(QSize(100, 0));
        spinDec->setMaximum(255);
        spinDec->setValue(12);

        gridLayout_2->addWidget(spinDec, 0, 1, 1, 1);

        spinBin = new QSpinBox(Widget);
        spinBin->setObjectName(QString::fromUtf8("spinBin"));
        spinBin->setMaximum(255);
        spinBin->setDisplayIntegerBase(2);

        gridLayout_2->addWidget(spinBin, 1, 1, 1, 1);

        spinHex = new QSpinBox(Widget);
        spinHex->setObjectName(QString::fromUtf8("spinHex"));
        spinHex->setMaximum(255);
        spinHex->setValue(12);
        spinHex->setDisplayIntegerBase(16);

        gridLayout_2->addWidget(spinHex, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "SpinBox\346\265\213\350\257\225", nullptr));
        label_3->setText(QApplication::translate("Widget", "\346\200\273 \344\273\267", nullptr));
        spinTotal->setPrefix(QApplication::translate("Widget", "$ ", nullptr));
        spinNum->setSuffix(QApplication::translate("Widget", " kg", nullptr));
        spinPrice->setPrefix(QApplication::translate("Widget", "$ ", nullptr));
        label_2->setText(QApplication::translate("Widget", "\345\215\225 \344\273\267", nullptr));
        label->setText(QApplication::translate("Widget", "\346\225\260 \351\207\217", nullptr));
        btnCal->setText(QApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        label_6->setText(QApplication::translate("Widget", "\345\215\201 \350\277\233 \345\210\266", nullptr));
        label_7->setText(QApplication::translate("Widget", "\344\272\214 \350\277\233 \345\210\266", nullptr));
        btnBin->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_8->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        btnDec->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        btnHex->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        spinDec->setSuffix(QString());
        spinDec->setPrefix(QApplication::translate("Widget", "Dec ", nullptr));
        spinBin->setPrefix(QApplication::translate("Widget", "Bin ", nullptr));
        spinHex->setPrefix(QApplication::translate("Widget", "Hex ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
