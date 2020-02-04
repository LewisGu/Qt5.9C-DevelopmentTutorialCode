/********************************************************************************
** Form generated from reading UI file 'qformdoc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFORMDOC_H
#define UI_QFORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFormDoc
{
public:
    QAction *actOpen;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFont;
    QAction *actClose;
    QAction *actUndo;
    QAction *actRedo;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *QFormDoc)
    {
        if (QFormDoc->objectName().isEmpty())
            QFormDoc->setObjectName(QStringLiteral("QFormDoc"));
        QFormDoc->resize(793, 439);
        QFont font;
        font.setPointSize(10);
        QFormDoc->setFont(font);
        actOpen = new QAction(QFormDoc);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actCut = new QAction(QFormDoc);
        actCut->setObjectName(QStringLiteral("actCut"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon1);
        actCopy = new QAction(QFormDoc);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon2);
        actPaste = new QAction(QFormDoc);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon3);
        actFont = new QAction(QFormDoc);
        actFont->setObjectName(QStringLiteral("actFont"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon4);
        actClose = new QAction(QFormDoc);
        actClose->setObjectName(QStringLiteral("actClose"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon5);
        actUndo = new QAction(QFormDoc);
        actUndo->setObjectName(QStringLiteral("actUndo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/206.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actUndo->setIcon(icon6);
        actRedo = new QAction(QFormDoc);
        actRedo->setObjectName(QStringLiteral("actRedo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/208.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRedo->setIcon(icon7);
        plainTextEdit = new QPlainTextEdit(QFormDoc);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(90, 45, 256, 192));

        retranslateUi(QFormDoc);
        QObject::connect(actClose, SIGNAL(triggered()), QFormDoc, SLOT(close()));
        QObject::connect(actCut, SIGNAL(triggered()), plainTextEdit, SLOT(cut()));
        QObject::connect(actCopy, SIGNAL(triggered()), plainTextEdit, SLOT(copy()));
        QObject::connect(actPaste, SIGNAL(triggered()), plainTextEdit, SLOT(paste()));
        QObject::connect(actUndo, SIGNAL(triggered()), plainTextEdit, SLOT(undo()));
        QObject::connect(actRedo, SIGNAL(triggered()), plainTextEdit, SLOT(redo()));

        QMetaObject::connectSlotsByName(QFormDoc);
    } // setupUi

    void retranslateUi(QWidget *QFormDoc)
    {
        QFormDoc->setWindowTitle(QApplication::translate("QFormDoc", "new document", Q_NULLPTR));
        actOpen->setText(QApplication::translate("QFormDoc", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("QFormDoc", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCut->setText(QApplication::translate("QFormDoc", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("QFormDoc", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("QFormDoc", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("QFormDoc", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("QFormDoc", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("QFormDoc", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("QFormDoc", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("QFormDoc", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("QFormDoc", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actFont->setText(QApplication::translate("QFormDoc", "\345\255\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("QFormDoc", "\350\256\276\347\275\256\345\255\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("QFormDoc", "\345\205\263\351\227\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("QFormDoc", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actUndo->setText(QApplication::translate("QFormDoc", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actUndo->setToolTip(QApplication::translate("QFormDoc", "\346\222\244\351\224\200\347\274\226\350\276\221\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actUndo->setShortcut(QApplication::translate("QFormDoc", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actRedo->setText(QApplication::translate("QFormDoc", "\351\207\215\345\244\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRedo->setToolTip(QApplication::translate("QFormDoc", "\351\207\215\345\244\215\347\274\226\350\276\221\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QFormDoc: public Ui_QFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFORMDOC_H
