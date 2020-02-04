#include "widget.h"
#include "ui_widget.h"

void Widget::defense(QString weapon)
{
    QUrl   url=QUrl::fromLocalFile(appPath+"/sound/"+weapon);
    player1->setSource(url);
    player1->play();
}

void Widget::attack(QString weapon)
{
    QString filename=appPath+"/sound/"+weapon;
//    player2->setSource(url);
    QSound::play(filename);
}

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    appPath=QCoreApplication::applicationDirPath();//  无“/”

    player1=new QSoundEffect;
    player1->setLoopCount(3);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    defense("Ak7.wav");
}

void Widget::on_pushButton_2_clicked()
{
    defense("machinegun.wav");
}

void Widget::on_pushButton_5_clicked()
{
    attack("Ak7.wav");
}

void Widget::on_pushButton_6_clicked()
{
    attack("machinegun.wav");
}

void Widget::on_pushButton_8_clicked()
{
    attack("blast.wav");
}

void Widget::on_pushButton_12_clicked()
{
    attack("tank.wav");
}

void Widget::on_pushButton_11_clicked()
{
    attack("mine.wav");
}

void Widget::on_pushButton_9_clicked()
{
    defense("shell.wav");
}

void Widget::on_pushButton_4_clicked()
{
    defense("blast.wav");
}

void Widget::on_pushButton_10_clicked()
{
    defense("blast2.wav");
}

void Widget::on_pushButton_3_clicked()
{
     defense("fire.wav");
}

void Widget::on_pushButton_7_clicked()
{
    attack("fire2.wav");
}
