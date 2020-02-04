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
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_7;
    QSlider *sliderH;
    QLabel *label_8;
    QSlider *sliderV;
    QLabel *label_12;
    QSlider *sliderZoom;
    QLabel *label;
    QComboBox *cBoxTheme;
    QLabel *label_2;
    QComboBox *cBoxBarStyle;
    QLabel *label_3;
    QComboBox *cBoxSelectionMode;
    QLabel *label_4;
    QSpinBox *spinFontSize;
    QLabel *label_5;
    QComboBox *comboDrawMode;
    QGridLayout *gridLayout_3;
    QCheckBox *chkBoxReflection;
    QCheckBox *chkBoxBackground;
    QCheckBox *chkBoxGrid;
    QCheckBox *chkBoxShadow;
    QCheckBox *chkBoxItemLabel;
    QCheckBox *chkBoxAxisBackground;
    QCheckBox *chkBoxSmooth;
    QCheckBox *chkBoxReverse;
    QCheckBox *chkBoxAxisTitle;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QPushButton *btnBarColor;
    QLabel *label_9;
    QPushButton *btnGrad1;
    QLabel *label_10;
    QPushButton *btnGrad2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(827, 589);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 561));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        sliderH = new QSlider(groupBox);
        sliderH->setObjectName(QString::fromUtf8("sliderH"));
        sliderH->setMinimum(-180);
        sliderH->setMaximum(180);
        sliderH->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderH, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        sliderV = new QSlider(groupBox);
        sliderV->setObjectName(QString::fromUtf8("sliderV"));
        sliderV->setMinimum(-180);
        sliderV->setMaximum(180);
        sliderV->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderV, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

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

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        comboDrawMode = new QComboBox(groupBox);
        comboDrawMode->addItem(QString());
        comboDrawMode->addItem(QString());
        comboDrawMode->addItem(QString());
        comboDrawMode->setObjectName(QString::fromUtf8("comboDrawMode"));

        gridLayout->addWidget(comboDrawMode, 8, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        chkBoxReflection = new QCheckBox(groupBox);
        chkBoxReflection->setObjectName(QString::fromUtf8("chkBoxReflection"));

        gridLayout_3->addWidget(chkBoxReflection, 1, 1, 1, 2);

        chkBoxBackground = new QCheckBox(groupBox);
        chkBoxBackground->setObjectName(QString::fromUtf8("chkBoxBackground"));

        gridLayout_3->addWidget(chkBoxBackground, 0, 0, 1, 1);

        chkBoxGrid = new QCheckBox(groupBox);
        chkBoxGrid->setObjectName(QString::fromUtf8("chkBoxGrid"));

        gridLayout_3->addWidget(chkBoxGrid, 0, 1, 1, 2);

        chkBoxShadow = new QCheckBox(groupBox);
        chkBoxShadow->setObjectName(QString::fromUtf8("chkBoxShadow"));

        gridLayout_3->addWidget(chkBoxShadow, 1, 0, 1, 1);

        chkBoxItemLabel = new QCheckBox(groupBox);
        chkBoxItemLabel->setObjectName(QString::fromUtf8("chkBoxItemLabel"));

        gridLayout_3->addWidget(chkBoxItemLabel, 3, 0, 1, 1);

        chkBoxAxisBackground = new QCheckBox(groupBox);
        chkBoxAxisBackground->setObjectName(QString::fromUtf8("chkBoxAxisBackground"));

        gridLayout_3->addWidget(chkBoxAxisBackground, 4, 0, 1, 2);

        chkBoxSmooth = new QCheckBox(groupBox);
        chkBoxSmooth->setObjectName(QString::fromUtf8("chkBoxSmooth"));

        gridLayout_3->addWidget(chkBoxSmooth, 2, 0, 1, 1);

        chkBoxReverse = new QCheckBox(groupBox);
        chkBoxReverse->setObjectName(QString::fromUtf8("chkBoxReverse"));

        gridLayout_3->addWidget(chkBoxReverse, 2, 1, 1, 2);

        chkBoxAxisTitle = new QCheckBox(groupBox);
        chkBoxAxisTitle->setObjectName(QString::fromUtf8("chkBoxAxisTitle"));

        gridLayout_3->addWidget(chkBoxAxisTitle, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        btnBarColor = new QPushButton(groupBox);
        btnBarColor->setObjectName(QString::fromUtf8("btnBarColor"));

        gridLayout_2->addWidget(btnBarColor, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        btnGrad1 = new QPushButton(groupBox);
        btnGrad1->setObjectName(QString::fromUtf8("btnGrad1"));

        gridLayout_2->addWidget(btnGrad1, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        btnGrad2 = new QPushButton(groupBox);
        btnGrad2->setObjectName(QString::fromUtf8("btnGrad2"));

        gridLayout_2->addWidget(btnGrad2, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        label_6->setBuddy(comboBox);
        label_7->setBuddy(sliderH);
        label_8->setBuddy(sliderV);
        label_12->setBuddy(sliderZoom);
        label->setBuddy(cBoxTheme);
        label_2->setBuddy(cBoxBarStyle);
        label_3->setBuddy(cBoxSelectionMode);
        label_4->setBuddy(spinFontSize);
        label_11->setBuddy(btnBarColor);
        label_9->setBuddy(btnGrad1);
        label_10->setBuddy(btnGrad2);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Q3DSurface\347\273\230\345\210\266\351\253\230\347\250\213\345\233\276", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("MainWindow", "\351\242\204\350\256\276\350\247\206\350\247\222", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "FrontLow", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Front", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "FrontHigh", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "LeftLow", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "Left", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "LeftHigh", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "RightLow", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "Right", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "RightHigh", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "BehindLow", nullptr));
        comboBox->setItemText(10, QApplication::translate("MainWindow", "Behind", nullptr));
        comboBox->setItemText(11, QApplication::translate("MainWindow", "BehindHigh", nullptr));
        comboBox->setItemText(12, QApplication::translate("MainWindow", "IsometricLeft", nullptr));
        comboBox->setItemText(13, QApplication::translate("MainWindow", "IsometricLeftHigh", nullptr));
        comboBox->setItemText(14, QApplication::translate("MainWindow", "IsometricRight", nullptr));
        comboBox->setItemText(15, QApplication::translate("MainWindow", "IsometricRightHigh", nullptr));
        comboBox->setItemText(16, QApplication::translate("MainWindow", "DirectlyAbove", nullptr));
        comboBox->setItemText(17, QApplication::translate("MainWindow", "DirectlyAboveCW45", nullptr));
        comboBox->setItemText(18, QApplication::translate("MainWindow", "DirectlyAboveCCW45", nullptr));
        comboBox->setItemText(19, QApplication::translate("MainWindow", "FrontBelow", nullptr));
        comboBox->setItemText(20, QApplication::translate("MainWindow", "LeftBelow", nullptr));
        comboBox->setItemText(21, QApplication::translate("MainWindow", "RightBelow", nullptr));
        comboBox->setItemText(22, QApplication::translate("MainWindow", "BehindBelow", nullptr));
        comboBox->setItemText(23, QApplication::translate("MainWindow", "DirectlyBelow", nullptr));

        label_7->setText(QApplication::translate("MainWindow", "\346\260\264\345\271\263\346\227\213\350\275\254", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\345\236\202\347\233\264\346\227\213\350\275\254", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\347\274\251  \346\224\276", nullptr));
        label->setText(QApplication::translate("MainWindow", "\344\270\273  \351\242\230", nullptr));
        cBoxTheme->setItemText(0, QApplication::translate("MainWindow", "Qt", nullptr));
        cBoxTheme->setItemText(1, QApplication::translate("MainWindow", "Primary Colors", nullptr));
        cBoxTheme->setItemText(2, QApplication::translate("MainWindow", "Digia", nullptr));
        cBoxTheme->setItemText(3, QApplication::translate("MainWindow", "StoneMoss", nullptr));
        cBoxTheme->setItemText(4, QApplication::translate("MainWindow", "ArmyBlue", nullptr));
        cBoxTheme->setItemText(5, QApplication::translate("MainWindow", "Retro", nullptr));
        cBoxTheme->setItemText(6, QApplication::translate("MainWindow", "Ebony", nullptr));
        cBoxTheme->setItemText(7, QApplication::translate("MainWindow", "Isabelle", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\346\240\267\345\274\217", nullptr));
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
        cBoxSelectionMode->setItemText(2, QApplication::translate("MainWindow", "Row Slice", nullptr));
        cBoxSelectionMode->setItemText(3, QApplication::translate("MainWindow", "Column Slice", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "\350\275\264\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\346\233\262\351\235\242\346\240\267\345\274\217", nullptr));
        comboDrawMode->setItemText(0, QApplication::translate("MainWindow", "Wireframe", nullptr));
        comboDrawMode->setItemText(1, QApplication::translate("MainWindow", "Surface", nullptr));
        comboDrawMode->setItemText(2, QApplication::translate("MainWindow", "Surface And Wireframe", nullptr));

        chkBoxReflection->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\200\222\345\275\261", nullptr));
        chkBoxBackground->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257", nullptr));
        chkBoxGrid->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257\347\275\221\346\240\274", nullptr));
        chkBoxShadow->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\351\230\264\345\275\261", nullptr));
        chkBoxItemLabel->setText(QApplication::translate("MainWindow", "\351\241\271\346\240\207\347\255\276\345\217\257\350\247\201", nullptr));
        chkBoxAxisBackground->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\275\264\346\240\207\351\242\230\350\203\214\346\231\257", nullptr));
        chkBoxSmooth->setText(QApplication::translate("MainWindow", "\345\205\211\346\273\221\346\233\262\351\235\242", nullptr));
        chkBoxReverse->setText(QApplication::translate("MainWindow", "Y\350\275\264\357\274\210\345\236\202\347\233\264\346\226\271\345\220\221\357\274\211\345\217\215\345\220\221", nullptr));
        chkBoxAxisTitle->setText(QApplication::translate("MainWindow", "\350\275\264\346\240\207\351\242\230\345\217\257\350\247\201", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\345\215\225\344\270\200\351\242\234\350\211\262", nullptr));
        btnBarColor->setText(QApplication::translate("MainWindow", "surface color", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\346\270\220\345\217\230\350\211\2621", nullptr));
        btnGrad1->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "\346\270\220\345\217\230\350\211\2622", nullptr));
        btnGrad2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
