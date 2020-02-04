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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actListIni;
    QAction *actListClear;
    QAction *actListInsert;
    QAction *actListAppend;
    QAction *actListDelete;
    QAction *actSelALL;
    QAction *actSelNone;
    QAction *actSelInvs;
    QAction *actQuit;
    QAction *actSelPopMenu;
    QWidget *centralWidget;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QToolButton *tBtnListIni;
    QToolButton *tBtnListClear;
    QToolButton *tBtnListInsert;
    QToolButton *tBtnListAppend;
    QToolButton *tBtnListDelete;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editCutItemText;
    QCheckBox *chkBoxListEditable;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *tBtnSelectItem;
    QToolButton *tBtnSelALL;
    QToolButton *tBtnSelNone;
    QToolButton *tBtnSelInvs;
    QListWidget *listWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QWidget *tab_2;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(565, 332);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        actListIni = new QAction(MainWindow);
        actListIni->setObjectName(QStringLiteral("actListIni"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListIni->setIcon(icon);
        actListClear = new QAction(MainWindow);
        actListClear->setObjectName(QStringLiteral("actListClear"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icons/delete1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListClear->setIcon(icon1);
        actListInsert = new QAction(MainWindow);
        actListInsert->setObjectName(QStringLiteral("actListInsert"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icons/424.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListInsert->setIcon(icon2);
        actListAppend = new QAction(MainWindow);
        actListAppend->setObjectName(QStringLiteral("actListAppend"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icons/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListAppend->setIcon(icon3);
        actListDelete = new QAction(MainWindow);
        actListDelete->setObjectName(QStringLiteral("actListDelete"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icons/324.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListDelete->setIcon(icon4);
        actSelALL = new QAction(MainWindow);
        actSelALL->setObjectName(QStringLiteral("actSelALL"));
        actSelNone = new QAction(MainWindow);
        actSelNone->setObjectName(QStringLiteral("actSelNone"));
        actSelNone->setMenuRole(QAction::AboutRole);
        actSelInvs = new QAction(MainWindow);
        actSelInvs->setObjectName(QStringLiteral("actSelInvs"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon5);
        actSelPopMenu = new QAction(MainWindow);
        actSelPopMenu->setObjectName(QStringLiteral("actSelPopMenu"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/icons/124.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSelPopMenu->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(5, 5, 556, 271));
        splitter->setFrameShape(QFrame::Box);
        splitter->setFrameShadow(QFrame::Plain);
        splitter->setLineWidth(1);
        splitter->setMidLineWidth(3);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(150, 0));
        toolBox->setMaximumSize(QSize(300, 16777215));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 150, 179));
        gridLayout = new QGridLayout(page);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tBtnListIni = new QToolButton(page);
        tBtnListIni->setObjectName(QStringLiteral("tBtnListIni"));
        tBtnListIni->setMinimumSize(QSize(120, 25));
        tBtnListIni->setPopupMode(QToolButton::DelayedPopup);
        tBtnListIni->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListIni->setAutoRaise(false);
        tBtnListIni->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(tBtnListIni, 0, 0, 1, 1);

        tBtnListClear = new QToolButton(page);
        tBtnListClear->setObjectName(QStringLiteral("tBtnListClear"));
        tBtnListClear->setMinimumSize(QSize(120, 25));
        tBtnListClear->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tBtnListClear, 1, 0, 1, 1);

        tBtnListInsert = new QToolButton(page);
        tBtnListInsert->setObjectName(QStringLiteral("tBtnListInsert"));
        tBtnListInsert->setMinimumSize(QSize(120, 25));
        tBtnListInsert->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tBtnListInsert, 2, 0, 1, 1);

        tBtnListAppend = new QToolButton(page);
        tBtnListAppend->setObjectName(QStringLiteral("tBtnListAppend"));
        tBtnListAppend->setMinimumSize(QSize(120, 25));
        tBtnListAppend->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tBtnListAppend, 3, 0, 1, 1);

        tBtnListDelete = new QToolButton(page);
        tBtnListDelete->setObjectName(QStringLiteral("tBtnListDelete"));
        tBtnListDelete->setMinimumSize(QSize(120, 25));
        tBtnListDelete->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tBtnListDelete, 4, 0, 1, 1);

        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/icons/410.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon7, QString::fromUtf8("QListWidget\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 150, 179));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        spinBox = new QSpinBox(groupBox_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout_3->addWidget(spinBox);


        verticalLayout_4->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 119, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/icons/408.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_2, icon8, QString::fromUtf8("QTreeWidget\346\223\215\344\275\234"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 150, 179));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/icons/412.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_3, icon9, QString::fromUtf8("QTableWidget\346\223\215\344\275\234"));
        splitter->addWidget(toolBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideLeft);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout = new QVBoxLayout(tab_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 2, -1, 2);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        editCutItemText = new QLineEdit(groupBox);
        editCutItemText->setObjectName(QStringLiteral("editCutItemText"));
        editCutItemText->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));
        editCutItemText->setClearButtonEnabled(false);

        horizontalLayout->addWidget(editCutItemText);

        chkBoxListEditable = new QCheckBox(groupBox);
        chkBoxListEditable->setObjectName(QStringLiteral("chkBoxListEditable"));

        horizontalLayout->addWidget(chkBoxListEditable);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 2, -1, 2);
        tBtnSelectItem = new QToolButton(groupBox_2);
        tBtnSelectItem->setObjectName(QStringLiteral("tBtnSelectItem"));
        tBtnSelectItem->setMinimumSize(QSize(100, 25));
        tBtnSelectItem->setPopupMode(QToolButton::MenuButtonPopup);
        tBtnSelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tBtnSelectItem);

        tBtnSelALL = new QToolButton(groupBox_2);
        tBtnSelALL->setObjectName(QStringLiteral("tBtnSelALL"));
        tBtnSelALL->setMinimumSize(QSize(70, 25));

        horizontalLayout_2->addWidget(tBtnSelALL);

        tBtnSelNone = new QToolButton(groupBox_2);
        tBtnSelNone->setObjectName(QStringLiteral("tBtnSelNone"));
        tBtnSelNone->setMinimumSize(QSize(70, 25));

        horizontalLayout_2->addWidget(tBtnSelNone);

        tBtnSelInvs = new QToolButton(groupBox_2);
        tBtnSelInvs->setObjectName(QStringLiteral("tBtnSelInvs"));
        tBtnSelInvs->setMinimumSize(QSize(70, 25));

        horizontalLayout_2->addWidget(tBtnSelInvs);


        verticalLayout->addWidget(groupBox_2);

        listWidget = new QListWidget(tab_3);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/icons/check2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        __qlistwidgetitem->setIcon(icon10);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setCheckState(Qt::Unchecked);
        __qlistwidgetitem1->setIcon(icon10);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setSelectionRectVisible(false);

        verticalLayout->addWidget(listWidget);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        verticalLayout_2->addWidget(groupBox_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        splitter->addWidget(tabWidget);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actListIni);
        mainToolBar->addAction(actListClear);
        mainToolBar->addAction(actListInsert);
        mainToolBar->addAction(actListAppend);
        mainToolBar->addAction(actListDelete);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actSelPopMenu, SIGNAL(triggered()), actSelInvs, SLOT(trigger()));

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QListWidget\347\232\204\344\275\277\347\224\250", Q_NULLPTR));
        actListIni->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListIni->setToolTip(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListIni->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actListClear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListClear->setToolTip(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actListInsert->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListInsert->setToolTip(QApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListInsert->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actListAppend->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListAppend->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListAppend->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actListDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListDelete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListDelete->setShortcut(QApplication::translate("MainWindow", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actSelALL->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelALL->setToolTip(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelNone->setText(QApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelNone->setToolTip(QApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelInvs->setText(QApplication::translate("MainWindow", "\345\217\215\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelInvs->setToolTip(QApplication::translate("MainWindow", "\345\217\215\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelPopMenu->setText(QApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelPopMenu->setToolTip(QApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tBtnListIni->setText(QApplication::translate("MainWindow", "tBtnListIni", Q_NULLPTR));
        tBtnListClear->setText(QApplication::translate("MainWindow", "tBtnListClear", Q_NULLPTR));
        tBtnListInsert->setText(QApplication::translate("MainWindow", "tBtnListInsert", Q_NULLPTR));
        tBtnListAppend->setText(QApplication::translate("MainWindow", "tBtnListAppend", Q_NULLPTR));
        tBtnListDelete->setText(QApplication::translate("MainWindow", "tBtnListDelete", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "QListWidget\346\223\215\344\275\234", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "QTreeWidget\346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "QTableWidget\346\223\215\344\275\234", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", Q_NULLPTR));
        chkBoxListEditable->setText(QApplication::translate("MainWindow", "\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        tBtnSelectItem->setText(QApplication::translate("MainWindow", "tBtnSelectItem", Q_NULLPTR));
        tBtnSelALL->setText(QApplication::translate("MainWindow", "tBtnSelALL", Q_NULLPTR));
        tBtnSelNone->setText(QApplication::translate("MainWindow", "tBtnSelNone", Q_NULLPTR));
        tBtnSelInvs->setText(QApplication::translate("MainWindow", "tBtnSelInvs", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "New Item", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "New Item2", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "QListWidget", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "QTreeWidget", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "QTableWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
