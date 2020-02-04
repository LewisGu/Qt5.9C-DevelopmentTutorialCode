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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actTongJi;
    QAction *actQuit;
    QAction *actGenData;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QTableView *tableView;
    QTreeWidget *treeWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnBuildBarChart;
    QSpacerItem *horizontalSpacer_2;
    QChartView *chartViewBar;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *cBoxCourse;
    QPushButton *btnDrawPieChart;
    QLabel *label_2;
    QDoubleSpinBox *spinHoleSize;
    QLabel *label_3;
    QDoubleSpinBox *spinPieSize;
    QLabel *label_4;
    QComboBox *cBoxTheme;
    QSpacerItem *horizontalSpacer;
    QChartView *chartViewPie;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnBuildStackedBar;
    QSpacerItem *horizontalSpacer_3;
    QChartView *chartViewStackedBar;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnPercentBar;
    QSpacerItem *horizontalSpacer_4;
    QChartView *chartViewPercentBar;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnScatter;
    QSpacerItem *horizontalSpacer_5;
    QChartView *chartViewScatter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(922, 577);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        actTongJi = new QAction(MainWindow);
        actTongJi->setObjectName(QStringLiteral("actTongJi"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/216.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actTongJi->setIcon(icon);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actGenData = new QAction(MainWindow);
        actGenData->setObjectName(QStringLiteral("actGenData"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/828.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actGenData->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        tableView = new QTableView(splitter_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setFont(font);
        splitter_2->addWidget(tableView);
        tableView->horizontalHeader()->setDefaultSectionSize(80);
        treeWidget = new QTreeWidget(splitter_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(4, Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(3, Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem2->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem2->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem3->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem4->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem4->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem5->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem6->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem7->setTextAlignment(0, Qt::AlignCenter);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem8->setTextAlignment(0, Qt::AlignCenter);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMaximumSize(QSize(16777215, 300));
        treeWidget->setFont(font);
        treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidget->setAlternatingRowColors(true);
        splitter_2->addWidget(treeWidget);
        treeWidget->header()->setDefaultSectionSize(90);
        treeWidget->header()->setMinimumSectionSize(20);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(splitter_2);

        splitter->addWidget(groupBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 2, -1, 2);
        btnBuildBarChart = new QPushButton(groupBox_2);
        btnBuildBarChart->setObjectName(QStringLiteral("btnBuildBarChart"));

        horizontalLayout->addWidget(btnBuildBarChart);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(groupBox_2);

        chartViewBar = new QChartView(tab);
        chartViewBar->setObjectName(QStringLiteral("chartViewBar"));

        verticalLayout_3->addWidget(chartViewBar);

        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 2, -1, 2);
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        cBoxCourse = new QComboBox(groupBox_3);
        cBoxCourse->setObjectName(QStringLiteral("cBoxCourse"));

        horizontalLayout_2->addWidget(cBoxCourse);

        btnDrawPieChart = new QPushButton(groupBox_3);
        btnDrawPieChart->setObjectName(QStringLiteral("btnDrawPieChart"));

        horizontalLayout_2->addWidget(btnDrawPieChart);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinHoleSize = new QDoubleSpinBox(groupBox_3);
        spinHoleSize->setObjectName(QStringLiteral("spinHoleSize"));
        spinHoleSize->setDecimals(2);
        spinHoleSize->setMaximum(1);
        spinHoleSize->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinHoleSize);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        spinPieSize = new QDoubleSpinBox(groupBox_3);
        spinPieSize->setObjectName(QStringLiteral("spinPieSize"));
        spinPieSize->setMaximum(1);
        spinPieSize->setSingleStep(0.1);
        spinPieSize->setValue(0.7);

        horizontalLayout_2->addWidget(spinPieSize);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        cBoxTheme = new QComboBox(groupBox_3);
        cBoxTheme->setObjectName(QStringLiteral("cBoxTheme"));

        horizontalLayout_2->addWidget(cBoxTheme);

        horizontalSpacer = new QSpacerItem(113, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox_3);

        chartViewPie = new QChartView(tab_2);
        chartViewPie->setObjectName(QStringLiteral("chartViewPie"));

        verticalLayout_4->addWidget(chartViewPie);

        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/43.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 2, -1, 2);
        btnBuildStackedBar = new QPushButton(groupBox_4);
        btnBuildStackedBar->setObjectName(QStringLiteral("btnBuildStackedBar"));

        horizontalLayout_3->addWidget(btnBuildStackedBar);

        horizontalSpacer_3 = new QSpacerItem(587, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_5->addWidget(groupBox_4);

        chartViewStackedBar = new QChartView(tab_3);
        chartViewStackedBar->setObjectName(QStringLiteral("chartViewStackedBar"));

        verticalLayout_5->addWidget(chartViewStackedBar);

        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/281.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon5, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_6 = new QVBoxLayout(tab_5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 2, -1, 2);
        btnPercentBar = new QPushButton(groupBox_5);
        btnPercentBar->setObjectName(QStringLiteral("btnPercentBar"));

        horizontalLayout_4->addWidget(btnPercentBar);

        horizontalSpacer_4 = new QSpacerItem(587, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_6->addWidget(groupBox_5);

        chartViewPercentBar = new QChartView(tab_5);
        chartViewPercentBar->setObjectName(QStringLiteral("chartViewPercentBar"));

        verticalLayout_6->addWidget(chartViewPercentBar);

        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/f4.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_5, icon6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_7 = new QVBoxLayout(tab_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_6);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 2, -1, 2);
        btnScatter = new QPushButton(groupBox_6);
        btnScatter->setObjectName(QStringLiteral("btnScatter"));

        horizontalLayout_5->addWidget(btnScatter);

        horizontalSpacer_5 = new QSpacerItem(646, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_7->addWidget(groupBox_6);

        chartViewScatter = new QChartView(tab_4);
        chartViewScatter->setObjectName(QStringLiteral("chartViewScatter"));

        verticalLayout_7->addWidget(chartViewScatter);

        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/017.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon7, QString());
        splitter->addWidget(tabWidget);

        verticalLayout_2->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 922, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actGenData);
        mainToolBar->addAction(actTongJi);
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\220\204\347\247\215\345\270\270\350\247\201\345\233\276\350\241\250", Q_NULLPTR));
        actTongJi->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\273\237\350\256\241", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTongJi->setToolTip(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\273\237\350\256\241", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actGenData->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actGenData->setToolTip(QApplication::translate("MainWindow", "\351\232\217\346\234\272\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("MainWindow", "\345\271\263\345\235\207\345\210\206", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "\350\213\261\350\257\255", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "\350\257\255\346\226\207", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "\346\225\260\345\255\246", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\345\210\206\346\225\260\346\256\265", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "60\345\210\206\344\273\245\344\270\213", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "60-69\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "70-79\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "80-89\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "90\345\210\206\344\273\245\344\270\212", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "\345\271\263\345\235\207\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "\346\234\200\351\253\230\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "\346\234\200\344\275\216\345\210\206", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        groupBox_2->setTitle(QString());
        btnBuildBarChart->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "BarChart", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\345\210\206\346\236\220\346\225\260\346\215\256", Q_NULLPTR));
        cBoxCourse->clear();
        cBoxCourse->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\225\260\345\255\246", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\257\255\346\226\207", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\213\261\350\257\255", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\271\263\345\235\207\345\210\206", Q_NULLPTR)
        );
        btnDrawPieChart->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\351\245\274\345\233\276", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "HoleSize", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PieSize", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\344\270\273\351\242\230", Q_NULLPTR));
        cBoxTheme->clear();
        cBoxTheme->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Light", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BlueCerulean", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Dark", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BrownSand", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BlueNcs", Q_NULLPTR)
         << QApplication::translate("MainWindow", "HighContrast", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BlueIcy", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Qt", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "PieChart", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        btnBuildStackedBar->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\240\206\345\217\240\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "StackedBar", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        btnPercentBar->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\231\276\345\210\206\346\257\224\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "PercentBar", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        btnScatter->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\233\276\350\241\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "ScatterChart", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
