#include "qwmainwindow.h"
#include "ui_qwmainwindow.h"

#include    <QPainter>
#include    <QFileDialog>
#include    <QFileInfo>

void QWMainWindow::paintEvent(QPaintEvent *event)
{//绘制背景图片
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,ui->mainToolBar->height(),this->width(),
                       this->height()-ui->mainToolBar->height()-ui->statusBar->height(),
                       QPixmap(":/images/images/back.jpg"));
}

QWMainWindow::QWMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QWMainWindow)
{
    ui->setupUi(this);

//    ui->tabWidget->setVisible(false); //tabWidget初始设置为不可见
    ui->tabWidget->setDocumentMode(true); //设置为文档模式
    ui->tabWidget->setTabsClosable(true);//设置为单页可关闭
    this->setCentralWidget(ui->tabWidget); //tabWidget填充工作区
    this->setWindowState(Qt::WindowMaximized); //窗口最大化显示
}

QWMainWindow::~QWMainWindow()
{
    delete ui;
}

void QWMainWindow::on_tabWidget_tabCloseRequested(int index)
{//关闭Tab
    QFormDoc    *formDoc;
    formDoc= static_cast<QFormDoc*>(ui->tabWidget->widget(index));
    formDoc->close(); //子窗口关闭时自动释放
    ui->tabWidget->removeTab(index);

    bool  en=ui->tabWidget->count()>0; //再无页面时，actions禁用
    ui->actCut->setEnabled(en);
    ui->actCopy->setEnabled(en);
    ui->actPaste->setEnabled(en);
    ui->actFont->setEnabled(en);
    if (!en)
        ui->statusBar->clearMessage();
}

void QWMainWindow::on_actDoc_Open_triggered()
{//打开一个文档
//    curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径
    QString curPath=QDir::currentPath();
    QString aFileName=QFileDialog::getOpenFileName(this,tr("打开一个文件"),curPath,
                 "C程序文件文件(*.h *cpp);;文本文件(*.txt);;所有文件(*.*)");
    if (aFileName.isEmpty())
        return; //如果未选择文件，退出

    QFormDoc    *formDoc;
    int cur;
    if (ui->tabWidget->count()==0) //一个页面都没有
    {
        formDoc = new QFormDoc();//指定父窗口，必须在父窗口为Widget窗口提供一个显示区域
//        formDoc->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
        cur=ui->tabWidget->addTab(formDoc,QString::asprintf("Doc %d",ui->tabWidget->count()));
        connect(formDoc,SIGNAL(fileOpended(QString&)),this,SLOT(on_fileOpended(QString&)));
    }
    else //在当前Tab文档窗口里打开
    {
        cur=ui->tabWidget->currentIndex();
        formDoc=(QFormDoc*)ui->tabWidget->widget(cur);
     }

    formDoc->loadFromFile(aFileName); //调用文档窗口的函数打开文件

//    ui->tabWidget->setVisible(true);

    ui->actCut->setEnabled(true);
    ui->actCopy->setEnabled(true);
    ui->actPaste->setEnabled(true);
    ui->actFont->setEnabled(true);
}


void QWMainWindow::on_actDoc_New_triggered()
{ //新建空文档
    QFormDoc *formDoc = new QFormDoc(); //不指定父窗口，可以单独用show()方法显示
//    formDoc->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除

//tabWidget新增一个页面
    int cur=ui->tabWidget->addTab(formDoc,QString::asprintf("Doc %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(cur);

//文件打开信号与槽关联
    connect(formDoc,SIGNAL(fileOpended(QString&)),this,SLOT(on_fileOpended(QString&)));

    ui->tabWidget->setVisible(true);

    ui->actCut->setEnabled(true);
    ui->actCopy->setEnabled(true);
    ui->actPaste->setEnabled(true);
    ui->actFont->setEnabled(true);
}

void QWMainWindow::on_tabWidget_currentChanged(int index)
{//Tab当前页面变化,更新状态显示的文件名
    if (ui->tabWidget->count()>0)
    {
        QFormDoc    *formDoc;
        formDoc=(QFormDoc*)ui->tabWidget->widget(index);
        ui->statusBar->showMessage(formDoc->currentFileName());
    }
}

void QWMainWindow::on_fileOpended(QString &aFileName)
{//文件打开槽函数,子窗口打开文件后触发
    ui->statusBar->showMessage(aFileName); //状态栏上显示文件名
    QFileInfo   fileInfo(aFileName); //文件信息
    QString shortname=fileInfo.fileName(); //去掉路径的文件名
    ui->tabWidget->setTabText(ui->tabWidget->currentIndex(),shortname); //显示为tab标签
}

void QWMainWindow::on_actCut_triggered()
{//调用当前tab 页的QFormDoc的相应功能函数，cut
    QFormDoc    *formDoc;
    formDoc=(QFormDoc*)ui->tabWidget->widget(ui->tabWidget->currentIndex());
    formDoc->textCut();
}

void QWMainWindow::on_actFont_triggered()
{//调用当前tab 页的QFormDoc的相应功能函数, 字体设置
    QFormDoc    *formDoc;
    formDoc=(QFormDoc*)ui->tabWidget->widget(ui->tabWidget->currentIndex());
    formDoc->setEditFont();
}

void QWMainWindow::on_actCopy_triggered()
{//调用当前tab 页的QFormDoc的相应功能函数，copy
    QFormDoc    *formDoc;
    formDoc=(QFormDoc*)ui->tabWidget->widget(ui->tabWidget->currentIndex());
    formDoc->textCopy();
}

void QWMainWindow::on_actPaste_triggered()
{//调用当前tab 页的QFormDoc的相应功能函数, paste
    QFormDoc    *formDoc;
    formDoc=(QFormDoc*)ui->tabWidget->widget(ui->tabWidget->currentIndex());
    formDoc->textPaste();
}

void QWMainWindow::on_actCloseALL_triggered()
{//关闭所有窗口
    QFormDoc    *formDoc;
    for(int i=0;i<ui->tabWidget->count();i++)
    {
        formDoc= static_cast<QFormDoc*>(ui->tabWidget->widget(i));
        formDoc->close(); //子窗口关闭时自动释放
    }
    ui->tabWidget->clear(); //清除所有tab
    ui->statusBar->clearMessage(); //清除状态栏消息
}
