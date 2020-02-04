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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *comboCamera;
    QLabel *label_6;
    QSlider *sliderH;
    QLabel *label_7;
    QSlider *sliderV;
    QLabel *label_8;
    QSlider *sliderZoom;
    QLabel *label;
    QComboBox *cBoxTheme;
    QLabel *label_2;
    QComboBox *cBoxBarStyle;
    QLabel *label_3;
    QComboBox *cBoxSelectionMode;
    QLabel *label_4;
    QSpinBox *spinFontSize;
    QPushButton *btnBarColor;
    QGridLayout *gridLayout_2;
    QCheckBox *chkBoxBackground;
    QCheckBox *chkBoxGrid;
    QCheckBox *chkBoxSmooth;
    QCheckBox *chkBoxReflection;
    QCheckBox *chkBoxReverse;
    QCheckBox *chkBoxItemLabel;
    QCheckBox *chkBoxAxisTitle;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkBoxAxisBackground;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(617, 418);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 5, 301, 386));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        comboCamera = new QComboBox(groupBox);
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->addItem(QString());
        comboCamera->setObjectName(QString::fromUtf8("comboCamera"));

        gridLayout->addWidget(comboCamera, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        sliderH = new QSlider(groupBox);
        sliderH->setObjectName(QString::fromUtf8("sliderH"));
        sliderH->setMinimum(-180);
        sliderH->setMaximum(180);
        sliderH->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderH, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        sliderV = new QSlider(groupBox);
        sliderV->setObjectName(QString::fromUtf8("sliderV"));
        sliderV->setMinimum(-180);
        sliderV->setMaximum(180);
        sliderV->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderV, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        sliderZoom = new QSlider(groupBox);
        sliderZoom->setObjectName(QString::fromUtf8("sliderZoom"));
        sliderZoom->setMinimum(10);
        sliderZoom->setMaximum(500);
        sliderZoom->setValue(100);
        sliderZoom->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderZoom, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        cBoxTheme = new QComboBox(groupBox);
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->addItem(QString());
        cBoxTheme->setObjectName(QString::fromUtf8("cBoxTheme"));

        gridLayout->addWidget(cBoxTheme, 4, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        cBoxBarStyle = new QComboBox(groupBox);
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->addItem(QString());
        cBoxBarStyle->setObjectName(QString::fromUtf8("cBoxBarStyle"));

        gridLayout->addWidget(cBoxBarStyle, 5, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        cBoxSelectionMode = new QComboBox(groupBox);
        cBoxSelectionMode->addItem(QString());
        cBoxSelectionMode->addItem(QString());
        cBoxSelectionMode->addItem(QString());
        cBoxSelectionMode->addItem(QString());
        cBoxSelectionMode->addItem(QString());
        cBoxSelectionMode->addItem(QString());
        cBoxSelectionMode->addItem(QString());
        cBoxSelectionMode->addItem(QString());
        cBoxSelectionMode->addItem(QString());
        cBoxSelectionMode->setObjectName(QString::fromUtf8("cBoxSelectionMode"));

        gridLayout->addWidget(cBoxSelectionMode, 6, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        spinFontSize = new QSpinBox(groupBox);
        spinFontSize->setObjectName(QString::fromUtf8("spinFontSize"));
        spinFontSize->setMinimum(5);
        spinFontSize->setValue(10);

        gridLayout->addWidget(spinFontSize, 7, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        btnBarColor = new QPushButton(groupBox);
        btnBarColor->setObjectName(QString::fromUtf8("btnBarColor"));

        verticalLayout->addWidget(btnBarColor);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        chkBoxBackground = new QCheckBox(groupBox);
        chkBoxBackground->setObjectName(QString::fromUtf8("chkBoxBackground"));

        gridLayout_2->addWidget(chkBoxBackground, 0, 0, 1, 1);

        chkBoxGrid = new QCheckBox(groupBox);
        chkBoxGrid->setObjectName(QString::fromUtf8("chkBoxGrid"));

        gridLayout_2->addWidget(chkBoxGrid, 0, 1, 1, 2);

        chkBoxSmooth = new QCheckBox(groupBox);
        chkBoxSmooth->setObjectName(QString::fromUtf8("chkBoxSmooth"));

        gridLayout_2->addWidget(chkBoxSmooth, 1, 0, 1, 1);

        chkBoxReflection = new QCheckBox(groupBox);
        chkBoxReflection->setObjectName(QString::fromUtf8("chkBoxReflection"));

        gridLayout_2->addWidget(chkBoxReflection, 1, 1, 1, 2);

        chkBoxReverse = new QCheckBox(groupBox);
        chkBoxReverse->setObjectName(QString::fromUtf8("chkBoxReverse"));

        gridLayout_2->addWidget(chkBoxReverse, 2, 0, 1, 1);

        chkBoxItemLabel = new QCheckBox(groupBox);
        chkBoxItemLabel->setObjectName(QString::fromUtf8("chkBoxItemLabel"));

        gridLayout_2->addWidget(chkBoxItemLabel, 2, 1, 1, 2);

        chkBoxAxisTitle = new QCheckBox(groupBox);
        chkBoxAxisTitle->setObjectName(QString::fromUtf8("chkBoxAxisTitle"));

        gridLayout_2->addWidget(chkBoxAxisTitle, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 2, 1, 1);

        chkBoxAxisBackground = new QCheckBox(groupBox);
        chkBoxAxisBackground->setObjectName(QString::fromUtf8("chkBoxAxisBackground"));

        gridLayout_2->addWidget(chkBoxAxisBackground, 4, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(comboCamera);
        label_6->setBuddy(sliderH);
        label_7->setBuddy(sliderV);
        label_8->setBuddy(sliderZoom);
        label->setBuddy(cBoxTheme);
        label_2->setBuddy(cBoxBarStyle);
        label_3->setBuddy(cBoxSelectionMode);
        label_4->setBuddy(spinFontSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Q3DBars\347\273\230\345\233\276", nullptr));
        groupBox->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "\351\242\204\350\256\276\350\247\206\350\247\222", nullptr));
        comboCamera->setItemText(0, QApplication::translate("MainWindow", "FrontLow", nullptr));
        comboCamera->setItemText(1, QApplication::translate("MainWindow", "Front", nullptr));
        comboCamera->setItemText(2, QApplication::translate("MainWindow", "FrontHigh", nullptr));
        comboCamera->setItemText(3, QApplication::translate("MainWindow", "LeftLow", nullptr));
        comboCamera->setItemText(4, QApplication::translate("MainWindow", "Left", nullptr));
        comboCamera->setItemText(5, QApplication::translate("MainWindow", "LeftHigh", nullptr));
        comboCamera->setItemText(6, QApplication::translate("MainWindow", "RightLow", nullptr));
        comboCamera->setItemText(7, QApplication::translate("MainWindow", "Right", nullptr));
        comboCamera->setItemText(8, QApplication::translate("MainWindow", "RightHigh", nullptr));
        comboCamera->setItemText(9, QApplication::translate("MainWindow", "BehindLow", nullptr));
        comboCamera->setItemText(10, QApplication::translate("MainWindow", "Behind", nullptr));
        comboCamera->setItemText(11, QApplication::translate("MainWindow", "BehindHigh", nullptr));
        comboCamera->setItemText(12, QApplication::translate("MainWindow", "IsometricLeft", nullptr));
        comboCamera->setItemText(13, QApplication::translate("MainWindow", "IsometricLeftHigh", nullptr));
        comboCamera->setItemText(14, QApplication::translate("MainWindow", "IsometricRight", nullptr));
        comboCamera->setItemText(15, QApplication::translate("MainWindow", "IsometricRightHigh", nullptr));
        comboCamera->setItemText(16, QApplication::translate("MainWindow", "DirectlyAbove", nullptr));
        comboCamera->setItemText(17, QApplication::translate("MainWindow", "DirectlyAboveCW45", nullptr));
        comboCamera->setItemText(18, QApplication::translate("MainWindow", "DirectlyAboveCCW45", nullptr));
        comboCamera->setItemText(19, QApplication::translate("MainWindow", "FrontBelow", nullptr));
        comboCamera->setItemText(20, QApplication::translate("MainWindow", "LeftBelow", nullptr));
        comboCamera->setItemText(21, QApplication::translate("MainWindow", "RightBelow", nullptr));
        comboCamera->setItemText(22, QApplication::translate("MainWindow", "BehindBelow", nullptr));
        comboCamera->setItemText(23, QApplication::translate("MainWindow", "DirectlyBelow", nullptr));

        label_6->setText(QApplication::translate("MainWindow", "\346\260\264\345\271\263\346\227\213\350\275\254", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\345\236\202\347\233\264\346\227\213\350\275\254", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\347\274\251  \346\224\276", nullptr));
        label->setText(QApplication::translate("MainWindow", "\344\270\273  \351\242\230", nullptr));
        cBoxTheme->setItemText(0, QApplication::translate("MainWindow", "Qt", nullptr));
        cBoxTheme->setItemText(1, QApplication::translate("MainWindow", "Primary Colors", nullptr));
        cBoxTheme->setItemText(2, QApplication::translate("MainWindow", "Digia", nullptr));
        cBoxTheme->setItemText(3, QApplication::translate("MainWindow", "StoneMoss", nullptr));
        cBoxTheme->setItemText(4, QApplication::translate("MainWindow", "ArmyBlue", nullptr));
        cBoxTheme->setItemText(5, QApplication::translate("MainWindow", "Retro", nullptr));
        cBoxTheme->setItemText(6, QApplication::translate("MainWindow", "Ebony", nullptr));
        cBoxTheme->setItemText(7, QApplication::translate("MainWindow", "Isabelle", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "\346\243\222\345\233\276\346\240\267\345\274\217", nullptr));
        cBoxBarStyle->setItemText(0, QApplication::translate("MainWindow", "Bar", nullptr));
        cBoxBarStyle->setItemText(1, QApplication::translate("MainWindow", "Cube", nullptr));
        cBoxBarStyle->setItemText(2, QApplication::translate("MainWindow", "Pyramid", nullptr));
        cBoxBarStyle->setItemText(3, QApplication::translate("MainWindow", "Cone", nullptr));
        cBoxBarStyle->setItemText(4, QApplication::translate("MainWindow", "Cylinder", nullptr));
        cBoxBarStyle->setItemText(5, QApplication::translate("MainWindow", "BevelBar", nullptr));
        cBoxBarStyle->setItemText(6, QApplication::translate("MainWindow", "BevelCube", nullptr));
        cBoxBarStyle->setItemText(7, QApplication::translate("MainWindow", "Sphere", nullptr));
        cBoxBarStyle->setItemText(8, QApplication::translate("MainWindow", "Minimal", nullptr));
        cBoxBarStyle->setItemText(9, QApplication::translate("MainWindow", "Arrow", nullptr));
        cBoxBarStyle->setItemText(10, QApplication::translate("MainWindow", "Point", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\250\241\345\274\217", nullptr));
        cBoxSelectionMode->setItemText(0, QApplication::translate("MainWindow", "None", nullptr));
        cBoxSelectionMode->setItemText(1, QApplication::translate("MainWindow", "Item", nullptr));
        cBoxSelectionMode->setItemText(2, QApplication::translate("MainWindow", "Row", nullptr));
        cBoxSelectionMode->setItemText(3, QApplication::translate("MainWindow", "Item And Row", nullptr));
        cBoxSelectionMode->setItemText(4, QApplication::translate("MainWindow", "Column", nullptr));
        cBoxSelectionMode->setItemText(5, QApplication::translate("MainWindow", "Item And Column", nullptr));
        cBoxSelectionMode->setItemText(6, QApplication::translate("MainWindow", "Row And Column", nullptr));
        cBoxSelectionMode->setItemText(7, QApplication::translate("MainWindow", "Item Row And Column", nullptr));
        cBoxSelectionMode->setItemText(8, QApplication::translate("MainWindow", "Slice", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        btnBarColor->setText(QApplication::translate("MainWindow", "\351\241\271\347\232\204\351\242\234\350\211\262", nullptr));
        chkBoxBackground->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257", nullptr));
        chkBoxGrid->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257\347\275\221\346\240\274", nullptr));
        chkBoxSmooth->setText(QApplication::translate("MainWindow", "\345\205\211\346\273\221\346\225\210\346\236\234", nullptr));
        chkBoxReflection->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\200\222\345\275\261", nullptr));
        chkBoxReverse->setText(QApplication::translate("MainWindow", "\346\225\260\345\200\274\345\235\220\346\240\207\350\275\264\345\217\215\345\220\221", nullptr));
        chkBoxItemLabel->setText(QApplication::translate("MainWindow", "\351\241\271\347\232\204\346\240\207\347\255\276\345\217\257\350\247\201", nullptr));
        chkBoxAxisTitle->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\346\240\207\351\242\230\345\217\257\350\247\201", nullptr));
        chkBoxAxisBackground->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\346\240\207\347\255\276\350\203\214\346\231\257\345\217\257\350\247\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
