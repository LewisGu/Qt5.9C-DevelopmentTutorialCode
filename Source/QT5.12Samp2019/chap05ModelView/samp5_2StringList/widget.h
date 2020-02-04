#ifndef WIDGET_H
#define WIDGET_H

#include    <QWidget>
#include    <QStringListModel>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

private:
    QStringListModel   *theModel; //数据模型

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_listView_clicked(const QModelIndex &index); //单击事件，显示QModelIndex的内容

    void on_btnIniList_clicked(); //初始化列表

    void on_btnTextClear_clicked();//清除 PlainText 的内容

    void on_btnTextImport_clicked();//ListView 的内容导入到PlainText显示

    void on_btnListClear_clicked(); //清除 ListView

    void on_btnListAppend_clicked(); //添加一行

    void on_btnListInsert_clicked(); //插入一行

    void on_btnListDelete_clicked(); //删除当前行

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
