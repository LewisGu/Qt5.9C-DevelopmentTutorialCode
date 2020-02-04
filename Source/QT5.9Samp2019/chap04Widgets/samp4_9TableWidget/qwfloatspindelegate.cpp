#include "qwfloatspindelegate.h"

#include  <QDoubleSpinBox>

QWFloatSpinDelegate::QWFloatSpinDelegate(QObject *parent):QItemDelegate(parent)
{

}

QWidget *QWFloatSpinDelegate::createEditor(QWidget *parent,
   const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QDoubleSpinBox *editor = new QDoubleSpinBox(parent);
    editor->setFrame(false);
    editor->setMinimum(0);
    editor->setDecimals(2);
    editor->setMaximum(10000);

    return editor;
}

void QWFloatSpinDelegate::setEditorData(QWidget *editor,
                      const QModelIndex &index) const
{
    float value = index.model()->data(index, Qt::EditRole).toFloat();
    QDoubleSpinBox *spinBox = static_cast<QDoubleSpinBox*>(editor);
    spinBox->setValue(value);
}

void QWFloatSpinDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QDoubleSpinBox *spinBox = static_cast<QDoubleSpinBox*>(editor);
    spinBox->interpretText();
    float value = spinBox->value();
    QString str=QString::asprintf("%.2f",value);

    model->setData(index, str, Qt::EditRole);
}

void QWFloatSpinDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}
