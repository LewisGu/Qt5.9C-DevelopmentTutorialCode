#include "qwintspindelegate.h"

#include    <QSpinBox>

QWIntSpinDelegate::QWIntSpinDelegate(QObject *parent):QStyledItemDelegate(parent)
{

}

QWidget *QWIntSpinDelegate::createEditor(QWidget *parent,
   const QStyleOptionViewItem &option, const QModelIndex &index) const
{ //创建代理编辑组件
    Q_UNUSED(option);
    Q_UNUSED(index);

    QSpinBox *editor = new QSpinBox(parent); //创建一个QSpinBox
    editor->setFrame(false); //设置为无边框
    editor->setMinimum(0);
    editor->setMaximum(10000);

    return editor;  //返回此编辑器
}

void QWIntSpinDelegate::setEditorData(QWidget *editor,
                      const QModelIndex &index) const
{//从数据模型获取数据，显示到代理组件中
//获取数据模型的模型索引指向的单元的数据
    int value = index.model()->data(index, Qt::EditRole).toInt();

    QSpinBox *spinBox = static_cast<QSpinBox*>(editor);  //强制类型转换
    spinBox->setValue(value); //设置编辑器的数值
}

void QWIntSpinDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{ //将代理组件的数据，保存到数据模型中
    QSpinBox *spinBox = static_cast<QSpinBox*>(editor); //强制类型转换
    spinBox->interpretText(); //解释数据，如果数据被修改后，就触发信号
    int value = spinBox->value(); //获取spinBox的值

    model->setData(index, value, Qt::EditRole); //更新到数据模型
}

void QWIntSpinDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{ //设置组件大小
    Q_UNUSED(index);
    editor->setGeometry(option.rect);
}
