#include "widget.h"
#include "ui_widget.h"
#include    <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnCal_clicked()
{ //计算 按键单击响应
    int num=ui->editNum->text().toInt(); //读取字符串为整数
    float price=ui->editPrice->text().toFloat();//读取字符串为浮点数

    float total=num*price;//相乘计算
    QString str;
//    str=str.setNum(total,'f',2); //浮点数2位小数
    str=str.sprintf("%.2f",total); //格式化输出浮点数
    ui->editTotal->setText(str);//在文本框里显示
}

void Widget::on_btnDec_clicked()
{ //读取十进制数，转换为其他进制
    int val=ui->editDec->text().toInt();//读取十进制数
    QString str=QString::number(val,16);// 显示为16进制 的字符串

    str=str.toUpper(); //转换为全大写字母
    ui->editHex->setText(str);//显示16进制字符串

    str=QString::number(val,2);// 显示2进制的字符串
    ui->editBin->setText(str);//显示二进制字符串
}

void Widget::on_btnBin_clicked()
{ //读取二进制数，转换为其他进制的数
    bool ok;

    int val=ui->editBin->text().toInt(&ok,2);//以二进制数读入

    QString str=QString::number(val,10);//数字显示为10进制字符串
    ui->editDec->setText(str);//显示10进制数字符串

    str=QString::number(val,16);//显示为十六进制字符串
    str=str.toUpper(); //全大写字母
    ui->editHex->setText(str);//显示十六进制字符串
}

void Widget::on_btnHex_clicked()
{//读取16进制数，转换为其他进制的数
    bool ok;

    int val=ui->editHex->text().toInt(&ok,16);//以十六进制数读入
    QString str=QString::number(val,10);// 显示为10进制字符串
    ui->editDec->setText(str);//显示为10进制字符串

    str=QString::number(val,2);// 显示二进制字符串
    ui->editBin->setText(str);//显示二进制字符串
}

