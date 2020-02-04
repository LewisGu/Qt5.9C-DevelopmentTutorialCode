#include    "widget.h"
#include    "ui_widget.h"
#include    <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//“数量”和“单价”两个SpinBox的valueChanged()信号与on_btnCal_clicked()槽关联
    QObject::connect(ui->spinNum,SIGNAL(valueChanged(int)),this,SLOT(on_btnCal_clicked()));  //
    QObject::connect(ui->spinPrice,SIGNAL(valueChanged(double)),this,SLOT(on_btnCal_clicked()));

    QObject::connect(ui->spinDec,SIGNAL(valueChanged(int)),
                     this,SLOT(on_btnDec_clicked()));//spinDec 十进制显示的SpinBox

    QObject::connect(ui->spinBin,SIGNAL(valueChanged(int)),
                     this,SLOT(on_btnBin_clicked()));//spinBin 二进制显示的SpinBox

    QObject::connect(ui->spinHex,SIGNAL(valueChanged(int)),
                     this,SLOT(on_btnHex_clicked()));//spinHex 十六进制显示的SpinBox
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnCal_clicked()
{ //计算按键
    int num=ui->spinNum->value(); //读取数量，直接是整数
    float price=ui->spinPrice->value();//读取单价，直接是浮点数
    float total=num*price;//相乘计算
    ui->spinTotal->setValue(total); //直接显示浮点数
}


void Widget::on_btnDec_clicked()
{ //读取十进制，以其他进制显示
    int val;
    val=ui->spinDec->value();//读取十进制数
    ui->spinBin->setValue(val); //设置数值即可，自动以二进制显示
    ui->spinHex->setValue(val); //设置数值即可，自动以十六进制显示
}

void Widget::on_btnBin_clicked()
{ //读取二进制，以其他进制显示
    int val=ui->spinBin->value();//读取spinBin里的二进制数，得到整数
    ui->spinDec->setValue(val);//设置数值即可，自动以十进制显示
    ui->spinHex->setValue(val);//设置数值即可，自动以十六进制显示
}

void Widget::on_btnHex_clicked()
{ //读取十六进制，以其他进制显示
    int val;
    val=ui->spinHex->value();//读取 spinHex 里的十六进制数，得到整数
    ui->spinDec->setValue(val);//设置数值即可，自动以十进制显示
    ui->spinBin->setValue(val);//设置数值即可，自动以二进制显示
}

