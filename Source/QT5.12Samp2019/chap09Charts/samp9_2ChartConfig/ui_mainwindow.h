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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actDraw;
    QAction *actQuit;
    QAction *actZoomIn;
    QAction *actZoomOut;
    QAction *actZoomReset;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *editTitle;
    QPushButton *btnSetTitle;
    QPushButton *btnSetTitleFont;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_9;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QCheckBox *chkLegendVisible;
    QCheckBox *chkBoxLegendBackground;
    QPushButton *btnLegendFont;
    QPushButton *btnLegendlabelColor;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinMarginLeft;
    QLabel *label_2;
    QSpinBox *spinMarginRight;
    QLabel *label_3;
    QSpinBox *spinMarginTop;
    QLabel *label_4;
    QSpinBox *spinMarginBottom;
    QPushButton *btnSetMargin;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_10;
    QLabel *label_6;
    QComboBox *cBoxAnimation;
    QLabel *label_8;
    QComboBox *cBoxTheme;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_12;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioSeries0;
    QRadioButton *radioSeries1;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_3;
    QPushButton *btnSeriesName;
    QLineEdit *editSeriesName;
    QCheckBox *chkSeriesVisible;
    QCheckBox *chkPointVisible;
    QPushButton *btnSeriesColor;
    QPushButton *btnSeriesPen;
    QLabel *label_5;
    QSlider *sliderSeriesOpacity;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *chkPointLabelVisible;
    QPushButton *btnSeriesLabColor;
    QPushButton *btnSeriesLabFont;
    QGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioSeriesLabFormat0;
    QRadioButton *radioSeriesLabFormat1;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioX;
    QRadioButton *radioY;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QDoubleSpinBox *spinAxisMin;
    QLabel *label_11;
    QDoubleSpinBox *spinAxisMax;
    QCheckBox *chkBoxVisible;
    QPushButton *btnSetAxisRange;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QLineEdit *editAxisTitle;
    QPushButton *btnAxisSetTitleFont;
    QPushButton *btnAxisSetTitle;
    QCheckBox *chkBoxAxisTitle;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton;
    QLineEdit *editAxisLabelFormat;
    QPushButton *btnAxisLabelColor;
    QPushButton *btnAxisLabelFont;
    QCheckBox *chkBoxLabelsVisible;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkGridLineVisible;
    QPushButton *btnGridLineColor;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_5;
    QPushButton *btnAxisLinePenColor;
    QSpinBox *spinTickCount;
    QCheckBox *chkAxisLineVisible;
    QLabel *label_9;
    QPushButton *btnAxisLinePen;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QLabel *label_10;
    QSpinBox *spinMinorTickCount;
    QCheckBox *chkMinorTickVisible;
    QPushButton *btnMinorColor;
    QPushButton *btnMinorPen;
    QChartView *chartView;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(794, 522);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(10);
        MainWindow->setFont(font);
        actDraw = new QAction(MainWindow);
        actDraw->setObjectName(QString::fromUtf8("actDraw"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/828.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDraw->setIcon(icon);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName(QString::fromUtf8("actZoomIn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/418.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomIn->setIcon(icon2);
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName(QString::fromUtf8("actZoomOut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/416.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomOut->setIcon(icon3);
        actZoomReset = new QAction(MainWindow);
        actZoomReset->setObjectName(QString::fromUtf8("actZoomReset"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/414.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomReset->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(260, 0));
        toolBox->setMaximumSize(QSize(400, 16777215));
        toolBox->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 400, 388));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, 3, 3, 3);
        scrollArea_2 = new QScrollArea(page);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 375, 485));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editTitle = new QLineEdit(groupBox);
        editTitle->setObjectName(QString::fromUtf8("editTitle"));

        gridLayout_2->addWidget(editTitle, 0, 0, 1, 1);

        btnSetTitle = new QPushButton(groupBox);
        btnSetTitle->setObjectName(QString::fromUtf8("btnSetTitle"));

        gridLayout_2->addWidget(btnSetTitle, 0, 1, 1, 1);

        btnSetTitleFont = new QPushButton(groupBox);
        btnSetTitleFont->setObjectName(QString::fromUtf8("btnSetTitleFont"));

        gridLayout_2->addWidget(btnSetTitleFont, 1, 0, 1, 2);


        verticalLayout_4->addWidget(groupBox);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_9 = new QGridLayout(groupBox_4);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        radioButton = new QRadioButton(groupBox_4);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        gridLayout_9->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_4);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_9->addWidget(radioButton_2, 0, 1, 1, 1);

        radioButton_3 = new QRadioButton(groupBox_4);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_9->addWidget(radioButton_3, 1, 0, 1, 1);

        radioButton_4 = new QRadioButton(groupBox_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout_9->addWidget(radioButton_4, 1, 1, 1, 1);

        chkLegendVisible = new QCheckBox(groupBox_4);
        chkLegendVisible->setObjectName(QString::fromUtf8("chkLegendVisible"));
        chkLegendVisible->setChecked(true);

        gridLayout_9->addWidget(chkLegendVisible, 2, 0, 1, 1);

        chkBoxLegendBackground = new QCheckBox(groupBox_4);
        chkBoxLegendBackground->setObjectName(QString::fromUtf8("chkBoxLegendBackground"));

        gridLayout_9->addWidget(chkBoxLegendBackground, 2, 1, 1, 1);

        btnLegendFont = new QPushButton(groupBox_4);
        btnLegendFont->setObjectName(QString::fromUtf8("btnLegendFont"));

        gridLayout_9->addWidget(btnLegendFont, 3, 0, 1, 1);

        btnLegendlabelColor = new QPushButton(groupBox_4);
        btnLegendlabelColor->setObjectName(QString::fromUtf8("btnLegendlabelColor"));

        gridLayout_9->addWidget(btnLegendlabelColor, 3, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinMarginLeft = new QSpinBox(groupBox_2);
        spinMarginLeft->setObjectName(QString::fromUtf8("spinMarginLeft"));
        spinMarginLeft->setMinimum(10);
        spinMarginLeft->setMaximum(500);

        gridLayout->addWidget(spinMarginLeft, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinMarginRight = new QSpinBox(groupBox_2);
        spinMarginRight->setObjectName(QString::fromUtf8("spinMarginRight"));
        spinMarginRight->setMinimum(10);
        spinMarginRight->setMaximum(500);

        gridLayout->addWidget(spinMarginRight, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinMarginTop = new QSpinBox(groupBox_2);
        spinMarginTop->setObjectName(QString::fromUtf8("spinMarginTop"));
        spinMarginTop->setMinimum(10);
        spinMarginTop->setMaximum(500);

        gridLayout->addWidget(spinMarginTop, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinMarginBottom = new QSpinBox(groupBox_2);
        spinMarginBottom->setObjectName(QString::fromUtf8("spinMarginBottom"));
        spinMarginBottom->setMinimum(10);
        spinMarginBottom->setMaximum(500);

        gridLayout->addWidget(spinMarginBottom, 3, 1, 1, 1);

        btnSetMargin = new QPushButton(groupBox_2);
        btnSetMargin->setObjectName(QString::fromUtf8("btnSetMargin"));

        gridLayout->addWidget(btnSetMargin, 4, 0, 1, 2);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_15 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        gridLayout_10 = new QGridLayout(groupBox_15);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_6 = new QLabel(groupBox_15);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_6, 0, 0, 1, 1);

        cBoxAnimation = new QComboBox(groupBox_15);
        cBoxAnimation->addItem(QString());
        cBoxAnimation->addItem(QString());
        cBoxAnimation->addItem(QString());
        cBoxAnimation->addItem(QString());
        cBoxAnimation->setObjectName(QString::fromUtf8("cBoxAnimation"));

        gridLayout_10->addWidget(cBoxAnimation, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_15);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_8, 1, 0, 1, 1);

        cBoxTheme = new QComboBox(groupBox_15);
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->setObjectName(QString::fromUtf8("cBoxTheme"));

        gridLayout_10->addWidget(cBoxTheme, 1, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_15);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_5->addWidget(scrollArea_2);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon5, QString::fromUtf8("\345\233\276\350\241\250\350\256\276\347\275\256"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 400, 388));
        verticalLayout_10 = new QVBoxLayout(page_2);
        verticalLayout_10->setSpacing(3);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(3, 3, 3, 3);
        scrollArea_3 = new QScrollArea(page_2);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 375, 400));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_3 = new QHBoxLayout(groupBox_12);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioSeries0 = new QRadioButton(groupBox_12);
        radioSeries0->setObjectName(QString::fromUtf8("radioSeries0"));
        radioSeries0->setChecked(true);

        horizontalLayout_3->addWidget(radioSeries0);

        radioSeries1 = new QRadioButton(groupBox_12);
        radioSeries1->setObjectName(QString::fromUtf8("radioSeries1"));

        horizontalLayout_3->addWidget(radioSeries1);


        verticalLayout_9->addWidget(groupBox_12);

        groupBox_13 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        gridLayout_3 = new QGridLayout(groupBox_13);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btnSeriesName = new QPushButton(groupBox_13);
        btnSeriesName->setObjectName(QString::fromUtf8("btnSeriesName"));

        gridLayout_3->addWidget(btnSeriesName, 0, 0, 1, 1);

        editSeriesName = new QLineEdit(groupBox_13);
        editSeriesName->setObjectName(QString::fromUtf8("editSeriesName"));

        gridLayout_3->addWidget(editSeriesName, 0, 1, 1, 1);

        chkSeriesVisible = new QCheckBox(groupBox_13);
        chkSeriesVisible->setObjectName(QString::fromUtf8("chkSeriesVisible"));
        chkSeriesVisible->setChecked(true);

        gridLayout_3->addWidget(chkSeriesVisible, 1, 0, 1, 1);

        chkPointVisible = new QCheckBox(groupBox_13);
        chkPointVisible->setObjectName(QString::fromUtf8("chkPointVisible"));

        gridLayout_3->addWidget(chkPointVisible, 1, 1, 1, 1);

        btnSeriesColor = new QPushButton(groupBox_13);
        btnSeriesColor->setObjectName(QString::fromUtf8("btnSeriesColor"));

        gridLayout_3->addWidget(btnSeriesColor, 2, 0, 1, 1);

        btnSeriesPen = new QPushButton(groupBox_13);
        btnSeriesPen->setObjectName(QString::fromUtf8("btnSeriesPen"));

        gridLayout_3->addWidget(btnSeriesPen, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_13);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        sliderSeriesOpacity = new QSlider(groupBox_13);
        sliderSeriesOpacity->setObjectName(QString::fromUtf8("sliderSeriesOpacity"));
        sliderSeriesOpacity->setMaximum(10);
        sliderSeriesOpacity->setPageStep(2);
        sliderSeriesOpacity->setValue(10);
        sliderSeriesOpacity->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sliderSeriesOpacity, 3, 1, 1, 1);


        verticalLayout_9->addWidget(groupBox_13);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        chkPointLabelVisible = new QCheckBox(groupBox_3);
        chkPointLabelVisible->setObjectName(QString::fromUtf8("chkPointLabelVisible"));

        verticalLayout_7->addWidget(chkPointLabelVisible);

        btnSeriesLabColor = new QPushButton(groupBox_3);
        btnSeriesLabColor->setObjectName(QString::fromUtf8("btnSeriesLabColor"));

        verticalLayout_7->addWidget(btnSeriesLabColor);

        btnSeriesLabFont = new QPushButton(groupBox_3);
        btnSeriesLabFont->setObjectName(QString::fromUtf8("btnSeriesLabFont"));

        verticalLayout_7->addWidget(btnSeriesLabFont);

        groupBox_14 = new QGroupBox(groupBox_3);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        verticalLayout_6 = new QVBoxLayout(groupBox_14);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        radioSeriesLabFormat0 = new QRadioButton(groupBox_14);
        radioSeriesLabFormat0->setObjectName(QString::fromUtf8("radioSeriesLabFormat0"));
        radioSeriesLabFormat0->setChecked(true);

        verticalLayout_6->addWidget(radioSeriesLabFormat0);

        radioSeriesLabFormat1 = new QRadioButton(groupBox_14);
        radioSeriesLabFormat1->setObjectName(QString::fromUtf8("radioSeriesLabFormat1"));

        verticalLayout_6->addWidget(radioSeriesLabFormat1);


        verticalLayout_7->addWidget(groupBox_14);


        verticalLayout_9->addWidget(groupBox_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_10->addWidget(scrollArea_3);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/dis3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_2, icon6, QString::fromUtf8("\346\233\262\347\272\277\350\256\276\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 400, 388));
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        scrollArea = new QScrollArea(page_3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -149, 375, 774));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_7);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioX = new QRadioButton(groupBox_7);
        radioX->setObjectName(QString::fromUtf8("radioX"));
        radioX->setChecked(true);

        horizontalLayout_2->addWidget(radioX);

        radioY = new QRadioButton(groupBox_7);
        radioY->setObjectName(QString::fromUtf8("radioY"));
        radioY->setChecked(false);

        horizontalLayout_2->addWidget(radioY);


        verticalLayout_2->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_4 = new QGridLayout(groupBox_8);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_7 = new QLabel(groupBox_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        spinAxisMin = new QDoubleSpinBox(groupBox_8);
        spinAxisMin->setObjectName(QString::fromUtf8("spinAxisMin"));
        spinAxisMin->setMinimum(-1000.000000000000000);
        spinAxisMin->setMaximum(1000.000000000000000);

        gridLayout_4->addWidget(spinAxisMin, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 1, 0, 1, 1);

        spinAxisMax = new QDoubleSpinBox(groupBox_8);
        spinAxisMax->setObjectName(QString::fromUtf8("spinAxisMax"));
        spinAxisMax->setMinimum(-1000.000000000000000);
        spinAxisMax->setMaximum(1000.000000000000000);
        spinAxisMax->setValue(10.000000000000000);

        gridLayout_4->addWidget(spinAxisMax, 1, 1, 1, 1);

        chkBoxVisible = new QCheckBox(groupBox_8);
        chkBoxVisible->setObjectName(QString::fromUtf8("chkBoxVisible"));
        chkBoxVisible->setChecked(true);

        gridLayout_4->addWidget(chkBoxVisible, 2, 0, 1, 2);

        btnSetAxisRange = new QPushButton(groupBox_8);
        btnSetAxisRange->setObjectName(QString::fromUtf8("btnSetAxisRange"));

        gridLayout_4->addWidget(btnSetAxisRange, 3, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_8);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        editAxisTitle = new QLineEdit(groupBox_6);
        editAxisTitle->setObjectName(QString::fromUtf8("editAxisTitle"));

        gridLayout_6->addWidget(editAxisTitle, 0, 1, 1, 2);

        btnAxisSetTitleFont = new QPushButton(groupBox_6);
        btnAxisSetTitleFont->setObjectName(QString::fromUtf8("btnAxisSetTitleFont"));

        gridLayout_6->addWidget(btnAxisSetTitleFont, 1, 2, 1, 1);

        btnAxisSetTitle = new QPushButton(groupBox_6);
        btnAxisSetTitle->setObjectName(QString::fromUtf8("btnAxisSetTitle"));

        gridLayout_6->addWidget(btnAxisSetTitle, 0, 0, 1, 1);

        chkBoxAxisTitle = new QCheckBox(groupBox_6);
        chkBoxAxisTitle->setObjectName(QString::fromUtf8("chkBoxAxisTitle"));
        chkBoxAxisTitle->setChecked(true);

        gridLayout_6->addWidget(chkBoxAxisTitle, 1, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_6);

        groupBox_10 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_7 = new QGridLayout(groupBox_10);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pushButton = new QPushButton(groupBox_10);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_7->addWidget(pushButton, 0, 0, 1, 1);

        editAxisLabelFormat = new QLineEdit(groupBox_10);
        editAxisLabelFormat->setObjectName(QString::fromUtf8("editAxisLabelFormat"));

        gridLayout_7->addWidget(editAxisLabelFormat, 0, 1, 1, 1);

        btnAxisLabelColor = new QPushButton(groupBox_10);
        btnAxisLabelColor->setObjectName(QString::fromUtf8("btnAxisLabelColor"));

        gridLayout_7->addWidget(btnAxisLabelColor, 1, 0, 1, 1);

        btnAxisLabelFont = new QPushButton(groupBox_10);
        btnAxisLabelFont->setObjectName(QString::fromUtf8("btnAxisLabelFont"));

        gridLayout_7->addWidget(btnAxisLabelFont, 1, 1, 1, 1);

        chkBoxLabelsVisible = new QCheckBox(groupBox_10);
        chkBoxLabelsVisible->setObjectName(QString::fromUtf8("chkBoxLabelsVisible"));
        chkBoxLabelsVisible->setChecked(true);

        gridLayout_7->addWidget(chkBoxLabelsVisible, 2, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_10);

        groupBox_11 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        verticalLayout = new QVBoxLayout(groupBox_11);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chkGridLineVisible = new QCheckBox(groupBox_11);
        chkGridLineVisible->setObjectName(QString::fromUtf8("chkGridLineVisible"));
        chkGridLineVisible->setChecked(true);

        verticalLayout->addWidget(chkGridLineVisible);

        btnGridLineColor = new QPushButton(groupBox_11);
        btnGridLineColor->setObjectName(QString::fromUtf8("btnGridLineColor"));

        verticalLayout->addWidget(btnGridLineColor);

        pushButton_10 = new QPushButton(groupBox_11);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);


        verticalLayout_2->addWidget(groupBox_11);

        groupBox_9 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_5 = new QGridLayout(groupBox_9);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        btnAxisLinePenColor = new QPushButton(groupBox_9);
        btnAxisLinePenColor->setObjectName(QString::fromUtf8("btnAxisLinePenColor"));

        gridLayout_5->addWidget(btnAxisLinePenColor, 3, 0, 1, 2);

        spinTickCount = new QSpinBox(groupBox_9);
        spinTickCount->setObjectName(QString::fromUtf8("spinTickCount"));
        spinTickCount->setMinimum(1);
        spinTickCount->setMaximum(1000);
        spinTickCount->setValue(10);

        gridLayout_5->addWidget(spinTickCount, 0, 1, 1, 1);

        chkAxisLineVisible = new QCheckBox(groupBox_9);
        chkAxisLineVisible->setObjectName(QString::fromUtf8("chkAxisLineVisible"));
        chkAxisLineVisible->setChecked(true);

        gridLayout_5->addWidget(chkAxisLineVisible, 1, 0, 1, 2);

        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        btnAxisLinePen = new QPushButton(groupBox_9);
        btnAxisLinePen->setObjectName(QString::fromUtf8("btnAxisLinePen"));

        gridLayout_5->addWidget(btnAxisLinePen, 2, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_9);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);

        spinMinorTickCount = new QSpinBox(groupBox_5);
        spinMinorTickCount->setObjectName(QString::fromUtf8("spinMinorTickCount"));
        spinMinorTickCount->setValue(4);

        gridLayout_8->addWidget(spinMinorTickCount, 0, 1, 1, 1);

        chkMinorTickVisible = new QCheckBox(groupBox_5);
        chkMinorTickVisible->setObjectName(QString::fromUtf8("chkMinorTickVisible"));

        gridLayout_8->addWidget(chkMinorTickVisible, 1, 0, 1, 2);

        btnMinorColor = new QPushButton(groupBox_5);
        btnMinorColor->setObjectName(QString::fromUtf8("btnMinorColor"));

        gridLayout_8->addWidget(btnMinorColor, 2, 0, 1, 2);

        btnMinorPen = new QPushButton(groupBox_5);
        btnMinorPen->setObjectName(QString::fromUtf8("btnMinorPen"));

        gridLayout_8->addWidget(btnMinorPen, 3, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_5);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/39.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_3, icon7, QString::fromUtf8("\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256"));
        splitter->addWidget(toolBox);
        chartView = new QChartView(splitter);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        splitter->addWidget(chartView);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actDraw);
        mainToolBar->addAction(actZoomIn);
        mainToolBar->addAction(actZoomOut);
        mainToolBar->addAction(actZoomReset);
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QChart\347\273\230\345\233\276\350\257\246\347\273\206\345\212\237\350\203\275", nullptr));
        actDraw->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\273\230\345\233\276", nullptr));
#ifndef QT_NO_TOOLTIP
        actDraw->setToolTip(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\273\230\345\233\276", nullptr));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        actZoomIn->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#ifndef QT_NO_TOOLTIP
        actZoomIn->setToolTip(QApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_NO_TOOLTIP
        actZoomOut->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#ifndef QT_NO_TOOLTIP
        actZoomOut->setToolTip(QApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_NO_TOOLTIP
        actZoomReset->setText(QApplication::translate("MainWindow", "\345\216\237\345\247\213\345\244\247\345\260\217", nullptr));
#ifndef QT_NO_TOOLTIP
        actZoomReset->setToolTip(QApplication::translate("MainWindow", "\350\277\230\345\216\237\344\270\272\345\216\237\345\247\213\345\244\247\345\260\217", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\240\207\351\242\230", nullptr));
#ifndef QT_NO_TOOLTIP
        btnSetTitle->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\351\242\230\346\226\207\345\255\227", nullptr));
#endif // QT_NO_TOOLTIP
        btnSetTitle->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        btnSetTitleFont->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\351\242\230\345\255\227\344\275\223", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\345\233\276\344\276\213", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\344\270\212\346\226\271", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\344\270\213\346\226\271", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "\345\267\246\344\276\247", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "\345\217\263\344\276\247", nullptr));
        chkLegendVisible->setText(QApplication::translate("MainWindow", "\345\233\276\344\276\213\345\217\257\350\247\201", nullptr));
        chkBoxLegendBackground->setText(QApplication::translate("MainWindow", "\350\203\214\346\231\257\345\217\257\350\247\201", nullptr));
        btnLegendFont->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
        btnLegendlabelColor->setText(QApplication::translate("MainWindow", "\346\240\207\347\255\276\351\242\234\350\211\262", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\276\271\350\267\235", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\267\246\350\276\271\350\267\235", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\217\263\350\276\271\350\267\235", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\212\350\276\271\350\267\235", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\344\270\213\350\276\271\350\267\235", nullptr));
        btnSetMargin->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\276\271\350\267\235", nullptr));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "\345\212\250\347\224\273\346\225\210\346\236\234", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\212\250\347\224\273\346\225\210\346\236\234", nullptr));
        cBoxAnimation->setItemText(0, QApplication::translate("MainWindow", "NoAnimation", nullptr));
        cBoxAnimation->setItemText(1, QApplication::translate("MainWindow", "GridAxisAnimations", nullptr));
        cBoxAnimation->setItemText(2, QApplication::translate("MainWindow", "SeriesAnimations", nullptr));
        cBoxAnimation->setItemText(3, QApplication::translate("MainWindow", "AllAnimations", nullptr));

        label_8->setText(QApplication::translate("MainWindow", "\344\270\273  \351\242\230", nullptr));
        cBoxTheme->setItemText(0, QApplication::translate("MainWindow", "Light", nullptr));
        cBoxTheme->setItemText(1, QApplication::translate("MainWindow", "BlueCerulean", nullptr));
        cBoxTheme->setItemText(2, QApplication::translate("MainWindow", "Dark", nullptr));
        cBoxTheme->setItemText(3, QApplication::translate("MainWindow", "BrownSand", nullptr));
        cBoxTheme->setItemText(4, QApplication::translate("MainWindow", "BlueNcs", nullptr));
        cBoxTheme->setItemText(5, QApplication::translate("MainWindow", "HighContrast", nullptr));
        cBoxTheme->setItemText(6, QApplication::translate("MainWindow", "BlueIcy", nullptr));
        cBoxTheme->setItemText(7, QApplication::translate("MainWindow", "Qt", nullptr));

        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\345\233\276\350\241\250\350\256\276\347\275\256", nullptr));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\223\215\344\275\234\345\272\217\345\210\227", nullptr));
        radioSeries0->setText(QApplication::translate("MainWindow", "Sin\346\233\262\347\272\277", nullptr));
        radioSeries1->setText(QApplication::translate("MainWindow", "Cos\346\233\262\347\272\277", nullptr));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "\346\233\262\347\272\277\345\244\226\350\247\202", nullptr));
        btnSeriesName->setText(QApplication::translate("MainWindow", "\345\272\217\345\210\227\345\220\215\347\247\260", nullptr));
        editSeriesName->setText(QApplication::translate("MainWindow", "Sin\346\233\262\347\272\277", nullptr));
        chkSeriesVisible->setText(QApplication::translate("MainWindow", "\345\272\217\345\210\227\345\217\257\350\247\201", nullptr));
        chkPointVisible->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\345\217\257\350\247\201", nullptr));
        btnSeriesColor->setText(QApplication::translate("MainWindow", "\346\233\262\347\272\277\351\242\234\350\211\262", nullptr));
        btnSeriesPen->setText(QApplication::translate("MainWindow", "\346\233\262\347\272\277Pen", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\351\200\217\346\230\216\345\272\246", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\346\240\207\347\255\276", nullptr));
        chkPointLabelVisible->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\346\240\207\347\255\276\345\217\257\350\247\201", nullptr));
        btnSeriesLabColor->setText(QApplication::translate("MainWindow", "\346\240\207\347\255\276\351\242\234\350\211\262", nullptr));
        btnSeriesLabFont->setText(QApplication::translate("MainWindow", "\346\240\207\347\255\276\345\255\227\344\275\223", nullptr));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "\346\240\207\347\255\276\346\240\274\345\274\217", nullptr));
        radioSeriesLabFormat0->setText(QApplication::translate("MainWindow", "@yPoint", nullptr));
        radioSeriesLabFormat1->setText(QApplication::translate("MainWindow", "(@xPoint, @yPoint)", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\346\233\262\347\272\277\350\256\276\347\275\256", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\235\220\346\240\207\350\275\264\345\257\271\350\261\241", nullptr));
        radioX->setText(QApplication::translate("MainWindow", "X\350\275\264", nullptr));
        radioY->setText(QApplication::translate("MainWindow", "Y\350\275\264", nullptr));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\346\200\273\344\275\223", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\345\200\274", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\345\200\274", nullptr));
        chkBoxVisible->setText(QApplication::translate("MainWindow", "isVisible", nullptr));
        btnSetAxisRange->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\235\220\346\240\207\350\214\203\345\233\264", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\350\275\264\346\240\207\351\242\230", nullptr));
        editAxisTitle->setText(QApplication::translate("MainWindow", "time(secs)", nullptr));
        btnAxisSetTitleFont->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        btnAxisSetTitle->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\351\242\230", nullptr));
        chkBoxAxisTitle->setText(QApplication::translate("MainWindow", "isTitleVisible", nullptr));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\350\275\264\345\210\273\345\272\246\346\240\207\347\255\276", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\240\207\347\255\276\346\240\274\345\274\217", nullptr));
        editAxisLabelFormat->setText(QApplication::translate("MainWindow", "%.1f", nullptr));
        btnAxisLabelColor->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        btnAxisLabelFont->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        chkBoxLabelsVisible->setText(QApplication::translate("MainWindow", "labelsVisible", nullptr));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "GridLine", nullptr));
        chkGridLineVisible->setText(QApplication::translate("MainWindow", "isGridLineVisible", nullptr));
        btnGridLineColor->setText(QApplication::translate("MainWindow", "gridLineColor", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "gridLinePen", nullptr));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Axis and Ticks", nullptr));
        btnAxisLinePenColor->setText(QApplication::translate("MainWindow", "linePenColor", nullptr));
        chkAxisLineVisible->setText(QApplication::translate("MainWindow", "isLineVisible", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Tick\344\270\252\346\225\260", nullptr));
        btnAxisLinePen->setText(QApplication::translate("MainWindow", "linePen", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "MinorTick", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "MinorTick\344\270\252\346\225\260", nullptr));
        chkMinorTickVisible->setText(QApplication::translate("MainWindow", "isMinorGridLineVisible", nullptr));
        btnMinorColor->setText(QApplication::translate("MainWindow", "minorGridLineColor", nullptr));
        btnMinorPen->setText(QApplication::translate("MainWindow", "minorGridLinePen", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
