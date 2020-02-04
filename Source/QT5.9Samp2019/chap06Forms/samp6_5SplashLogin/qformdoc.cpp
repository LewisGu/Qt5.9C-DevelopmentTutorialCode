#include "qformdoc.h"
#include "ui_qformdoc.h"

#include    <QVBoxLayout>
#include    <QFileDialog>
#include    <QFile>
#include    <QTextStream>
#include    <QFontDialog>

#include    <qwmainwindow.h>

QFormDoc::QFormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QFormDoc)
{
    ui->setupUi(this);

//设置plainTextEdit填充满工作区
    QVBoxLayout *Layout = new QVBoxLayout();
    Layout->addWidget(ui->plainTextEdit);
    Layout->setContentsMargins(2,2,2,2);
    Layout->setSpacing(2);
    this->setLayout(Layout);

    this->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    this->setAutoFillBackground(true); //避免工具栏显示背景图片
}

QFormDoc::~QFormDoc()
{
    delete ui;
}

void QFormDoc::loadFromFile(QString &aFileName)
{ //打开文件
    QFile aFile(aFileName);  //以文件方式读出
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text)) //以只读文本方式打开文件
    {
        QTextStream aStream(&aFile); //用文本流读取文件
        ui->plainTextEdit->clear();//清空
        ui->plainTextEdit->setPlainText(aStream.readAll());
        aFile.close();//关闭文件

        mCurrentFile=aFileName; //保存文件名
        emit  fileOpended(aFileName); //释放文件已打开信号
    }
}

QString QFormDoc::currentFileName()
{ //返回当前文件名
    return  mCurrentFile;
}

void QFormDoc::setEditFont()
{//设置字体
    QFont font=ui->plainTextEdit->font();

    bool    ok;
    font=QFontDialog::getFont(&ok,font);
    if (ok)
        ui->plainTextEdit->setFont(font);
}

void QFormDoc::textCut()
{//cut
    ui->plainTextEdit->cut();
}

void QFormDoc::textCopy()
{//copy
    ui->plainTextEdit->copy();
}

void QFormDoc::textPaste()
{//paste
    ui->plainTextEdit->paste();
}
