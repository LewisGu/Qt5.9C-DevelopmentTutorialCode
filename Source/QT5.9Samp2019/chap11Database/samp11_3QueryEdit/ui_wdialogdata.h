/********************************************************************************
** Form generated from reading UI file 'wdialogdata.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WDIALOGDATA_H
#define UI_WDIALOGDATA_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WDialogData
{
public:
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinEmpNo;
    QLabel *label_2;
    QLineEdit *editName;
    QLabel *label_3;
    QComboBox *comboSex;
    QLabel *label_4;
    QDoubleSpinBox *spinHeight;
    QLabel *label_5;
    QDateEdit *editBirth;
    QLabel *label_10;
    QLineEdit *editMobile;
    QLabel *label_7;
    QComboBox *comboProvince;
    QLabel *label_8;
    QLineEdit *editCity;
    QLabel *label_6;
    QComboBox *comboDep;
    QPlainTextEdit *editMemo;
    QLabel *label_9;
    QLabel *label_11;
    QSpinBox *spinSalary;
    QLabel *label_12;
    QComboBox *comboEdu;
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QLabel *LabPhoto;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnSetPhoto;
    QPushButton *btnClearPhoto;
    QPushButton *btnOK;
    QPushButton *btnClose;

    void setupUi(QDialog *WDialogData)
    {
        if (WDialogData->objectName().isEmpty())
            WDialogData->setObjectName(QStringLiteral("WDialogData"));
        WDialogData->resize(510, 368);
        QFont font;
        font.setPointSize(10);
        WDialogData->setFont(font);
        groupBox_2 = new QGroupBox(WDialogData);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(5, 5, 408, 356));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinEmpNo = new QSpinBox(groupBox_2);
        spinEmpNo->setObjectName(QStringLiteral("spinEmpNo"));
        spinEmpNo->setMinimum(1);
        spinEmpNo->setMaximum(10000);

        gridLayout->addWidget(spinEmpNo, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editName = new QLineEdit(groupBox_2);
        editName->setObjectName(QStringLiteral("editName"));

        gridLayout->addWidget(editName, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboSex = new QComboBox(groupBox_2);
        comboSex->setObjectName(QStringLiteral("comboSex"));

        gridLayout->addWidget(comboSex, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinHeight = new QDoubleSpinBox(groupBox_2);
        spinHeight->setObjectName(QStringLiteral("spinHeight"));
        spinHeight->setMaximum(3);
        spinHeight->setSingleStep(0.01);
        spinHeight->setValue(1.56);

        gridLayout->addWidget(spinHeight, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        editBirth = new QDateEdit(groupBox_2);
        editBirth->setObjectName(QStringLiteral("editBirth"));
        editBirth->setCalendarPopup(true);
        editBirth->setDate(QDate(2017, 2, 20));

        gridLayout->addWidget(editBirth, 4, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        editMobile = new QLineEdit(groupBox_2);
        editMobile->setObjectName(QStringLiteral("editMobile"));

        gridLayout->addWidget(editMobile, 5, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        comboProvince = new QComboBox(groupBox_2);
        comboProvince->setObjectName(QStringLiteral("comboProvince"));
        comboProvince->setEditable(true);

        gridLayout->addWidget(comboProvince, 6, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        editCity = new QLineEdit(groupBox_2);
        editCity->setObjectName(QStringLiteral("editCity"));

        gridLayout->addWidget(editCity, 7, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        comboDep = new QComboBox(groupBox_2);
        comboDep->setObjectName(QStringLiteral("comboDep"));
        comboDep->setEditable(true);

        gridLayout->addWidget(comboDep, 8, 1, 1, 1);

        editMemo = new QPlainTextEdit(groupBox_2);
        editMemo->setObjectName(QStringLiteral("editMemo"));
        editMemo->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(editMemo, 11, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 11, 0, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        spinSalary = new QSpinBox(groupBox_2);
        spinSalary->setObjectName(QStringLiteral("spinSalary"));
        spinSalary->setMinimum(1000);
        spinSalary->setMaximum(50000);
        spinSalary->setSingleStep(100);
        spinSalary->setValue(1000);

        gridLayout->addWidget(spinSalary, 10, 1, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 10, 0, 1, 1);

        comboEdu = new QComboBox(groupBox_2);
        comboEdu->setObjectName(QStringLiteral("comboEdu"));
        comboEdu->setEditable(true);

        gridLayout->addWidget(comboEdu, 9, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout->addWidget(label_13);

        LabPhoto = new QLabel(groupBox_2);
        LabPhoto->setObjectName(QStringLiteral("LabPhoto"));
        LabPhoto->setMinimumSize(QSize(150, 0));
        LabPhoto->setMaximumSize(QSize(350, 16777215));

        verticalLayout->addWidget(LabPhoto);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget = new QWidget(WDialogData);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(420, 9, 82, 216));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnSetPhoto = new QPushButton(layoutWidget);
        btnSetPhoto->setObjectName(QStringLiteral("btnSetPhoto"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/00.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        btnSetPhoto->setIcon(icon);

        verticalLayout_2->addWidget(btnSetPhoto);

        btnClearPhoto = new QPushButton(layoutWidget);
        btnClearPhoto->setObjectName(QStringLiteral("btnClearPhoto"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClearPhoto->setIcon(icon1);

        verticalLayout_2->addWidget(btnClearPhoto);

        btnOK = new QPushButton(layoutWidget);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon2);

        verticalLayout_2->addWidget(btnOK);

        btnClose = new QPushButton(layoutWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon3);

        verticalLayout_2->addWidget(btnClose);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinEmpNo);
        label_2->setBuddy(editName);
        label_3->setBuddy(comboSex);
        label_4->setBuddy(spinHeight);
        label_5->setBuddy(editBirth);
        label_10->setBuddy(editMobile);
        label_7->setBuddy(comboProvince);
        label_8->setBuddy(editCity);
        label_6->setBuddy(comboDep);
        label_9->setBuddy(editMemo);
        label_11->setBuddy(comboEdu);
        label_12->setBuddy(spinSalary);
#endif // QT_NO_SHORTCUT

        retranslateUi(WDialogData);
        QObject::connect(btnClose, SIGNAL(clicked()), WDialogData, SLOT(reject()));
        QObject::connect(btnOK, SIGNAL(clicked()), WDialogData, SLOT(accept()));

        QMetaObject::connectSlotsByName(WDialogData);
    } // setupUi

    void retranslateUi(QDialog *WDialogData)
    {
        WDialogData->setWindowTitle(QApplication::translate("WDialogData", "\347\274\226\350\276\221\350\256\260\345\275\225", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("WDialogData", "\345\267\245  \345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("WDialogData", "\345\247\223  \345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("WDialogData", "\346\200\247  \345\210\253", Q_NULLPTR));
        comboSex->clear();
        comboSex->insertItems(0, QStringList()
         << QApplication::translate("WDialogData", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\345\245\263", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("WDialogData", "\350\272\253  \351\253\230", Q_NULLPTR));
        spinHeight->setSuffix(QString());
        label_5->setText(QApplication::translate("WDialogData", "\345\207\272\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        editBirth->setDisplayFormat(QApplication::translate("WDialogData", "yyyy-MM-dd", Q_NULLPTR));
        label_10->setText(QApplication::translate("WDialogData", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_7->setText(QApplication::translate("WDialogData", "\345\207\272\347\224\237\347\234\201\344\273\275", Q_NULLPTR));
        comboProvince->clear();
        comboProvince->insertItems(0, QStringList()
         << QApplication::translate("WDialogData", "\345\214\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\344\270\212\346\265\267", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\345\244\251\346\264\245", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\351\207\215\345\272\206", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\345\256\211\345\276\275", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\346\262\263\345\214\227", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\346\262\263\345\215\227", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\346\271\226\345\214\227", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\346\271\226\345\215\227", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\345\261\261\350\245\277", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\345\261\261\344\270\234", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\351\231\225\350\245\277", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\346\261\237\350\213\217", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\346\261\237\350\245\277", Q_NULLPTR)
        );
        comboProvince->setCurrentText(QApplication::translate("WDialogData", "\345\214\227\344\272\254", Q_NULLPTR));
        label_8->setText(QApplication::translate("WDialogData", "\345\237\216  \345\270\202", Q_NULLPTR));
        label_6->setText(QApplication::translate("WDialogData", "\351\203\250  \351\227\250", Q_NULLPTR));
        comboDep->clear();
        comboDep->insertItems(0, QStringList()
         << QApplication::translate("WDialogData", "\351\224\200\345\224\256\351\203\250", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\346\212\200\346\234\257\351\203\250", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\347\224\237\344\272\247\351\203\250", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\350\241\214\346\224\277\351\203\250", Q_NULLPTR)
        );
        comboDep->setCurrentText(QApplication::translate("WDialogData", "\351\224\200\345\224\256\351\203\250", Q_NULLPTR));
        label_9->setText(QApplication::translate("WDialogData", "\345\244\207   \346\263\250", Q_NULLPTR));
        label_11->setText(QApplication::translate("WDialogData", "\345\255\246  \345\216\206", Q_NULLPTR));
        spinSalary->setPrefix(QString());
        label_12->setText(QApplication::translate("WDialogData", "\345\267\245  \350\265\204", Q_NULLPTR));
        comboEdu->clear();
        comboEdu->insertItems(0, QStringList()
         << QApplication::translate("WDialogData", "\345\215\232\345\243\253\347\240\224\347\251\266\347\224\237", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\347\241\225\345\243\253\347\240\224\347\251\266\347\224\237", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\345\244\247\345\255\246\346\234\254\347\247\221", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\345\244\247\345\255\246\344\270\223\347\247\221", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\351\253\230\344\270\255", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\345\210\235\344\270\255", Q_NULLPTR)
         << QApplication::translate("WDialogData", "\345\260\217\345\255\246", Q_NULLPTR)
        );
        comboEdu->setCurrentText(QApplication::translate("WDialogData", "\345\215\232\345\243\253\347\240\224\347\251\266\347\224\237", Q_NULLPTR));
        label_13->setText(QApplication::translate("WDialogData", "\347\205\247  \347\211\207", Q_NULLPTR));
        LabPhoto->setText(QApplication::translate("WDialogData", "dbLabPhoto", Q_NULLPTR));
        btnSetPhoto->setText(QApplication::translate("WDialogData", "\345\257\274\345\205\245\347\205\247\347\211\207", Q_NULLPTR));
        btnClearPhoto->setText(QApplication::translate("WDialogData", "\346\270\205\351\231\244\347\205\247\347\211\207", Q_NULLPTR));
        btnOK->setText(QApplication::translate("WDialogData", "\347\241\256  \345\256\232", Q_NULLPTR));
        btnClose->setText(QApplication::translate("WDialogData", "\345\217\226  \346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WDialogData: public Ui_WDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WDIALOGDATA_H
