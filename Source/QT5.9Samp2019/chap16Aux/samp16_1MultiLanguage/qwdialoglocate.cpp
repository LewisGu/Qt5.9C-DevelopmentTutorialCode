#include "qwdialoglocate.h"
#include "ui_qwdialoglocate.h"

#include    <QCloseEvent>
//#include    "mainwindow.h"

void QWDialogLocate::closeEvent(QCloseEvent *event)
{ //窗口关闭 event,释放信号使 actTab_Locate 能用
    Q_UNUSED(event)
    emit changeActionEnable(true);
}

void QWDialogLocate::showEvent(QShowEvent *event)
{//窗口显示 event,释放信号使 actTab_Locate 不能用
    Q_UNUSED(event)
    emit changeActionEnable(false);
}

QWDialogLocate::QWDialogLocate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialogLocate)
{
    ui->setupUi(this);
}

QWDialogLocate::~QWDialogLocate()
{
    delete ui;
}


void QWDialogLocate::setSpinRange(int rowCount, int colCount)
{//设置SpinBox输入最大值
    ui->spinBoxRow->setMaximum(rowCount-1);
    ui->spinBoxColumn->setMaximum(colCount-1);
}

void QWDialogLocate::setSpinValue(int rowNo, int colNo)
{//响应主窗口信号，更新spinBox的值
    ui->spinBoxRow->setValue(rowNo);
    ui->spinBoxColumn->setValue(colNo);
}

void QWDialogLocate::on_btnSetText_clicked()
{//定位到单元格，并设置字符串
    int row=ui->spinBoxRow->value(); //行号
    int col=ui->spinBoxColumn->value();//列号
    QString text=ui->edtCaption->text();//文字

    emit changeCellText(row,col,text);//释放信号
    if (ui->chkBoxRow->isChecked()) //行增
        ui->spinBoxRow->setValue(1+ui->spinBoxRow->value());

    if (ui->chkBoxColumn->isChecked()) //列增
        ui->spinBoxColumn->setValue(1+ui->spinBoxColumn->value());
}
