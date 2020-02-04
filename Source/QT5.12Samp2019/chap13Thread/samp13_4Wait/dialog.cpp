#include "dialog.h"
#include "ui_dialog.h"

void Dialog::closeEvent(QCloseEvent *event)
{//关闭窗口
    if (threadProducer.isRunning())
    {
        threadProducer.stopThread();
        threadProducer.wait();
    }

    if (threadConsumer.isRunning())
    {
        threadConsumer.terminate(); //因为threadB可能处于等待状态，所以用terminate强制结束
        threadConsumer.wait();//
    }
    event->accept();
}

Dialog::Dialog(QWidget *parent) :  QDialog(parent),    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(&threadProducer,SIGNAL(started()),this,SLOT(onthreadA_started()));
    connect(&threadProducer,SIGNAL(finished()),this,SLOT(onthreadA_finished()));

    connect(&threadConsumer,SIGNAL(started()),this,SLOT(onthreadB_started()));
    connect(&threadConsumer,SIGNAL(finished()),this,SLOT(onthreadB_finished()));

    connect(&threadConsumer,SIGNAL(newValue(int,int)),this,SLOT(onthreadB_newValue(int,int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onthreadA_started()
{
    ui->LabA->setText("Thread Producer状态: started");
}

void Dialog::onthreadA_finished()
{
    ui->LabA->setText("Thread Producer状态: finished");
}

void Dialog::onthreadB_started()
{
    ui->LabB->setText("Thread Consumer状态: started");
}

void Dialog::onthreadB_finished()
{
    ui->LabB->setText("Thread Consumer状态: finished");
}

void Dialog::onthreadB_newValue(int seq,int diceValue)
{
    QString  str=QString::asprintf("第 %d 次掷骰子，点数为：%d",
                                   seq,diceValue);
    ui->plainTextEdit->appendPlainText(str);

    QPixmap pic;
    QString filename=QString::asprintf(":/dice/images/d%d.jpg",diceValue);
    pic.load(filename);
    ui->LabPic->setPixmap(pic);
}


void Dialog::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}

void Dialog::on_btnStopThread_clicked()
{//结束线程
    threadProducer.stopThread();//结束线程的run()函数执行
    threadProducer.wait();//

//    threadConsumer.stopThread();//结束线程的run()函数执行
    threadConsumer.terminate(); //因为threadB可能处于等待状态，所以用terminate强制结束
    threadConsumer.wait();//

    ui->btnStartThread->setEnabled(true);
    ui->btnStopThread->setEnabled(false);
}

void Dialog::on_btnStartThread_clicked()
{//启动线程
    threadConsumer.start();
    threadProducer.start();

    ui->btnStartThread->setEnabled(false);
    ui->btnStopThread->setEnabled(true);
}
