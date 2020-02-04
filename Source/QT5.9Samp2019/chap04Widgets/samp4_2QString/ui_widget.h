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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboBox1;
    QLabel *label_2;
    QComboBox *comboBox2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_14;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_13;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_3;
    QPushButton *pushButton_18;
    QPushButton *pushButton_8;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *edtResult;
    QCheckBox *checkBox;
    QLabel *LabSpin;
    QSpinBox *spinBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(526, 339);
        QFont font;
        font.setPointSize(11);
        Widget->setFont(font);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboBox1 = new QComboBox(Widget);
        comboBox1->setObjectName(QStringLiteral("comboBox1"));
        comboBox1->setEditable(true);

        gridLayout_2->addWidget(comboBox1, 0, 2, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        comboBox2 = new QComboBox(Widget);
        comboBox2->setObjectName(QStringLiteral("comboBox2"));
        comboBox2->setEditable(true);

        gridLayout_2->addWidget(comboBox2, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_14 = new QPushButton(groupBox);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        gridLayout_3->addWidget(pushButton_14, 3, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout_3->addWidget(pushButton_11, 1, 0, 1, 1);

        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        gridLayout_3->addWidget(pushButton_12, 1, 1, 1, 1);

        pushButton_15 = new QPushButton(groupBox);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        gridLayout_3->addWidget(pushButton_15, 2, 0, 1, 1);

        pushButton_16 = new QPushButton(groupBox);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        gridLayout_3->addWidget(pushButton_16, 2, 1, 1, 1);

        pushButton_17 = new QPushButton(groupBox);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        gridLayout_3->addWidget(pushButton_17, 4, 0, 1, 1);

        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        gridLayout_3->addWidget(pushButton_13, 4, 1, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_9 = new QPushButton(groupBox_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_5->addWidget(pushButton_6, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        gridLayout_5->addWidget(pushButton_10, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_5->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_18 = new QPushButton(groupBox_2);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        gridLayout_5->addWidget(pushButton_18, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_5->addWidget(pushButton_8, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        edtResult = new QLineEdit(Widget);
        edtResult->setObjectName(QStringLiteral("edtResult"));

        gridLayout->addWidget(edtResult, 0, 1, 1, 3);

        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 1, 0, 1, 2);

        LabSpin = new QLabel(Widget);
        LabSpin->setObjectName(QStringLiteral("LabSpin"));
        LabSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(LabSpin, 1, 2, 1, 1);

        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(1000);

        gridLayout->addWidget(spinBox, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "QString\345\270\270\347\224\250\345\212\237\350\203\275", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "str1", Q_NULLPTR));
        comboBox1->clear();
        comboBox1->insertItems(0, QStringList()
         << QApplication::translate("Widget", "G:\\Qt5Book\\QT5.9Study", Q_NULLPTR)
         << QApplication::translate("Widget", "G:\\Qt5Book\\QT5.9Study\\qw.cpp", Q_NULLPTR)
         << QApplication::translate("Widget", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\214\347\224\267\357\274\2141984-3-4\357\274\214\346\261\211\346\227\217\357\274\214\345\261\261\344\270\234", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Widget", "str2", Q_NULLPTR));
        comboBox2->clear();
        comboBox2->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\\", Q_NULLPTR)
         << QApplication::translate("Widget", ".cpp", Q_NULLPTR)
         << QApplication::translate("Widget", ":", Q_NULLPTR)
         << QApplication::translate("Widget", "\357\274\214", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("Widget", "section", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "Append", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "Prepend", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("Widget", "toUpper", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("Widget", "toLower", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("Widget", "left", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("Widget", "right", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("Widget", "simplified", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("Widget", "trimmed", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\346\225\260\345\255\227", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "count", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "size", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Widget", "indexOf", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Widget", "lastIndexOf", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\351\200\273\350\276\221\345\210\244\346\226\255", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Widget", "endsWith", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Widget", "startsWith", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "contains", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("Widget", "isNull", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Widget", "isEmpty", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\347\273\223\346\236\234", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Widget", "CheckBox", Q_NULLPTR));
        LabSpin->setText(QApplication::translate("Widget", "LabSpin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
