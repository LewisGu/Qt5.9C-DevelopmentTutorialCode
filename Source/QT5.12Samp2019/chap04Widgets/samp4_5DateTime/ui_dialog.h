/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QTimeEdit *timeEdit;
    QLabel *label_3;
    QPushButton *btnSetDate;
    QPushButton *btnSetDateTime;
    QLabel *label;
    QDateEdit *dateEdit;
    QPushButton *btnSetTime;
    QLineEdit *editTime;
    QLineEdit *editDate;
    QPushButton *btnGetTime;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *editDateTime;
    QDateTimeEdit *dateTimeEdit;
    QLabel *LabDateTime;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QLabel *label_4;
    QSpinBox *spinBoxIntv;
    QPushButton *btnSetIntv;
    QSpacerItem *horizontalSpacer;
    QLabel *LabElapsTime;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *LCDHour;
    QLCDNumber *LCDMin;
    QLCDNumber *LCDSec;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLineEdit *editCalendar;
    QCalendarWidget *calendarWidget;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(788, 374);
        QFont font;
        font.setPointSize(10);
        Dialog->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(Dialog);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setCalendarPopup(true);
        timeEdit->setTime(QTime(15, 30, 55));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        btnSetDate = new QPushButton(groupBox_2);
        btnSetDate->setObjectName(QString::fromUtf8("btnSetDate"));

        gridLayout->addWidget(btnSetDate, 2, 4, 1, 1);

        btnSetDateTime = new QPushButton(groupBox_2);
        btnSetDateTime->setObjectName(QString::fromUtf8("btnSetDateTime"));

        gridLayout->addWidget(btnSetDateTime, 3, 4, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(0);
        dateEdit->setDate(QDate(2016, 11, 21));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 1);

        btnSetTime = new QPushButton(groupBox_2);
        btnSetTime->setObjectName(QString::fromUtf8("btnSetTime"));

        gridLayout->addWidget(btnSetTime, 1, 4, 1, 1);

        editTime = new QLineEdit(groupBox_2);
        editTime->setObjectName(QString::fromUtf8("editTime"));

        gridLayout->addWidget(editTime, 1, 3, 1, 1);

        editDate = new QLineEdit(groupBox_2);
        editDate->setObjectName(QString::fromUtf8("editDate"));

        gridLayout->addWidget(editDate, 2, 3, 1, 1);

        btnGetTime = new QPushButton(groupBox_2);
        btnGetTime->setObjectName(QString::fromUtf8("btnGetTime"));

        gridLayout->addWidget(btnGetTime, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        editDateTime = new QLineEdit(groupBox_2);
        editDateTime->setObjectName(QString::fromUtf8("editDateTime"));
        editDateTime->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(editDateTime, 3, 3, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox_2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setMinimumSize(QSize(160, 0));
        dateTimeEdit->setDateTime(QDateTime(QDate(2018, 10, 9), QTime(8, 21, 28)));
        dateTimeEdit->setDate(QDate(2018, 10, 9));
        dateTimeEdit->setTime(QTime(8, 21, 28));
        dateTimeEdit->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        dateTimeEdit->setMinimumDateTime(QDateTime(QDate(1763, 9, 14), QTime(0, 0, 0)));
        dateTimeEdit->setMinimumDate(QDate(1763, 9, 14));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateTimeEdit->setCalendarPopup(false);
        dateTimeEdit->setCurrentSectionIndex(0);
        dateTimeEdit->setTimeSpec(Qt::LocalTime);

        gridLayout->addWidget(dateTimeEdit, 3, 1, 1, 1);

        LabDateTime = new QLabel(groupBox_2);
        LabDateTime->setObjectName(QString::fromUtf8("LabDateTime"));
        LabDateTime->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LabDateTime, 0, 3, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnStart = new QPushButton(groupBox);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        gridLayout_2->addWidget(btnStart, 0, 0, 1, 2);

        btnStop = new QPushButton(groupBox);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setEnabled(false);

        gridLayout_2->addWidget(btnStop, 0, 2, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        spinBoxIntv = new QSpinBox(groupBox);
        spinBoxIntv->setObjectName(QString::fromUtf8("spinBoxIntv"));
        spinBoxIntv->setMaximum(999999);
        spinBoxIntv->setValue(1000);

        gridLayout_2->addWidget(spinBoxIntv, 1, 1, 1, 2);

        btnSetIntv = new QPushButton(groupBox);
        btnSetIntv->setObjectName(QString::fromUtf8("btnSetIntv"));

        gridLayout_2->addWidget(btnSetIntv, 1, 3, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 5, 1, 1);

        LabElapsTime = new QLabel(groupBox);
        LabElapsTime->setObjectName(QString::fromUtf8("LabElapsTime"));

        gridLayout_2->addWidget(LabElapsTime, 0, 5, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LCDHour = new QLCDNumber(groupBox);
        LCDHour->setObjectName(QString::fromUtf8("LCDHour"));
        LCDHour->setSmallDecimalPoint(false);
        LCDHour->setDigitCount(2);
        LCDHour->setProperty("value", QVariant(10.000000000000000));
        LCDHour->setProperty("intValue", QVariant(10));

        horizontalLayout->addWidget(LCDHour);

        LCDMin = new QLCDNumber(groupBox);
        LCDMin->setObjectName(QString::fromUtf8("LCDMin"));
        LCDMin->setDigitCount(2);
        LCDMin->setProperty("intValue", QVariant(26));

        horizontalLayout->addWidget(LCDMin);

        LCDSec = new QLCDNumber(groupBox);
        LCDSec->setObjectName(QString::fromUtf8("LCDSec"));
        LCDSec->setDigitCount(2);
        LCDSec->setProperty("intValue", QVariant(35));

        horizontalLayout->addWidget(LCDSec);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(10);
        progressBar->setTextVisible(true);

        verticalLayout->addWidget(progressBar);


        verticalLayout_3->addWidget(groupBox);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        editCalendar = new QLineEdit(groupBox_3);
        editCalendar->setObjectName(QString::fromUtf8("editCalendar"));

        gridLayout_3->addWidget(editCalendar, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_3);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGridVisible(false);

        gridLayout_3->addWidget(calendarWidget, 1, 0, 1, 2);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnClose = new QPushButton(Dialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        verticalLayout_2->addWidget(btnClose);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(Dialog);
        QObject::connect(btnClose, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\346\227\245\346\234\237\346\227\266\351\227\264\357\274\214\345\256\232\346\227\266\345\231\250", nullptr));
        groupBox_2->setTitle(QApplication::translate("Dialog", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\346\227\245  \346\234\237", nullptr));
        timeEdit->setDisplayFormat(QApplication::translate("Dialog", "HH:mm:ss", nullptr));
        label_3->setText(QApplication::translate("Dialog", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        btnSetDate->setText(QApplication::translate("Dialog", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        btnSetDateTime->setText(QApplication::translate("Dialog", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        label->setText(QApplication::translate("Dialog", "\346\227\266  \351\227\264", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("Dialog", "yyyy\345\271\264M\346\234\210d\346\227\245", nullptr));
        btnSetTime->setText(QApplication::translate("Dialog", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        btnGetTime->setText(QApplication::translate("Dialog", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        dateTimeEdit->setDisplayFormat(QApplication::translate("Dialog", "yyyy-MM-dd HH:mm:ss", nullptr));
        LabDateTime->setText(QApplication::translate("Dialog", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "\345\256\232\346\227\266\345\231\250", nullptr));
        btnStart->setText(QApplication::translate("Dialog", "\345\274\200\345\247\213", nullptr));
        btnStop->setText(QApplication::translate("Dialog", "\345\201\234\346\255\242", nullptr));
        label_4->setText(QApplication::translate("Dialog", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        spinBoxIntv->setSuffix(QApplication::translate("Dialog", " ms", nullptr));
        btnSetIntv->setText(QApplication::translate("Dialog", "\350\256\276\347\275\256\345\221\250\346\234\237", nullptr));
        LabElapsTime->setText(QApplication::translate("Dialog", "\346\265\201\351\200\235\346\227\266\351\227\264", nullptr));
        groupBox_3->setTitle(QApplication::translate("Dialog", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_5->setText(QApplication::translate("Dialog", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237\357\274\232", nullptr));
        btnClose->setText(QApplication::translate("Dialog", "\351\200\200  \345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
