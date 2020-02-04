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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QPushButton *btnIniList;
    QPushButton *btnListAppend;
    QPushButton *btnListInsert;
    QPushButton *btnListDelete;
    QPushButton *btnListClear;
    QListView *listView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnTextClear;
    QPushButton *btnTextImport;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *LabInfo;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(549, 348);
        QFont font;
        font.setPointSize(10);
        Widget->setFont(font);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(4, 4, 4, 4);
        splitter = new QSplitter(Widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnIniList = new QPushButton(groupBox);
        btnIniList->setObjectName(QStringLiteral("btnIniList"));

        gridLayout->addWidget(btnIniList, 0, 0, 1, 1);

        btnListAppend = new QPushButton(groupBox);
        btnListAppend->setObjectName(QStringLiteral("btnListAppend"));

        gridLayout->addWidget(btnListAppend, 1, 0, 1, 1);

        btnListInsert = new QPushButton(groupBox);
        btnListInsert->setObjectName(QStringLiteral("btnListInsert"));

        gridLayout->addWidget(btnListInsert, 1, 1, 1, 1);

        btnListDelete = new QPushButton(groupBox);
        btnListDelete->setObjectName(QStringLiteral("btnListDelete"));

        gridLayout->addWidget(btnListDelete, 2, 0, 1, 1);

        btnListClear = new QPushButton(groupBox);
        btnListClear->setObjectName(QStringLiteral("btnListClear"));

        gridLayout->addWidget(btnListClear, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_3->addWidget(listView);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, 4, 4, 4);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnTextClear = new QPushButton(groupBox_2);
        btnTextClear->setObjectName(QStringLiteral("btnTextClear"));

        verticalLayout->addWidget(btnTextClear);

        btnTextImport = new QPushButton(groupBox_2);
        btnTextImport->setObjectName(QStringLiteral("btnTextImport"));

        verticalLayout->addWidget(btnTextImport);


        verticalLayout_2->addLayout(verticalLayout);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout_2->addWidget(plainTextEdit);

        splitter->addWidget(groupBox_2);

        verticalLayout_4->addWidget(splitter);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        LabInfo = new QLabel(groupBox_3);
        LabInfo->setObjectName(QStringLiteral("LabInfo"));

        horizontalLayout->addWidget(LabInfo);


        verticalLayout_4->addWidget(groupBox_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "QListView\347\232\204\344\275\277\347\224\250", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "QListView", Q_NULLPTR));
        btnIniList->setText(QApplication::translate("Widget", "\346\201\242\345\244\215\345\210\227\350\241\250", Q_NULLPTR));
        btnListAppend->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
        btnListInsert->setText(QApplication::translate("Widget", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
        btnListDelete->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
        btnListClear->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "QPlainTextEdit", Q_NULLPTR));
        btnTextClear->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", Q_NULLPTR));
        btnTextImport->setText(QApplication::translate("Widget", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204StringList", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        LabInfo->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\351\241\271\347\232\204ModelIndex", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
