#include "widget.h"
#include "ui_widget.h"

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

void Widget::on_pushButton_clicked()
{//append()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();
    str1.append(str2);

    ui->edtResult->setText(str1);
}

void Widget::on_pushButton_2_clicked()
{//prepend()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();
    str1.prepend(str2);

    ui->edtResult->setText(str1);
}

void Widget::on_pushButton_3_clicked()
{//contains()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();

    bool chk;
    chk=str1.contains(str2);
    ui->checkBox->setChecked(chk);
    ui->checkBox->setText("contains()");
    ui->checkBox->sizeHint();
}

void Widget::on_pushButton_4_clicked()
{//count()函数
    QString str1=ui->comboBox1->currentText();
    int i=str1.count();
//    int i=str1.length();
    ui->spinBox->setValue(i);
    ui->LabSpin->setText("count()");
}

void Widget::on_pushButton_5_clicked()
{//size()函数
    QString str1;
    str1=ui->comboBox1->currentText();
    int i=str1.size();
    ui->spinBox->setValue(i);
    ui->LabSpin->setText("size()");

}

void Widget::on_pushButton_6_clicked()
{//endsWith()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();

    bool chk;
    chk=str1.endsWith(str2);
    ui->checkBox->setChecked(chk);
    ui->checkBox->setText("endsWith()");
    ui->checkBox->sizeHint();
}

void Widget::on_pushButton_7_clicked()
{//indexOf()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();

    int i;
    i=str1.indexOf(str2);
    ui->spinBox->setValue(i);
    ui->LabSpin->setText("indexOf()");
}

void Widget::on_pushButton_8_clicked()
{//isEmpty()函数
    QString str1;
    str1=ui->comboBox1->currentText();
    bool chk;
    chk=str1.isEmpty();
    ui->checkBox->setChecked(chk);
    ui->checkBox->setText("isEmpty()");
    ui->checkBox->sizeHint();
}

void Widget::on_pushButton_9_clicked()
{//lastIndexOf()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();

    int i;
    i=str1.lastIndexOf(str2);
    ui->spinBox->setValue(i);
    ui->LabSpin->setText("lastIndexOf()");
}

void Widget::on_pushButton_10_clicked()
{//startsWith()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();

    bool chk;
    chk=str1.startsWith(str2);
    ui->checkBox->setChecked(chk);
    ui->checkBox->setText("startsWith()");
    ui->checkBox->sizeHint();
}

void Widget::on_pushButton_11_clicked()
{//toUpper()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=str1.toUpper();

    ui->edtResult->setText(str2);
}

void Widget::on_pushButton_12_clicked()
{//toLower()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=str1.toLower();

    ui->edtResult->setText(str2);
}

void Widget::on_pushButton_13_clicked()
{//trimmed()函数
    QString str1;
    str1=ui->comboBox1->currentText();
    str1=str1.trimmed();

    ui->edtResult->setText(str1);

}

void Widget::on_pushButton_14_clicked()
{//section()函数
    int i;
    QString str1,str2,str3;
    str1=ui->comboBox1->currentText();
    i=ui->spinBox->value();
//    str2=str1.section('\\',2,2);
    str3=ui->comboBox2->currentText();
    if (QString::compare(str3,"\\",Qt::CaseInsensitive)==0)
        str2=str1.section('\\',i,i+1); //
    else
        str2=str1.section(str3,i,i+1); //

    ui->edtResult->setText(str2);
}

void Widget::on_pushButton_15_clicked()
{//left()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    int v=ui->spinBox->value();
    str2=str1.left(v);
    ui->edtResult->setText(str2);
}

void Widget::on_pushButton_16_clicked()
{//right()函数
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    int cnt=str1.size();
    int v=ui->spinBox->value();
    str2=str1.right(cnt-v-1);
    ui->edtResult->setText(str2);
}

void Widget::on_pushButton_17_clicked()
{//simplified()函数
    QString str1;
    str1=ui->comboBox1->currentText();
    str1=str1.simplified();
    ui->edtResult->setText(str1);
}

void Widget::on_pushButton_18_clicked()
{//isNull()函数
    QString str1;
    str1=ui->comboBox1->currentText();
    bool chk;
    chk=str1.isNull();
    ui->checkBox->setChecked(chk);
    ui->checkBox->setText("isNull()");
    ui->checkBox->sizeHint();
}
