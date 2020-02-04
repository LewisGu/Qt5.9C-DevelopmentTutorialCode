#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QDir>
#include    <QFileDialog>
#include    <QTextStream>
#include    <QTextDocument>
#include    <QTextBlock>

//bool MainWindow::openTextByIODevice(const QString &aFileName)
//{
//    QFile   aFile;
//    aFile.setFileName(aFileName);

//    if (!aFile.exists())
//        return false;

//    if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
//        return false;

//    QString str;
//    ui->plainTextEdit->clear();
//    while (!aFile.atEnd()) {
//        QByteArray line = aFile.readLine();//自动添加 \n

//        str=QString::fromLocal8Bit(line);
////        str=QString::fromUtf8(line);
////        str=QString::fromLatin1(line);  // 结尾有 \n，多加了一行
//        str.truncate(str.length()-1); //去除结尾增加的空行
//        ui->plainTextEdit->appendPlainText(str);
//    }
//    aFile.close();
//    m_curTextFile=aFileName;
//    ui->tabWidget->setCurrentIndex(0);

//    return  true;
//}

//bool MainWindow::openTextByStream(const QString &aFileName)
//{
//    QFile   aFile;
//    aFile.setFileName(aFileName);

//    if (!aFile.exists())
//        return false;

//    if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
//        return false;

//    QString str;
//    QTextStream aStream(&aFile); //用文本流读取文件
//    aStream.setAutoDetectUnicode(true); //自动检测Unicode,才能正常显示文档内的汉字
////    aStream.setCodec();
//    ui->plainTextEdit->clear();//清空
//    while (!aStream.atEnd())
//    {
//        str=aStream.readLine();//读取文件的一行
//        ui->plainTextEdit->appendPlainText(str); //添加到文本框显示
//    }
//    aFile.close();//关闭文件

//    m_curTextFile=aFileName;
//    ui->tabWidget->setCurrentIndex(0);
//    return  true;
//}

//bool MainWindow::saveTextByIODevice(const QString &aFileName)
//{
//    QFile   aFile;
//    aFile.setFileName(aFileName);

//    if (!aFile.open(QIODevice::WriteOnly | QIODevice::Text))
//        return false;

//    QString str=ui->plainTextEdit->toPlainText();//整个内容作为字符串

//    QByteArray  strBytes=str.toUtf8();
////    QByteArray  strBytes=str.toLocal8Bit();

//    aFile.write(strBytes,strBytes.length());
////    aFile.flush();

//    aFile.close();
////    m_curTextFile=aFileName;
////    ui->tabWidget->setCurrentIndex(0);
//    return  true;
//}

//bool MainWindow::saveTextByStream(const QString &aFileName)
//{
//    QFile   aFile;
//    aFile.setFileName(aFileName);

//    if (!aFile.open(QIODevice::WriteOnly | QIODevice::Text))
//        return false;

//    QTextStream aStream(&aFile); //用文本流读取文件
//    aStream.setAutoDetectUnicode(true); //自动检测Unicode,才能正常显示文档内的汉字

//    QTextDocument   *doc;       //文本对象
//    QTextBlock      textLine;   //文本中的一段
//    doc=ui->plainTextEdit->document(); //QPlainTextEdit 的内容保存在一个 QTextDocument 里
//    int cnt=doc->blockCount();//QTextDocument分块保存内容，文本文件就是硬回车符是一个block,

//    QString str;
//    for (int i=0; i<cnt; i++) //扫描所有 blobk
//    {
//         textLine=doc->findBlockByNumber(i);//用blobk编号获取block，就是获取一行
//         str=textLine.text(); //转换为文本,末尾无\n
//         aStream<<str<<"\n";
//    }

//    aFile.close();//关闭文件

//    return  true;

//}

bool MainWindow::openDatabyStream(const QString &aFileName)
{
//    QFile   aFile;
//    aFile.setFileName(aFileName);

//    if (!aFile.exists())
//        return false;

//    if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
//        return false;

//    QString str;
//    QTextStream aStream(&aFile); //用文本流读取文件
//    aStream.setAutoDetectUnicode(true); //自动检测Unicode,才能正常显示文档内的汉字
////    aStream.setCodec();
//    ui->plainTextEdit->clear();//清空
//    while (!aStream.atEnd())
//    {
//        str=aStream.readLine();//读取文件的一行
//        ui->plainTextEdit->appendPlainText(str); //添加到文本框显示
//    }
//    aFile.close();//关闭文件

////    m_curTextFile=aFileName;
//    ui->tabWidget->setCurrentIndex(0);
//    return  true;

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::on_actOpen_IODevice_triggered()
//{
//    QString curPath=QDir::currentPath();//获取系统当前目录
////  QString  curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径
//    QString dlgTitle="打开一个文件"; //对话框标题
//    QString filter="程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)"; //文件过滤器

//    QString aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);

//    if (aFileName.isEmpty())
//        return;

//    openTextByIODevice(aFileName);
////    ui->plainTextEdit->appendPlainText(aFileName);

//}

//void MainWindow::on_actOpen_TextStream_triggered()
//{
////    QString curPath,aFileName;
////    curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径
//    QString curPath=QDir::currentPath();//获取系统当前目录
////调用打开文件对话框打开一个文件
//    QString aFileName=QFileDialog::getOpenFileName(this,"打开一个文件",curPath,
//                 "程序文件(*.h *cpp);;文本文件(*.txt);;所有文件(*.*)");

//    if (aFileName.isEmpty())
//        return; //如果未选择文件，退出
//    openTextByStream(aFileName); //打开文件
//}


//void MainWindow::on_actSave_IODevice_triggered()
//{
//    QString curPath=QDir::currentPath();//获取系统当前目录
////  QString  curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径
//    QString dlgTitle="另存为一个文件"; //对话框标题
//    QString filter="h文件(*.h);;c++文件(*.cpp);;文本文件(*.txt);;所有文件(*.*)"; //文件过滤器

//    QString aFileName=QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);

//    if (aFileName.isEmpty())
//        return;

//    saveTextByIODevice(aFileName);
//}

//void MainWindow::on_actSave_TextStream_triggered()
//{
//    QString curPath=QDir::currentPath();//获取系统当前目录
////  QString  curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径
//    QString dlgTitle="另存为一个文件"; //对话框标题
//    QString filter="h文件(*.h);;c++文件(*.cpp);;文本文件(*.txt);;所有文件(*.*)"; //文件过滤器

//    QString aFileName=QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);

//    if (aFileName.isEmpty())
//        return;

//    saveTextByStream(aFileName);
//}

//void MainWindow::on_actOpen_Binary_triggered()
//{
//    QString curPath=QDir::currentPath();//获取系统当前目录
//    QString dlgTitle="打开一个文件"; //对话框标题
//    QString filter="监测数据文件(*.MS3);;所有文件(*.*)"; //文件过滤器

//    QString aFileName=QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);

//    if (aFileName.isEmpty())
//        return;

//    openDatabyStream(aFileName);

//}
