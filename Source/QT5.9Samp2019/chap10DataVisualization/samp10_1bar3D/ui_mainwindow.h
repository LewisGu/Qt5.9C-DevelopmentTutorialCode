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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(617, 418);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(5, 5, 301, 386));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        comboCamera = new QComboBox(groupBox);
        comboCamera->setObjectName(QStringLiteral("comboCamera"));

        gridLayout->addWidget(comboCamera, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        sliderH = new QSlider(groupBox);
        sliderH->setObjectName(QStringLiteral("sliderH"));
        sliderH->setMinimum(-180);
        sliderH->setMaximum(180);
        sliderH->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderH, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        sliderV = new QSlider(groupBox);
        sliderV->setObjectName(QStringLiteral("sliderV"));
        sliderV->setMinimum(-180);
        sliderV->setMaximum(180);
        sliderV->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderV, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

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


        verticalLayout->addLayout(gridLayout);

        btnBarColor = new QPushButton(groupBox);
        btnBarColor->setObjectName(QStringLiteral("btnBarColor"));

        verticalLayout->addWidget(btnBarColor);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        chkBoxBackground = new QCheckBox(groupBox);
        chkBoxBackground->setObjectName(QStringLiteral("chkBoxBackground"));

        gridLayout_2->addWidget(chkBoxBackground, 0, 0, 1, 1);

        chkBoxGrid = new QCheckBox(groupBox);
        chkBoxGrid->setObjectName(QStringLiteral("chkBoxGrid"));

        gridLayout_2->addWidget(chkBoxGrid, 0, 1, 1, 2);

        chkBoxSmooth = new QCheckBox(groupBox);
        chkBoxSmooth->setObjectName(QStringLiteral("chkBoxSmooth"));

        gridLayout_2->addWidget(chkBoxSmooth, 1, 0, 1, 1);

        chkBoxReflection = new QCheckBox(groupBox);
        chkBoxReflection->setObjectName(QStringLiteral("chkBoxReflection"));

        gridLayout_2->addWidget(chkBoxReflection, 1, 1, 1, 2);

        chkBoxReverse = new QCheckBox(groupBox);
        chkBoxReverse->setObjectName(QStringLiteral("chkBoxReverse"));

        gridLayout_2->addWidget(chkBoxReverse, 2, 0, 1, 1);

        chkBoxItemLabel = new QCheckBox(groupBox);
        chkBoxItemLabel->setObjectName(QStringLiteral("chkBoxItemLabel"));

        gridLayout_2->addWidget(chkBoxItemLabel, 2, 1, 1, 2);

        chkBoxAxisTitle = new QCheckBox(groupBox);
        chkBoxAxisTitle->setObjectName(QStringLiteral("chkBoxAxisTitle"));

        gridLayout_2->addWidget(chkBoxAxisTitle, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 2, 1, 1);

        chkBoxAxisBackground = new QCheckBox(groupBox);
        chkBoxAxisBackground->setObjectName(QStringLiteral("chkBoxAxisBackground"));

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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Q3DBars\347\273\230\345\233\276", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "\351\242\204\350\256\276\350\247\206\350\247\222", Q_NULLPTR));
        comboCamera->clear();
        comboCamera->insertItems(0, QStringList()
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
        label_6->setText(QApplication::translate("MainWindow", "\346\260\264\345\271\263\346\227\213\350\275\254", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\345\236\202\347\233\264\346\227\213\350\275\254", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\347\274\251  \346\224\276", Q_NULLPTR));
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
        label_2->setText(QApplication::translate("MainWindow", "\346\243\222\345\233\276\346\240\267\345\274\217", Q_NULLPTR));
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
         << QApplication::translate("MainWindow", "Row", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Item And Row", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Column", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Item And Column", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Row And Column", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Item Row And Column", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Slice", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223\345\244\247\345\260\217", Q_NULLPTR));
        btnBarColor->setText(QApplication::translate("MainWindow", "\351\241\271\347\232\204\351\242\234\350\211\262", Q_NULLPTR));
        chkBoxBackground->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257", Q_NULLPTR));
        chkBoxGrid->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257\347\275\221\346\240\274", Q_NULLPTR));
        chkBoxSmooth->setText(QApplication::translate("MainWindow", "\345\205\211\346\273\221\346\225\210\346\236\234", Q_NULLPTR));
        chkBoxReflection->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\200\222\345\275\261", Q_NULLPTR));
        chkBoxReverse->setText(QApplication::translate("MainWindow", "\346\225\260\345\200\274\345\235\220\346\240\207\350\275\264\345\217\215\345\220\221", Q_NULLPTR));
        chkBoxItemLabel->setText(QApplication::translate("MainWindow", "\351\241\271\347\232\204\346\240\207\347\255\276\345\217\257\350\247\201", Q_NULLPTR));
        chkBoxAxisTitle->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\346\240\207\351\242\230\345\217\257\350\247\201", Q_NULLPTR));
        chkBoxAxisBackground->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\346\240\207\347\255\276\350\203\214\346\231\257\345\217\257\350\247\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
