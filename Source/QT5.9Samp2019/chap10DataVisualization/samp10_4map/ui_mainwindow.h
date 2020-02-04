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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(827, 589);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 561));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        sliderH = new QSlider(groupBox);
        sliderH->setObjectName(QStringLiteral("sliderH"));
        sliderH->setMinimum(-180);
        sliderH->setMaximum(180);
        sliderH->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderH, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        sliderV = new QSlider(groupBox);
        sliderV->setObjectName(QStringLiteral("sliderV"));
        sliderV->setMinimum(-180);
        sliderV->setMaximum(180);
        sliderV->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderV, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        sliderZoom = new QSlider(groupBox);
        sliderZoom->setObjectName(QStringLiteral("sliderZoom"));
        sliderZoom->setMinimum(10);
        sliderZoom->setMaximum(500);
        sliderZoom->setValue(100);
        sliderZoom->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderZoom, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        cBoxTheme = new QComboBox(groupBox);
        cBoxTheme->setObjectName(QStringLiteral("cBoxTheme"));

        gridLayout->addWidget(cBoxTheme, 4, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        cBoxBarStyle = new QComboBox(groupBox);
        cBoxBarStyle->setObjectName(QStringLiteral("cBoxBarStyle"));

        gridLayout->addWidget(cBoxBarStyle, 5, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        cBoxSelectionMode = new QComboBox(groupBox);
        cBoxSelectionMode->setObjectName(QStringLiteral("cBoxSelectionMode"));

        gridLayout->addWidget(cBoxSelectionMode, 6, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        spinFontSize = new QSpinBox(groupBox);
        spinFontSize->setObjectName(QStringLiteral("spinFontSize"));
        spinFontSize->setMinimum(5);
        spinFontSize->setValue(10);

        gridLayout->addWidget(spinFontSize, 7, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        comboDrawMode = new QComboBox(groupBox);
        comboDrawMode->setObjectName(QStringLiteral("comboDrawMode"));

        gridLayout->addWidget(comboDrawMode, 8, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        chkBoxReflection = new QCheckBox(groupBox);
        chkBoxReflection->setObjectName(QStringLiteral("chkBoxReflection"));

        gridLayout_3->addWidget(chkBoxReflection, 1, 1, 1, 2);

        chkBoxBackground = new QCheckBox(groupBox);
        chkBoxBackground->setObjectName(QStringLiteral("chkBoxBackground"));

        gridLayout_3->addWidget(chkBoxBackground, 0, 0, 1, 1);

        chkBoxGrid = new QCheckBox(groupBox);
        chkBoxGrid->setObjectName(QStringLiteral("chkBoxGrid"));

        gridLayout_3->addWidget(chkBoxGrid, 0, 1, 1, 2);

        chkBoxShadow = new QCheckBox(groupBox);
        chkBoxShadow->setObjectName(QStringLiteral("chkBoxShadow"));

        gridLayout_3->addWidget(chkBoxShadow, 1, 0, 1, 1);

        chkBoxItemLabel = new QCheckBox(groupBox);
        chkBoxItemLabel->setObjectName(QStringLiteral("chkBoxItemLabel"));

        gridLayout_3->addWidget(chkBoxItemLabel, 3, 0, 1, 1);

        chkBoxAxisBackground = new QCheckBox(groupBox);
        chkBoxAxisBackground->setObjectName(QStringLiteral("chkBoxAxisBackground"));

        gridLayout_3->addWidget(chkBoxAxisBackground, 4, 0, 1, 2);

        chkBoxSmooth = new QCheckBox(groupBox);
        chkBoxSmooth->setObjectName(QStringLiteral("chkBoxSmooth"));

        gridLayout_3->addWidget(chkBoxSmooth, 2, 0, 1, 1);

        chkBoxReverse = new QCheckBox(groupBox);
        chkBoxReverse->setObjectName(QStringLiteral("chkBoxReverse"));

        gridLayout_3->addWidget(chkBoxReverse, 2, 1, 1, 2);

        chkBoxAxisTitle = new QCheckBox(groupBox);
        chkBoxAxisTitle->setObjectName(QStringLiteral("chkBoxAxisTitle"));

        gridLayout_3->addWidget(chkBoxAxisTitle, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        btnBarColor = new QPushButton(groupBox);
        btnBarColor->setObjectName(QStringLiteral("btnBarColor"));

        gridLayout_2->addWidget(btnBarColor, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        btnGrad1 = new QPushButton(groupBox);
        btnGrad1->setObjectName(QStringLiteral("btnGrad1"));

        gridLayout_2->addWidget(btnGrad1, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        btnGrad2 = new QPushButton(groupBox);
        btnGrad2->setObjectName(QStringLiteral("btnGrad2"));

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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Q3DSurface\347\273\230\345\210\266\351\253\230\347\250\213\345\233\276", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("MainWindow", "\351\242\204\350\256\276\350\247\206\350\247\222", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "FrontLow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Front", Q_NULLPTR)
         << QApplication::translate("MainWindow", "FrontHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "LeftLow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Left", Q_NULLPTR)
         << QApplication::translate("MainWindow", "LeftHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "RightLow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Right", Q_NULLPTR)
         << QApplication::translate("MainWindow", "RightHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BehindLow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Behind", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BehindHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IsometricLeft", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IsometricLeftHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IsometricRight", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IsometricRightHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DirectlyAbove", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DirectlyAboveCW45", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DirectlyAboveCCW45", Q_NULLPTR)
         << QApplication::translate("MainWindow", "FrontBelow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "LeftBelow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "RightBelow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BehindBelow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DirectlyBelow", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "\346\260\264\345\271\263\346\227\213\350\275\254", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\236\202\347\233\264\346\227\213\350\275\254", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\347\274\251  \346\224\276", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\273  \351\242\230", Q_NULLPTR));
        cBoxTheme->clear();
        cBoxTheme->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Qt", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Primary Colors", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Digia", Q_NULLPTR)
         << QApplication::translate("MainWindow", "StoneMoss", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ArmyBlue", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Retro", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ebony", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Isabelle", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\346\240\267\345\274\217", Q_NULLPTR));
        cBoxBarStyle->clear();
        cBoxBarStyle->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bar", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cube", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Pyramid", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cone", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cylinder", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BevelBar", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BevelCube", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sphere", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Minimal", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Arrow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Point", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\250\241\345\274\217", Q_NULLPTR));
        cBoxSelectionMode->clear();
        cBoxSelectionMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Item", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Row Slice", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Column Slice", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\350\275\264\345\255\227\344\275\223\345\244\247\345\260\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\233\262\351\235\242\346\240\267\345\274\217", Q_NULLPTR));
        comboDrawMode->clear();
        comboDrawMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Wireframe", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Surface", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Surface And Wireframe", Q_NULLPTR)
        );
        chkBoxReflection->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\200\222\345\275\261", Q_NULLPTR));
        chkBoxBackground->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257", Q_NULLPTR));
        chkBoxGrid->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257\347\275\221\346\240\274", Q_NULLPTR));
        chkBoxShadow->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\351\230\264\345\275\261", Q_NULLPTR));
        chkBoxItemLabel->setText(QApplication::translate("MainWindow", "\351\241\271\346\240\207\347\255\276\345\217\257\350\247\201", Q_NULLPTR));
        chkBoxAxisBackground->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\275\264\346\240\207\351\242\230\350\203\214\346\231\257", Q_NULLPTR));
        chkBoxSmooth->setText(QApplication::translate("MainWindow", "\345\205\211\346\273\221\346\233\262\351\235\242", Q_NULLPTR));
        chkBoxReverse->setText(QApplication::translate("MainWindow", "Y\350\275\264\357\274\210\345\236\202\347\233\264\346\226\271\345\220\221\357\274\211\345\217\215\345\220\221", Q_NULLPTR));
        chkBoxAxisTitle->setText(QApplication::translate("MainWindow", "\350\275\264\346\240\207\351\242\230\345\217\257\350\247\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\215\225\344\270\200\351\242\234\350\211\262", Q_NULLPTR));
        btnBarColor->setText(QApplication::translate("MainWindow", "surface color", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\346\270\220\345\217\230\350\211\2621", Q_NULLPTR));
        btnGrad1->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "\346\270\220\345\217\230\350\211\2622", Q_NULLPTR));
        btnGrad2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
