#ifndef WDIALOGDATA_H
#define WDIALOGDATA_H

#include <QDialog>
#include    <QSqlRecord>

namespace Ui {
class WDialogData;
}

class WDialogData : public QDialog
{
    Q_OBJECT

private:
    QSqlRecord  mRecord; //保存一条记录的数据

public:
    explicit WDialogData(QWidget *parent = 0);
    ~WDialogData();

    void    setUpdateRecord(QSqlRecord &recData); //更新记录
    void    setInsertRecord(QSqlRecord &recData); //插入记录

    QSqlRecord  getRecordData();//获取录入的数据

private slots:
    void on_btnClearPhoto_clicked(); //清理照片

    void on_btnSetPhoto_clicked(); //设置照片

private:
    Ui::WDialogData *ui;
};

#endif // WDIALOGDATA_H
