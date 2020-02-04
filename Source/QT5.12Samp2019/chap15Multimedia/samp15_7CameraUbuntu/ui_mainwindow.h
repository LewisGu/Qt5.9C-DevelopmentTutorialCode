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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actStartCamera;
    QAction *actStopCamera;
    QAction *actVideoRecord;
    QAction *actCapture;
    QAction *actQuit;
    QAction *actVideoStop;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QCheckBox *chkMute;
    QPushButton *btnVideoFile;
    QLineEdit *editOutputFile;
    QLabel *LabDuration;
    QComboBox *comboCamera;
    QCheckBox *checkStillImage;
    QCheckBox *checkVideo;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCameraViewfinder *viewFinder;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *LabCapturedImage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(732, 455);
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        MainWindow->setFont(font);
        actStartCamera = new QAction(MainWindow);
        actStartCamera->setObjectName(QStringLiteral("actStartCamera"));
        actStartCamera->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/video_chat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actStartCamera->setIcon(icon);
        actStopCamera = new QAction(MainWindow);
        actStopCamera->setObjectName(QStringLiteral("actStopCamera"));
        actStopCamera->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/remove_user.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actStopCamera->setIcon(icon1);
        actVideoRecord = new QAction(MainWindow);
        actVideoRecord->setObjectName(QStringLiteral("actVideoRecord"));
        actVideoRecord->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/5.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actVideoRecord->setIcon(icon2);
        actCapture = new QAction(MainWindow);
        actCapture->setObjectName(QStringLiteral("actCapture"));
        actCapture->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/file_pictures.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actCapture->setIcon(icon3);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/exit_24.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon4);
        actVideoStop = new QAction(MainWindow);
        actVideoStop->setObjectName(QStringLiteral("actVideoStop"));
        actVideoStop->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/Shut Down.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actVideoStop->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 2);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 90));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 4, -1, 2);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        chkMute = new QCheckBox(groupBox_2);
        chkMute->setObjectName(QStringLiteral("chkMute"));

        gridLayout->addWidget(chkMute, 1, 0, 1, 1);

        btnVideoFile = new QPushButton(groupBox_2);
        btnVideoFile->setObjectName(QStringLiteral("btnVideoFile"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnVideoFile->setIcon(icon6);
        btnVideoFile->setFlat(false);

        gridLayout->addWidget(btnVideoFile, 1, 1, 1, 1);

        editOutputFile = new QLineEdit(groupBox_2);
        editOutputFile->setObjectName(QStringLiteral("editOutputFile"));

        gridLayout->addWidget(editOutputFile, 1, 2, 1, 2);

        LabDuration = new QLabel(groupBox_2);
        LabDuration->setObjectName(QStringLiteral("LabDuration"));
        LabDuration->setMinimumSize(QSize(110, 0));
        LabDuration->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(LabDuration, 1, 4, 1, 1);

        comboCamera = new QComboBox(groupBox_2);
        comboCamera->setObjectName(QStringLiteral("comboCamera"));

        gridLayout->addWidget(comboCamera, 0, 1, 1, 1);

        checkStillImage = new QCheckBox(groupBox_2);
        checkStillImage->setObjectName(QStringLiteral("checkStillImage"));
        checkStillImage->setEnabled(false);

        gridLayout->addWidget(checkStillImage, 0, 2, 1, 1);

        checkVideo = new QCheckBox(groupBox_2);
        checkVideo->setObjectName(QStringLiteral("checkVideo"));
        checkVideo->setEnabled(false);

        gridLayout->addWidget(checkVideo, 0, 3, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewFinder = new QCameraViewfinder(groupBox);
        viewFinder->setObjectName(QStringLiteral("viewFinder"));
        viewFinder->setMinimumSize(QSize(150, 0));

        verticalLayout->addWidget(viewFinder);

        splitter->addWidget(groupBox);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        LabCapturedImage = new QLabel(groupBox_3);
        LabCapturedImage->setObjectName(QStringLiteral("LabCapturedImage"));
        LabCapturedImage->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LabCapturedImage);

        splitter->addWidget(groupBox_3);

        verticalLayout_3->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actStartCamera);
        mainToolBar->addAction(actStopCamera);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCapture);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actVideoRecord);
        mainToolBar->addAction(actVideoStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Camera\346\213\215\347\205\247\344\270\216\345\275\225\345\203\217", Q_NULLPTR));
        actStartCamera->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStartCamera->setToolTip(QApplication::translate("MainWindow", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actStopCamera->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStopCamera->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actVideoRecord->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\275\225\345\203\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actVideoRecord->setToolTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\275\225\345\203\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCapture->setText(QApplication::translate("MainWindow", "\346\212\223\345\233\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCapture->setToolTip(QApplication::translate("MainWindow", "\346\212\223\345\233\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actVideoStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\345\275\225\345\203\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actVideoStop->setToolTip(QApplication::translate("MainWindow", "\345\201\234\346\255\242\345\275\225\345\203\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\345\217\202\346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\350\256\276\345\244\207", Q_NULLPTR));
        chkMute->setText(QApplication::translate("MainWindow", "\345\275\225\345\203\217\346\227\266\351\235\231\351\237\263", Q_NULLPTR));
        btnVideoFile->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
        editOutputFile->setText(QString());
        LabDuration->setText(QApplication::translate("MainWindow", "\345\275\225\345\210\266\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        checkStillImage->setText(QApplication::translate("MainWindow", "\346\224\257\346\214\201\346\212\223\345\233\276", Q_NULLPTR));
        checkVideo->setText(QApplication::translate("MainWindow", "\346\224\257\346\214\201\345\275\225\345\203\217", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\351\242\204\350\247\210", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\212\223\345\217\226\345\233\276\347\211\207", Q_NULLPTR));
        LabCapturedImage->setText(QApplication::translate("MainWindow", "\346\212\223\345\217\226\347\232\204\345\233\276\347\211\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
