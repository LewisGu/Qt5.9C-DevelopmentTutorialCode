#include "qwdialoglocate.h"
#include "ui_qwdialoglocate.h"

#include    <QCloseEvent>
#include    "mainwindow.h"
#include    <QMessageBox>

void QWDialogLocate::closeEvent(QCloseEvent *event)
{ //窗口关闭事件，关闭时释放本窗口
    MainWindow *parWind = (MainWindow*)parentWidget(); //获取父窗口指针
    parWind->setActLocateEnable(true);//使能 actTab_Locate
    parWind->setDlgLocateNull(); //将窗口指针设置为NULL
}

void QWDialogLocate::showEvent(QShowEvent *event)
{//窗口显示事件
    MainWindow *parWind = (MainWindow*)parentWidget();//获取
    parWind->setActLocateEnable(false);
}

QWDialogLocate::QWDialogLocate(QWidget *parent) :
    QDialog(parent), ui(new Ui::QWDialogLocate)
{//构造函数
    ui->setupUi(this);
}

QWDialogLocate::~QWDialogLocate()
{//析构函数
    QMessageBox::information(this,"提示","单元格定位对话框被删除");
    delete ui;
}


void QWDialogLocate::setSpinRange(int rowCount, int colCount)
{//设置SpinBox输入最大值
    ui->spinBoxRow->setMaximum(rowCount-1);
    ui->spinBoxColumn->setMaximum(colCount-1);
}

void QWDialogLocate::setSpinValue(int rowNo, int colNo)
{//设置SpinBox数值
    ui->spinBoxRow->setValue(rowNo);
    ui->spinBoxColumn->setValue(colNo);
}

void QWDialogLocate::on_btnSetText_clicked()
{//定位到单元格，并设置字符串
    int row=ui->spinBoxRow->value(); //行号
    int col=ui->spinBoxColumn->value();//列号

    MainWindow *parWind = (MainWindow*)parentWidget(); //获取主窗口
    parWind->setACellText(row,col,ui->edtCaption->text()); //设置单元格文字
    if (ui->chkBoxRow->isChecked()) //行增
        ui->spinBoxRow->setValue(1+ui->spinBoxRow->value());

    if (ui->chkBoxColumn->isChecked()) //列增
        ui->spinBoxColumn->setValue(1+ui->spinBoxColumn->value());
}
