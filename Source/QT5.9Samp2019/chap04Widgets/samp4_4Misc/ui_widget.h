/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSlider *SliderGreen;
    QSlider *SliderBlue;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *SliderRed;
    QSlider *SliderAlpha;
    QLabel *label_4;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSlider *SliderH;
    QScrollBar *ScrollBarH;
    QProgressBar *progBarH;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QDial *dial;
    QLCDNumber *LCDDisplay;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioBtnDec;
    QRadioButton *radioBtnBin;
    QRadioButton *radioBtnOct;
    QRadioButton *radioBtnHex;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QSlider *SliderV;
    QScrollBar *ScrollBarV;
    QProgressBar *progBarV;
    QSpacerItem *verticalSpacer;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(475, 423);
        QFont font;
        font.setPointSize(10);
        Widget->setFont(font);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 456, 402));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        SliderGreen = new QSlider(groupBox_2);
        SliderGreen->setObjectName(QStringLiteral("SliderGreen"));
        SliderGreen->setMaximum(255);
        SliderGreen->setValue(200);
        SliderGreen->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(SliderGreen, 1, 1, 1, 1);

        SliderBlue = new QSlider(groupBox_2);
        SliderBlue->setObjectName(QStringLiteral("SliderBlue"));
        SliderBlue->setMaximum(255);
        SliderBlue->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(SliderBlue, 2, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        SliderRed = new QSlider(groupBox_2);
        SliderRed->setObjectName(QStringLiteral("SliderRed"));
        SliderRed->setMaximum(255);
        SliderRed->setValue(100);
        SliderRed->setOrientation(Qt::Horizontal);
        SliderRed->setInvertedAppearance(false);
        SliderRed->setInvertedControls(false);
        SliderRed->setTickPosition(QSlider::NoTicks);
        SliderRed->setTickInterval(0);

        gridLayout_2->addWidget(SliderRed, 0, 1, 1, 1);

        SliderAlpha = new QSlider(groupBox_2);
        SliderAlpha->setObjectName(QStringLiteral("SliderAlpha"));
        SliderAlpha->setMaximum(255);
        SliderAlpha->setValue(100);
        SliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(SliderAlpha, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(100, 16777215));
        QPalette palette;
        QBrush brush(QColor(170, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textEdit->setPalette(palette);

        gridLayout_2->addWidget(textEdit, 0, 3, 4, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SliderH = new QSlider(groupBox);
        SliderH->setObjectName(QStringLiteral("SliderH"));
        SliderH->setMaximum(100);
        SliderH->setValue(10);
        SliderH->setOrientation(Qt::Horizontal);
        SliderH->setInvertedAppearance(false);
        SliderH->setInvertedControls(true);
        SliderH->setTickPosition(QSlider::TicksAbove);
        SliderH->setTickInterval(0);

        verticalLayout->addWidget(SliderH);

        ScrollBarH = new QScrollBar(groupBox);
        ScrollBarH->setObjectName(QStringLiteral("ScrollBarH"));
        ScrollBarH->setMaximum(100);
        ScrollBarH->setValue(10);
        ScrollBarH->setSliderPosition(10);
        ScrollBarH->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(ScrollBarH);

        progBarH = new QProgressBar(groupBox);
        progBarH->setObjectName(QStringLiteral("progBarH"));
        progBarH->setValue(10);
        progBarH->setTextVisible(true);
        progBarH->setOrientation(Qt::Horizontal);
        progBarH->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout->addWidget(progBarH);


        verticalLayout_2->addWidget(groupBox);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dial = new QDial(groupBox_4);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setMaximum(255);
        dial->setSliderPosition(0);
        dial->setTracking(true);
        dial->setOrientation(Qt::Horizontal);
        dial->setWrapping(false);
        dial->setNotchTarget(10);
        dial->setNotchesVisible(true);

        horizontalLayout_2->addWidget(dial);

        LCDDisplay = new QLCDNumber(groupBox_4);
        LCDDisplay->setObjectName(QStringLiteral("LCDDisplay"));
        LCDDisplay->setSmallDecimalPoint(false);
        LCDDisplay->setDigitCount(3);
        LCDDisplay->setMode(QLCDNumber::Dec);
        LCDDisplay->setSegmentStyle(QLCDNumber::Filled);
        LCDDisplay->setProperty("value", QVariant(15));
        LCDDisplay->setProperty("intValue", QVariant(15));

        horizontalLayout_2->addWidget(LCDDisplay);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setMaximumSize(QSize(100, 16777215));
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        radioBtnDec = new QRadioButton(groupBox_5);
        radioBtnDec->setObjectName(QStringLiteral("radioBtnDec"));
        radioBtnDec->setChecked(true);

        verticalLayout_5->addWidget(radioBtnDec);

        radioBtnBin = new QRadioButton(groupBox_5);
        radioBtnBin->setObjectName(QStringLiteral("radioBtnBin"));

        verticalLayout_5->addWidget(radioBtnBin);

        radioBtnOct = new QRadioButton(groupBox_5);
        radioBtnOct->setObjectName(QStringLiteral("radioBtnOct"));

        verticalLayout_5->addWidget(radioBtnOct);

        radioBtnHex = new QRadioButton(groupBox_5);
        radioBtnHex->setObjectName(QStringLiteral("radioBtnHex"));

        verticalLayout_5->addWidget(radioBtnHex);


        horizontalLayout_2->addWidget(groupBox_5);


        verticalLayout_2->addWidget(groupBox_4);


        horizontalLayout->addLayout(verticalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 200));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        SliderV = new QSlider(groupBox_3);
        SliderV->setObjectName(QStringLiteral("SliderV"));
        SliderV->setMaximum(100);
        SliderV->setValue(10);
        SliderV->setOrientation(Qt::Vertical);
        SliderV->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_3->addWidget(SliderV);

        ScrollBarV = new QScrollBar(groupBox_3);
        ScrollBarV->setObjectName(QStringLiteral("ScrollBarV"));
        ScrollBarV->setMaximum(100);
        ScrollBarV->setSliderPosition(10);
        ScrollBarV->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(ScrollBarV);

        progBarV = new QProgressBar(groupBox_3);
        progBarV->setObjectName(QStringLiteral("progBarV"));
        progBarV->setValue(10);
        progBarV->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        progBarV->setTextVisible(false);
        progBarV->setOrientation(Qt::Vertical);
        progBarV->setInvertedAppearance(false);
        progBarV->setTextDirection(QProgressBar::BottomToTop);

        horizontalLayout_3->addWidget(progBarV);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        btnClose = new QPushButton(layoutWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setMaximumSize(QSize(80, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::On);
        btnClose->setIcon(icon);

        gridLayout->addWidget(btnClose, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(Widget);
        QObject::connect(btnClose, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\346\225\260\345\200\274\350\276\223\345\205\245\345\222\214\346\230\276\347\244\272Misc", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "Slider\345\222\214QColor", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "Red", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "Green", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "Blue", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "Alpha", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\346\260\264\345\271\263", Q_NULLPTR));
        progBarH->setFormat(QApplication::translate("Widget", "%p%", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Widget", "Dial\345\222\214LCDNUmber", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Widget", "LCD\346\230\276\347\244\272\350\277\233\345\210\266", Q_NULLPTR));
        radioBtnDec->setText(QApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        radioBtnBin->setText(QApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        radioBtnOct->setText(QApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266", Q_NULLPTR));
        radioBtnHex->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\345\236\202\347\233\264", Q_NULLPTR));
        btnClose->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
