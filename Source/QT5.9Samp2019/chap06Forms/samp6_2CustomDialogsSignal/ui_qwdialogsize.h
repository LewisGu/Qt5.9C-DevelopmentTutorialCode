/********************************************************************************
** Form generated from reading UI file 'qwdialogsize.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGSIZE_H
#define UI_QWDIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_QWDialogSize
{
public:
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *spinBoxColumn;
    QLabel *label;
    QSpinBox *spinBoxRow;
    QSpacerItem *verticalSpacer;
    QPushButton *btnCancel;
    QPushButton *btnOK;

    void setupUi(QDialog *QWDialogSize)
    {
        if (QWDialogSize->objectName().isEmpty())
            QWDialogSize->setObjectName(QStringLiteral("QWDialogSize"));
        QWDialogSize->setWindowModality(Qt::NonModal);
        QWDialogSize->resize(273, 120);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QWDialogSize->sizePolicy().hasHeightForWidth());
        QWDialogSize->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        QWDialogSize->setFont(font);
        QWDialogSize->setSizeGripEnabled(false);
        QWDialogSize->setModal(false);
        groupBox = new QGroupBox(QWDialogSize);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 171, 101));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QStringLiteral("spinBoxColumn"));
        spinBoxColumn->setMinimum(1);
        spinBoxColumn->setMaximum(500);
        spinBoxColumn->setValue(6);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxColumn);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QStringLiteral("spinBoxRow"));
        spinBoxRow->setMinimum(1);
        spinBoxRow->setMaximum(500);
        spinBoxRow->setValue(10);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxRow);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        btnCancel = new QPushButton(QWDialogSize);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(190, 80, 75, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon);
        btnOK = new QPushButton(QWDialogSize);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(190, 20, 75, 24));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon1);

        retranslateUi(QWDialogSize);
        QObject::connect(btnOK, SIGNAL(clicked()), QWDialogSize, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialogSize, SLOT(reject()));

        QMetaObject::connectSlotsByName(QWDialogSize);
    } // setupUi

    void retranslateUi(QDialog *QWDialogSize)
    {
        QWDialogSize->setWindowTitle(QApplication::translate("QWDialogSize", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QWDialogSize", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("QWDialogSize", "\345\210\227  \346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("QWDialogSize", "\350\241\214  \346\225\260", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QWDialogSize", "\345\217\226\346\266\210", Q_NULLPTR));
        btnOK->setText(QApplication::translate("QWDialogSize", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialogSize: public Ui_QWDialogSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGSIZE_H
