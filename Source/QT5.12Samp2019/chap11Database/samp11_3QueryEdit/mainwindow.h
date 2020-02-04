#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include    <QLabel>
#include    <QString>

#include    <QtSql>
#include    <QDataWidgetMapper>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QSqlDatabase  DB; //数据库

    QSqlQueryModel  *qryModel; //数据库模型

    QItemSelectionModel *theSelection; //选择模型

    void    openTable();//打开数据表

    void    updateRecord(int recNo); //更新记录
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

// QTableView的SelectionModel的行发生了变化，进行处理
//    void on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);
///////////////////////
    void on_actOpenDB_triggered();

    void on_actRecInsert_triggered();

    void on_actRecDelete_triggered();

    void on_actRecEdit_triggered();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_actScan_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
