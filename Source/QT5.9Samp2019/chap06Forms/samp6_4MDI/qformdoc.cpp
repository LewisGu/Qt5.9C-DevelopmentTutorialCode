#include "qformdoc.h"
#include "ui_qformdoc.h"

#include    <QVBoxLayout>
#include    <QFile>
#include    <QTextStream>
#include    <QFontDialog>
#include    <QFileInfo>
#include    <QMessageBox>

QFormDoc::QFormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QFormDoc)
{
    ui->setupUi(this);

    this->setWindowTitle("New Doc"); //窗口标题
    this->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
}

QFormDoc::~QFormDoc()
{
//    QMessageBox::information(this,"信息","文档窗口被释放");
    delete ui;
}

void QFormDoc::loadFromFile(QString &aFileName)
{//打开文件
    QFile aFile(aFileName);  //以文件方式读出
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text)) //以只读文本方式打开文件
    {
        QTextStream aStream(&aFile); //用文本流读取文件
        ui->plainTextEdit->clear();//清空
        ui->plainTextEdit->setPlainText(aStream.readAll()); //读取文本文件
        aFile.close();//关闭文件

        mCurrentFile=aFileName;//保存当前文件名
        QFileInfo   fileInfo(aFileName); //文件信息
        QString str=fileInfo.fileName(); //去除路径后的文件名
        this->setWindowTitle(str);
        mFileOpened=true;
    }
}

QString QFormDoc::currentFileName()
{
    return  mCurrentFile;
}

bool QFormDoc::isFileOpened()
{ //文件是否已打开
    return mFileOpened;
}

void QFormDoc::setEditFont()
{
    QFont   font;
    font=ui->plainTextEdit->font();

    bool    ok;
    font=QFontDialog::getFont(&ok,font);
    ui->plainTextEdit->setFont(font);
}

void QFormDoc::textCut()
{
    ui->plainTextEdit->cut();
}

void QFormDoc::textCopy()
{
    ui->plainTextEdit->copy();
}

void QFormDoc::textPaste()
{
    ui->plainTextEdit->paste();
}
