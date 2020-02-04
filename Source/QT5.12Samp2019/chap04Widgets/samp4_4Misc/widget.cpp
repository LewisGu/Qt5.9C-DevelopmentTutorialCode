#include "widget.h"
#include "ui_widget.h"

#include    <QString>
#include    <QPalette>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->horizontalLayout);  //设置窗口的主布局组件

    QObject::connect(ui->SliderGreen,SIGNAL(valueChanged(int)),  //关联 SliderGreen 的valueChanged()
                     this,SLOT(on_SliderRed_valueChanged(int)));

    QObject::connect(ui->SliderBlue,SIGNAL(valueChanged(int)), //关联 SliderBlue的valueChanged()
                     this,SLOT(on_SliderRed_valueChanged(int)));

    QObject::connect(ui->SliderAlpha,SIGNAL(valueChanged(int)),  //关联 SliderAlpha的valueChanged()
                     this,SLOT(on_SliderRed_valueChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_SliderV_valueChanged(int value)
{
    ui->progBarV->setValue(value);
    ui->ScrollBarV->setValue(value);
    //    ui->progBarH->setValue(value);
}

void Widget::on_dial_valueChanged(int value)
{  //设置LCD的显示值等于Dial的值
    ui->LCDDisplay->display(value);
}

void Widget::on_radioBtnDec_clicked()
{ //设置LCD显示十进制数
    ui->LCDDisplay->setDigitCount(3);
    ui->LCDDisplay->setDecMode();
}

void Widget::on_radioBtnBin_clicked()
{ //设置LCD显示二进制数
    ui->LCDDisplay->setDigitCount(8);
    ui->LCDDisplay->setBinMode();
}

void Widget::on_radioBtnOct_clicked()
{ //设置LCD显示八进制数
    ui->LCDDisplay->setDigitCount(4);
    ui->LCDDisplay->setOctMode();
}

void Widget::on_radioBtnHex_clicked()
{ //设置LCD显示十六进制数
    ui->LCDDisplay->setDigitCount(3);
    ui->LCDDisplay->setHexMode();
}

void Widget::on_SliderH_valueChanged(int value)
{
    ui->progBarH->setValue(value); //
    ui->ScrollBarH->setValue(value);//
}

void Widget::on_ScrollBarV_sliderMoved(int position)
{
    ui->progBarV->setValue(position);
}


void Widget::on_ScrollBarH_sliderMoved(int position)
{
    ui->progBarH->setValue(position);
}

void Widget::on_SliderRed_valueChanged(int value)
{  //拖动Red、Green、Blue 颜色滑动条时设置textEdit的底色
    Q_UNUSED(value);
    QColor  color;
    int R=ui->SliderRed->value();  //读取SliderRed的当前值
    int G=ui->SliderGreen->value();//读取 SliderGreen 的当前值
    int B=ui->SliderBlue->value();//读取 SliderBlue 的当前值
    int alpha=ui->SliderAlpha->value();//读取 SliderAlpha 的当前值
    color.setRgb(R,G,B,alpha); //使用QColor的setRgb()函数 获得颜色

    QPalette pal=ui->textEdit->palette();//获取textEdit原有的 palette
    pal.setColor(QPalette::Base,color); //设置palette的基色（即背景色）

    ui->textEdit->setPalette(pal);//设置为textEdit的palette,改变textEdit的底色
}
