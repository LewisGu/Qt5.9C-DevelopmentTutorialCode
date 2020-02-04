#ifndef QFORMTABLE_H
#define QFORMTABLE_H

#include <QMainWindow>

#include    <QStandardItemModel>

#include    <QItemSelectionModel>

#include    "qwdialogheaders.h"
#include    "qwdialogsize.h"

namespace Ui {
class QFormTable;
}

class QFormTable : public QMainWindow
{
    Q_OBJECT

private:
    QWDialogHeaders *dlgSetHeaders=NULL;//设置表头文字对话框, 一次创建，exec()重复调用

    QStandardItemModel  *theModel;//数据模型
    QItemSelectionModel *theSelection;//Item选择模型

public:
    explicit QFormTable(QWidget *parent = 0);
    ~QFormTable();

private slots:
    void on_actSize_triggered();

    void on_actSetHeader_triggered();

private:
    Ui::QFormTable *ui;
};

#endif // QFORMTABLE_H
