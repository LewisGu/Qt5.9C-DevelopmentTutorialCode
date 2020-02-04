/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actDeviceTest;
    QAction *actStart;
    QAction *actStop;
    QAction *actQuit;
    QWidget *centralWidget;
    QSplitter *splitter;
    QGroupBox *groupBoxDevice;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboDevices;
    QFrame *line;
    QGridLayout *gridLayout;
    QLabel *actualCodecLabel;
    QComboBox *comboCodec;
    QLabel *actualFreqLabel;
    QComboBox *comboSampleRate;
    QLabel *actualChannelLabel;
    QComboBox *comboChannels;
    QLabel *actualSampleTypeLabel;
    QComboBox *comboSampleTypes;
    QLabel *actualSampleSizeLabel;
    QComboBox *comboSampleSizes;
    QLabel *actualEndianLabel;
    QComboBox *comboByteOrder;
    QFrame *line_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QChartView *chartView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LabBufferSize;
    QSpacerItem *horizontalSpacer;
    QLabel *LabBlockSize;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(851, 463);
        actDeviceTest = new QAction(MainWindow);
        actDeviceTest->setObjectName(QString::fromUtf8("actDeviceTest"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/22.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actDeviceTest->setIcon(icon);
        actStart = new QAction(MainWindow);
        actStart->setObjectName(QString::fromUtf8("actStart"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/626.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actStart->setIcon(icon1);
        actStop = new QAction(MainWindow);
        actStop->setObjectName(QString::fromUtf8("actStop"));
        actStop->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/624.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actStop->setIcon(icon2);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(9, 9, 831, 391));
        splitter->setOrientation(Qt::Horizontal);
        groupBoxDevice = new QGroupBox(splitter);
        groupBoxDevice->setObjectName(QString::fromUtf8("groupBoxDevice"));
        groupBoxDevice->setMaximumSize(QSize(300, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBoxDevice);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBoxDevice);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(label);

        comboDevices = new QComboBox(groupBoxDevice);
        comboDevices->setObjectName(QString::fromUtf8("comboDevices"));

        horizontalLayout->addWidget(comboDevices);


        verticalLayout_2->addLayout(horizontalLayout);

        line = new QFrame(groupBoxDevice);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        actualCodecLabel = new QLabel(groupBoxDevice);
        actualCodecLabel->setObjectName(QString::fromUtf8("actualCodecLabel"));

        gridLayout->addWidget(actualCodecLabel, 0, 0, 1, 1);

        comboCodec = new QComboBox(groupBoxDevice);
        comboCodec->setObjectName(QString::fromUtf8("comboCodec"));

        gridLayout->addWidget(comboCodec, 0, 1, 1, 1);

        actualFreqLabel = new QLabel(groupBoxDevice);
        actualFreqLabel->setObjectName(QString::fromUtf8("actualFreqLabel"));

        gridLayout->addWidget(actualFreqLabel, 1, 0, 1, 1);

        comboSampleRate = new QComboBox(groupBoxDevice);
        comboSampleRate->setObjectName(QString::fromUtf8("comboSampleRate"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboSampleRate->sizePolicy().hasHeightForWidth());
        comboSampleRate->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboSampleRate, 1, 1, 1, 1);

        actualChannelLabel = new QLabel(groupBoxDevice);
        actualChannelLabel->setObjectName(QString::fromUtf8("actualChannelLabel"));

        gridLayout->addWidget(actualChannelLabel, 2, 0, 1, 1);

        comboChannels = new QComboBox(groupBoxDevice);
        comboChannels->setObjectName(QString::fromUtf8("comboChannels"));

        gridLayout->addWidget(comboChannels, 2, 1, 1, 1);

        actualSampleTypeLabel = new QLabel(groupBoxDevice);
        actualSampleTypeLabel->setObjectName(QString::fromUtf8("actualSampleTypeLabel"));

        gridLayout->addWidget(actualSampleTypeLabel, 3, 0, 1, 1);

        comboSampleTypes = new QComboBox(groupBoxDevice);
        comboSampleTypes->setObjectName(QString::fromUtf8("comboSampleTypes"));

        gridLayout->addWidget(comboSampleTypes, 3, 1, 1, 1);

        actualSampleSizeLabel = new QLabel(groupBoxDevice);
        actualSampleSizeLabel->setObjectName(QString::fromUtf8("actualSampleSizeLabel"));

        gridLayout->addWidget(actualSampleSizeLabel, 4, 0, 1, 1);

        comboSampleSizes = new QComboBox(groupBoxDevice);
        comboSampleSizes->setObjectName(QString::fromUtf8("comboSampleSizes"));

        gridLayout->addWidget(comboSampleSizes, 4, 1, 1, 1);

        actualEndianLabel = new QLabel(groupBoxDevice);
        actualEndianLabel->setObjectName(QString::fromUtf8("actualEndianLabel"));

        gridLayout->addWidget(actualEndianLabel, 5, 0, 1, 1);

        comboByteOrder = new QComboBox(groupBoxDevice);
        comboByteOrder->setObjectName(QString::fromUtf8("comboByteOrder"));

        gridLayout->addWidget(comboByteOrder, 5, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        line_2 = new QFrame(groupBoxDevice);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        label_2 = new QLabel(groupBoxDevice);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        splitter->addWidget(groupBoxDevice);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        chartView = new QChartView(groupBox_2);
        chartView->setObjectName(QString::fromUtf8("chartView"));

        verticalLayout->addWidget(chartView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        LabBufferSize = new QLabel(groupBox_2);
        LabBufferSize->setObjectName(QString::fromUtf8("LabBufferSize"));
        LabBufferSize->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(LabBufferSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        LabBlockSize = new QLabel(groupBox_2);
        LabBlockSize->setObjectName(QString::fromUtf8("LabBlockSize"));
        LabBlockSize->setMinimumSize(QSize(190, 0));

        horizontalLayout_2->addWidget(LabBlockSize);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter->addWidget(groupBox_2);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actDeviceTest);
        mainToolBar->addAction(actStart);
        mainToolBar->addAction(actStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QAudioInput\350\277\233\350\241\214\351\237\263\351\242\221\350\276\223\345\205\245", nullptr));
        actDeviceTest->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\351\237\263\351\242\221\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actDeviceTest->setToolTip(QApplication::translate("MainWindow", "\346\265\213\350\257\225\351\237\263\351\242\221\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        actStart->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
#ifndef QT_NO_TOOLTIP
        actStart->setToolTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
#endif // QT_NO_TOOLTIP
        actStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
#ifndef QT_NO_TOOLTIP
        actStop->setToolTip(QApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        groupBoxDevice->setTitle(QApplication::translate("MainWindow", "\346\224\257\346\214\201\347\232\204\351\237\263\351\242\221\350\276\223\345\205\245\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("MainWindow", "\351\237\263\351\242\221\350\276\223\345\205\245\350\256\276\345\244\207", nullptr));
        actualCodecLabel->setText(QApplication::translate("MainWindow", "codec", nullptr));
        actualFreqLabel->setText(QApplication::translate("MainWindow", "Frequency (Hz)", nullptr));
        actualChannelLabel->setText(QApplication::translate("MainWindow", "Channels", nullptr));
        actualSampleTypeLabel->setText(QApplication::translate("MainWindow", "SampleType", nullptr));
        actualSampleSizeLabel->setText(QApplication::translate("MainWindow", "Sample size (bits)", nullptr));
        actualEndianLabel->setText(QApplication::translate("MainWindow", "Endianness", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\344\270\272\344\272\206\345\244\204\347\220\206\346\226\271\344\276\277\357\274\214\346\234\254\347\250\213\345\272\217\345\233\272\345\256\232\351\207\207\346\240\267\346\226\271\345\274\217\357\274\232</p><p>8000Hz, 1 \351\200\232\351\201\223\357\274\214audio/pcm</p><p>8bits,UnSignedInt,LittleEndian</p></body></html>", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\256\236\346\227\266\350\276\223\345\205\245\351\237\263\351\242\221\346\263\242\345\275\242", nullptr));
        LabBufferSize->setText(QApplication::translate("MainWindow", "QAudioInput::bufferSize()=", nullptr));
        LabBlockSize->setText(QApplication::translate("MainWindow", "IODevice\346\225\260\346\215\256\345\235\227\345\255\227\350\212\202\346\225\260=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
