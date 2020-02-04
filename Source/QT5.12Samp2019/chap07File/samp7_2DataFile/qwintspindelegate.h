#ifndef QWINTSPINDELEGATE_H
#define QWINTSPINDELEGATE_H

#include    <QStyledItemDelegate>

class QWIntSpinDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    QWIntSpinDelegate(QObject *parent=0);

//自定义代理组件必须继承以下4个函数

//创建编辑组件
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const Q_DECL_OVERRIDE;

//从数据模型获取数据，显示到代理组件中
    void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;

//将代理组件的数据，保存到数据模型中
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const Q_DECL_OVERRIDE;

//更新代理编辑组件的大小
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const Q_DECL_OVERRIDE;
};

#endif // QWINTSPINDELEGATE_H
