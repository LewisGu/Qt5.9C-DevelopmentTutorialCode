#include "dialog.h"
#include "ui_dialog.h"

#include    <QDateTime>
#include    <QString>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    fTimer=new QTimer(this);  //创建定时器
    fTimer->stop();
    fTimer->setInterval(1000);//设置定时周期,单位：毫秒
    connect(fTimer,SIGNAL(timeout()),this,SLOT(on_timer_timeout())); //关联定时器的信号与槽
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_timer_timeout()
{ //定时器中断响应槽函数
    QTime curTime=QTime::currentTime(); //获取当前时间

    ui->LCDHour->display(curTime.hour()); //显示  小时

    ui->LCDMin->display(curTime.minute());//显示  分钟

    ui->LCDSec->display(curTime.second());//显示  秒

    int va=ui->progressBar->value(); //读取progressBar的数值
    va++;
    if (va>100)
        va=0;
    ui->progressBar->setValue(va); //设置progressBar的数值
}

void Dialog::on_btnGetTime_clicked()
{ //获取当前日期时间，为三个专用编辑器设置日期时间数据，并转换为字符串在LineEdit里显示
    QDateTime curDateTime=QDateTime::currentDateTime(); //读取当前日期时间

    ui->timeEdit->setTime(curDateTime.time()); //设置时间
    ui->editTime->setText(curDateTime.toString("hh:mm:ss"));//转换为字符串显示

    ui->dateEdit->setDate(curDateTime.date());//设置日期
    ui->editDate->setText(curDateTime.toString("yyyy-MM-dd"));//转换为字符串显示

    ui->dateTimeEdit->setDateTime(curDateTime);//设置日期时间
    ui->editDateTime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));//转换为字符串显示
}

void Dialog::on_calendarWidget_selectionChanged()
{ //在日历上选择日期
    QDate dt=ui->calendarWidget->selectedDate(); //读取选择的日期时间
    QString str=dt.toString("yyyy年M月d日");//转换为字符串
    ui->editCalendar->setText(str); //字符串显示日期
}

void Dialog::on_btnSetTime_clicked()
{ //字符串转换为QTime
    QString str=ui->editTime->text(); //读取字符串表示的时间
    //    str=str.trimmed();//去掉空格
    if (!str.isEmpty())
    {
        QTime tm=QTime::fromString(str,"hh:mm:ss"); //从字符串转换为QTime
        ui->timeEdit->setTime(tm); //设置时间
    }
}

void Dialog::on_btnSetDate_clicked()
{//字符串转换为 QDate
    QString str=ui->editDate->text(); //读取字符串表示的日期
//    str=str.trimmed();//去掉空格
    if (!str.isEmpty())
    {
        QDate dt=QDate::fromString(str,"yyyy-MM-dd");//从字符串转换为 QDate
        ui->dateEdit->setDate(dt);//设置日期
    }
}

void Dialog::on_btnSetDateTime_clicked()
{//字符串转换为 QDateTime
    QString str=ui->editDateTime->text();//读取字符串表示的日期
    str=str.trimmed();//去掉空格
    if (!str.isEmpty())
    {
        QDateTime datetime=QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss"); //从字符串转换为 QDateTime
        ui->dateTimeEdit->setDateTime(datetime);//设置日期时间
    }
}

void Dialog::on_btnSetIntv_clicked()
{ //设置定时器周期
    fTimer->setInterval(ui->spinBoxIntv->value()); //设置定时器的周期
}

void Dialog::on_btnStart_clicked()
{
    fTimer->start();//定时器开始工作
    fTimeCounter.start();//计时器开始工作
//更新各按键的状态
    ui->btnStart->setEnabled(false);
    ui->btnStop->setEnabled(true);
    ui->btnSetIntv->setEnabled(false);
}

void Dialog::on_btnStop_clicked()
{
    fTimer->stop(); //定时器停止

    int tmMsec=fTimeCounter.elapsed();//毫秒数
    int ms=tmMsec%1000; //余数毫秒
    int sec=tmMsec/1000; //整秒

    QString str=QString::asprintf("流逝时间：%d 秒，%d 毫秒",sec,ms);
    ui->LabElapsTime->setText(str); //显示流逝的时间

    ui->btnStart->setEnabled(true); //更新按键状态
    ui->btnStop->setEnabled(false);
    ui->btnSetIntv->setEnabled(true);
}
