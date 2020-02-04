#ifndef DIALOG_H
#define DIALOG_H

#include    <QDialog>
#include    <QTimer>
#include    <QTime>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QTimer *fTimer;  //定时器

    QTime   fTimeCounter;//计时器

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_timer_timeout(); //定时器中断处理槽函数,手工定义


    void on_btnGetTime_clicked();//读取当前时间

    void on_calendarWidget_selectionChanged(); //Calender 选择日期

    void on_btnSetTime_clicked();  // 读取当前日期时间  按键

    void on_btnSetDate_clicked(); //设置日期  按键

    void on_btnSetDateTime_clicked();   //设置日期时间案件

    void on_btnSetIntv_clicked();   //设置周期  按键

    void on_btnStart_clicked();  //开始 定时器 按键

    void on_btnStop_clicked();      //停止定时器按键

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
