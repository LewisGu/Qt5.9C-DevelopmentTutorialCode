/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QPushButton *btnClear;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QPushButton *btnPrevious;
    QPushButton *btnNext;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LabCurMedia;
    QSlider *sliderPosition;
    QLabel *LabRatio;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(377, 344);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnAdd = new QPushButton(groupBox);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon);

        horizontalLayout_3->addWidget(btnAdd);

        btnRemove = new QPushButton(groupBox);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/318.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemove->setIcon(icon1);

        horizontalLayout_3->addWidget(btnRemove);

        btnClear = new QPushButton(groupBox);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/214.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClear->setIcon(icon2);

        horizontalLayout_3->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout_3);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnPlay = new QPushButton(centralWidget);
        btnPlay->setObjectName(QStringLiteral("btnPlay"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/620.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon3);

        horizontalLayout->addWidget(btnPlay);

        btnPause = new QPushButton(centralWidget);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/622.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon4);

        horizontalLayout->addWidget(btnPause);

        btnStop = new QPushButton(centralWidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/624.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon5);

        horizontalLayout->addWidget(btnStop);

        btnPrevious = new QPushButton(centralWidget);
        btnPrevious->setObjectName(QStringLiteral("btnPrevious"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/616.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPrevious->setIcon(icon6);

        horizontalLayout->addWidget(btnPrevious);

        btnNext = new QPushButton(centralWidget);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/630.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnNext->setIcon(icon7);

        horizontalLayout->addWidget(btnNext);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSound = new QPushButton(centralWidget);
        btnSound->setObjectName(QStringLiteral("btnSound"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/images/volumn.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnSound->setIcon(icon8);
        btnSound->setFlat(true);

        horizontalLayout->addWidget(btnSound);

        sliderVolumn = new QSlider(centralWidget);
        sliderVolumn->setObjectName(QStringLiteral("sliderVolumn"));
        sliderVolumn->setMaximum(100);
        sliderVolumn->setValue(100);
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderVolumn);


        verticalLayout_2->addLayout(horizontalLayout);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        LabCurMedia = new QLabel(centralWidget);
        LabCurMedia->setObjectName(QStringLiteral("LabCurMedia"));
        LabCurMedia->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(LabCurMedia);

        sliderPosition = new QSlider(centralWidget);
        sliderPosition->setObjectName(QStringLiteral("sliderPosition"));
        sliderPosition->setTracking(false);
        sliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderPosition);

        LabRatio = new QLabel(centralWidget);
        LabRatio->setObjectName(QStringLiteral("LabRatio"));
        LabRatio->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(LabRatio);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\222\255\346\224\276\345\210\227\350\241\250", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
        btnRemove->setText(QApplication::translate("MainWindow", "\347\247\273\351\231\244", Q_NULLPTR));
        btnClear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnPlay->setToolTip(QApplication::translate("MainWindow", "\346\222\255\346\224\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnPlay->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnPause->setToolTip(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnPause->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnStop->setToolTip(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnStop->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnPrevious->setToolTip(QApplication::translate("MainWindow", "\345\211\215\344\270\200\346\233\262\347\233\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnPrevious->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnNext->setToolTip(QApplication::translate("MainWindow", "\344\270\213\344\270\200\346\233\262\347\233\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNext->setText(QString());
        btnSound->setText(QString());
        LabCurMedia->setText(QApplication::translate("MainWindow", "\346\227\240\346\233\262\347\233\256", Q_NULLPTR));
        LabRatio->setText(QApplication::translate("MainWindow", "\350\277\233\345\272\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
