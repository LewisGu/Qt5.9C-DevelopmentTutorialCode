/********************************************************************************
** Form generated from reading UI file 'qformtable.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFORMTABLE_H
#define UI_QFORMTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFormTable
{
public:
    QAction *actSize;
    QAction *actSetHeader;
    QAction *actClose;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QFormTable)
    {
        if (QFormTable->objectName().isEmpty())
            QFormTable->setObjectName(QString::fromUtf8("QFormTable"));
        QFormTable->resize(721, 413);
        actSize = new QAction(QFormTable);
        actSize->setObjectName(QString::fromUtf8("actSize"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSize->setIcon(icon);
        actSetHeader = new QAction(QFormTable);
        actSetHeader->setObjectName(QString::fromUtf8("actSetHeader"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/516.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSetHeader->setIcon(icon1);
        actClose = new QAction(QFormTable);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon2);
        centralwidget = new QWidget(QFormTable);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        QFormTable->setCentralWidget(centralwidget);
        toolBar = new QToolBar(QFormTable);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        QFormTable->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actSize);
        toolBar->addAction(actSetHeader);
        toolBar->addSeparator();
        toolBar->addAction(actClose);

        retranslateUi(QFormTable);
        QObject::connect(actClose, SIGNAL(triggered()), QFormTable, SLOT(close()));

        QMetaObject::connectSlotsByName(QFormTable);
    } // setupUi

    void retranslateUi(QMainWindow *QFormTable)
    {
        QFormTable->setWindowTitle(QApplication::translate("QFormTable", "MainWindow", nullptr));
        actSize->setText(QApplication::translate("QFormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
#ifndef QT_NO_TOOLTIP
        actSize->setToolTip(QApplication::translate("QFormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
#endif // QT_NO_TOOLTIP
        actSetHeader->setText(QApplication::translate("QFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#ifndef QT_NO_TOOLTIP
        actSetHeader->setToolTip(QApplication::translate("QFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264\346\226\207\345\255\227", nullptr));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("QFormTable", "\345\205\263\351\227\255", nullptr));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("QFormTable", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", nullptr));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("QFormTable", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QFormTable: public Ui_QFormTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFORMTABLE_H
