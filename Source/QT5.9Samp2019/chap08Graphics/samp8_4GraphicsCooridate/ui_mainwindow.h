/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qwgraphicsview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *labViewSize;
    QLabel *LabSceneRect;
    QWGraphicsView *View;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(615, 437);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labViewSize = new QLabel(groupBox);
        labViewSize->setObjectName(QStringLiteral("labViewSize"));

        verticalLayout->addWidget(labViewSize);

        LabSceneRect = new QLabel(groupBox);
        LabSceneRect->setObjectName(QStringLiteral("LabSceneRect"));

        verticalLayout->addWidget(LabSceneRect);


        verticalLayout_2->addWidget(groupBox);

        View = new QWGraphicsView(centralWidget);
        View->setObjectName(QStringLiteral("View"));

        verticalLayout_2->addWidget(View);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "View/Scene/Item\345\237\272\346\234\254\345\205\263\347\263\273\345\222\214\345\235\220\346\240\207\345\217\230\346\215\242", Q_NULLPTR));
        groupBox->setTitle(QString());
        labViewSize->setText(QApplication::translate("MainWindow", "Graphics View\345\235\220\346\240\207\357\274\214\345\267\246\344\270\212\350\247\222\346\200\273\346\230\257\357\274\2100,0\357\274\211\357\274\214\345\256\275\345\272\246=\357\274\214\351\225\277\345\272\246=", Q_NULLPTR));
        LabSceneRect->setText(QApplication::translate("MainWindow", "QGraphicsView::sceneRect=()", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
