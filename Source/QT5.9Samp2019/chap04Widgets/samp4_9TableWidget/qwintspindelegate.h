#ifndef QWINTSPINDELEGATE_H
#define QWINTSPINDELEGATE_H

#include    <QObject>
#include    <QWidget>
#include    <QItemDelegate>

class QWIntSpinDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    QWIntSpinDelegate(QObject *parent=0);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const Q_DECL_OVERRIDE;

    void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const Q_DECL_OVERRIDE;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const Q_DECL_OVERRIDE;
};

#endif // QWINTSPINDELEGATE_H
