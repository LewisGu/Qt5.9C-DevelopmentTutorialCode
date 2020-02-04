/********************************************************************************
** Form generated from reading UI file 'qwdialogsize.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGSIZE_H
#define UI_QWDIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_QWDialogSize
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *spinBoxColumn;
    QLabel *label;
    QSpinBox *spinBoxRow;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *QWDialogSize)
    {
        if (QWDialogSize->objectName().isEmpty())
            QWDialogSize->setObjectName(QString::fromUtf8("QWDialogSize"));
        QWDialogSize->setWindowModality(Qt::NonModal);
        QWDialogSize->resize(269, 114);
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
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 171, 91));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QString::fromUtf8("spinBoxColumn"));
        spinBoxColumn->setMinimum(1);
        spinBoxColumn->setMaximum(500);
        spinBoxColumn->setValue(6);

        gridLayout->addWidget(spinBoxColumn, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));
        spinBoxRow->setMinimum(1);
        spinBoxRow->setMaximum(500);
        spinBoxRow->setValue(10);

        gridLayout->addWidget(spinBoxRow, 1, 1, 1, 1);

        btnOK = new QPushButton(QWDialogSize);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(190, 19, 75, 24));
        btnOK->setMaximumSize(QSize(100, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon);
        btnCancel = new QPushButton(QWDialogSize);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(190, 60, 75, 24));
        btnCancel->setMaximumSize(QSize(100, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        retranslateUi(QWDialogSize);
        QObject::connect(btnOK, SIGNAL(clicked()), QWDialogSize, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialogSize, SLOT(reject()));

        QMetaObject::connectSlotsByName(QWDialogSize);
    } // setupUi

    void retranslateUi(QDialog *QWDialogSize)
    {
        QWDialogSize->setWindowTitle(QApplication::translate("QWDialogSize", "\350\241\250\346\240\274\345\244\247\345\260\217\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QApplication::translate("QWDialogSize", "\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
        label_2->setText(QApplication::translate("QWDialogSize", "\345\210\227  \346\225\260", nullptr));
        label->setText(QApplication::translate("QWDialogSize", "\350\241\214  \346\225\260", nullptr));
        btnOK->setText(QApplication::translate("QWDialogSize", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QApplication::translate("QWDialogSize", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialogSize: public Ui_QWDialogSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGSIZE_H
