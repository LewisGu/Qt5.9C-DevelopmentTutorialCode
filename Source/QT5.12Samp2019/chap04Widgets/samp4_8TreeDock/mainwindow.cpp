#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QTreeWidgetItem>
#include    <QFileDialog>

void MainWindow::iniTree()
{ //初始化Tree
    QString    dataStr=""; // Item的Data 存储的string

    ui->treeFiles->clear();//清除目录树所有节点
    QIcon   icon;
    icon.addFile(":/images/icons/15.ico"); //设置ICON的图标

    QTreeWidgetItem*  item=new QTreeWidgetItem(MainWindow::itTopItem); //新建节点时设定类型为 itTopItem
    item->setIcon(MainWindow::colItem,icon); //设置第1列的图标
    item->setText(MainWindow::colItem,"图片文件"); //设置第1列的文字
    item->setText(MainWindow::colItemType,"type=itTopItem");  //设置第2列的文字
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem,Qt::Checked);//设置为选中

    item->setData(MainWindow::colItem,Qt::UserRole,QVariant(dataStr)); //设置节点第1列的Qt::UserRole的Data
    ui->treeFiles->addTopLevelItem(item);//添加顶层节点
}

void MainWindow::addFolderItem(QTreeWidgetItem *parItem, QString dirName)
{//添加一个目录节点
    QIcon   icon(":/images/icons/open3.bmp");
    QString NodeText=getFinalFolderName(dirName); //从一个完整目录名称里，获得最后的文件夹名称

    QTreeWidgetItem *item; //节点
    item=new QTreeWidgetItem(MainWindow::itGroupItem); //新建节点, 设定type为 itGroupItem
    item->setIcon(colItem,icon); //设置图标
    item->setText(colItem,NodeText); //最后的文件夹名称，第1列
    item->setText(colItemType,"type=itGroupItem"); //完整目录名称，第2列
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate); //设置节点选项
    item->setCheckState(colItem,Qt::Checked); //节点选中
    item->setData(colItem,Qt::UserRole,QVariant(dirName)); //设置角色为Qt::UserRole的Data,存储完整目录名称

    parItem->addChild(item); //在父节点下面添加子节点
}

QString MainWindow::getFinalFolderName(const QString &fullPathName)
{//从一个完整目录名称里，获得最后的文件夹名称
    int cnt=fullPathName.length(); //字符串长度
    int i=fullPathName.lastIndexOf("/");//  最后一次出现的位置
    QString str=fullPathName.right(cnt-i-1); //获得最后的文件夹的名称
    return str;
}

void MainWindow::addImageItem(QTreeWidgetItem *parItem, QString aFilename)
{//添加一个图片文件节点
    QIcon   icon(":/images/icons/31.ico");//ICON的图标
    QString NodeText=getFinalFolderName(aFilename); //获得最后的文件名称

    QTreeWidgetItem *item; //节点
    item=new QTreeWidgetItem(MainWindow::itImageItem); //新建节点时设定类型为 itImageItem
    item->setIcon(colItem,icon); //设置图标
    item->setText(colItem,NodeText); //最后的文件夹名称
    item->setText(colItemType,"type=itImageItem"); //完整目录名称
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate); //设置节点选项
    item->setCheckState(colItem,Qt::Checked); //节点选中

    item->setData(colItem,Qt::UserRole,QVariant(aFilename)); //设置节点Qt::UserRole的Data,存储完整文件名称

    parItem->addChild(item); //在父节点下面添加子节点
}

void MainWindow::displayImage(QTreeWidgetItem *item)
{//显示图片,节点item存储的图片文件名
    QString filename=item->data(colItem,Qt::UserRole).toString();//获取节点data里存的文件名
    LabFileName->setText(filename);
    curPixmap.load(filename); //从文件载入图片
    on_actZoomFitH_triggered(); //自动适应高度显示

    ui->actZoomFitH->setEnabled(true);
    ui->actZoomFitW->setEnabled(true);
    ui->actZoomIn->setEnabled(true);
    ui->actZoomOut->setEnabled(true);
    ui->actZoomRealSize->setEnabled(true);
}

void MainWindow::changeItemCaption(QTreeWidgetItem *item)
{ //改变节点的标题文字
    QString str="*"+item->text(colItem);  //节点标题前加“*”
    item->setText(colItem,str); //设置节点标题

    if (item->childCount()>0) //如果有子节点
    for (int i=0;i<item->childCount();i++) //遍历子节点
       changeItemCaption(item->child(i));  //调用自己，可重入的函数
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    LabFileName=new QLabel("");
    ui->statusBar->addWidget(LabFileName);

    this->setCentralWidget(ui->scrollArea); //设置中心布局组件
    iniTree();//初始化目录树
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeFiles_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{ //当前节点选择变化时触发
    Q_UNUSED(previous);
    if  (current==NULL)
        return;

    int var=current->type();//节点的类型

    switch(var)
    {
        case  itTopItem: //顶层节点
          ui->actAddFolder->setEnabled(true);
          ui->actAddFiles->setEnabled(true);
          ui->actDeleteItem->setEnabled(false);    //顶层节点不能删除
          break;

        case  itGroupItem: //文件组节点
          ui->actAddFolder->setEnabled(true);
          ui->actAddFiles->setEnabled(true);
          ui->actDeleteItem->setEnabled(true);
          break;

        case  itImageItem: //图片文件节点
          ui->actAddFolder->setEnabled(false); //图片节点下不能添加目录节点
          ui->actAddFiles->setEnabled(true);
          ui->actDeleteItem->setEnabled(true);
          displayImage(current); //显示图片
          break;
    }
}

void MainWindow::on_actAddFolder_triggered()
{// 选择一个文件夹,作为当前节点的子节点加入
  QString dir=QFileDialog::getExistingDirectory();//选择目录
  if (!dir.isEmpty()) //选择目录名称不为空
  {
      QTreeWidgetItem* parItem=ui->treeFiles->currentItem(); //当前节点
      addFolderItem(parItem,dir);//在父节点下面添加一个组节点
  }
}

void MainWindow::on_actAddFiles_triggered()
{//添加图片文件节点
    QStringList files=QFileDialog::getOpenFileNames(this,"选择一个或多个文件","","Images(*.jpg)");//多选文件
    if (files.isEmpty()) //如果一个文件都没选
        return;

    QTreeWidgetItem *parItem,*item; //节点
    item=ui->treeFiles->currentItem(); //当前节点

    if (item->type()==itImageItem) //若当前节点是图片节点，取其父节点作为父节点
       parItem=item->parent();
    else //否则取当前节点为父节点
       parItem=item;

    for (int i = 0; i < files.size(); ++i)
    {
        QString aFilename=files.at(i); //得到StringList里的一行，也就是一个文件名
        addImageItem(parItem,aFilename); //添加一个图片节点
    }
}


void MainWindow::on_actZoomOut_triggered()
{ //缩小显示
    pixRatio=pixRatio*0.8; //在当前比例基础上乘以0.8

    int w=pixRatio*curPixmap.width();// 显示宽度
    int h=pixRatio*curPixmap.height();//显示高度

    QPixmap pix=curPixmap.scaled(w,h); //图片缩放到指定高度和宽度，保持长宽比例

    ui->LabPicture->setPixmap(pix);
}

void MainWindow::on_actZoomIn_triggered()
{//放大显示
    pixRatio=pixRatio*1.2;//在当前比例基础上乘以0.8

    int w=pixRatio*curPixmap.width();// 显示宽度
    int h=pixRatio*curPixmap.height();//显示高度

    QPixmap pix=curPixmap.scaled(w,h);//图片缩放到指定高度和宽度，保持长宽比例
    ui->LabPicture->setPixmap(pix);
}

void MainWindow::on_actZoomFitW_triggered()
{ //适应宽度显示
    int w=ui->scrollArea->width()-20;//得到scrollArea的高度
    int realw=curPixmap.width();//原始图片的实际宽度
    pixRatio=float(w)/realw;//当前显示比例，必须转换为浮点数

    QPixmap pix=curPixmap.scaledToWidth(w-30);
    ui->LabPicture->setPixmap(pix);
}

void MainWindow::on_actZoomFitH_triggered()
{//适应高度显示图片
    int H=ui->scrollArea->height();//得到scrollArea的高度
    int realH=curPixmap.height(); //原始图片的实际高度
    pixRatio=float(H)/realH;  //当前显示比例，必须转换为浮点数

    QPixmap pix=curPixmap.scaledToHeight(H-30); //图片缩放到指定高度
    ui->LabPicture->setPixmap(pix);  //设置Label的PixMap
}

void MainWindow::on_actZoomRealSize_triggered()
{ //实际大小显示
    pixRatio=1;  //恢复显示比例为1
    ui->LabPicture->setPixmap(curPixmap);
}

void MainWindow::on_actDeleteItem_triggered()
{//删除节点
    QTreeWidgetItem* item =ui->treeFiles->currentItem(); //当前节点
    QTreeWidgetItem* parItem=item->parent(); //父节点
    parItem->removeChild(item);//The removed item will not be deleted
    delete item;
}

void MainWindow::on_actScanItems_triggered()
{//遍历节点
    for (int i=0;i<ui->treeFiles->topLevelItemCount();i++)
    {
        QTreeWidgetItem *item=ui->treeFiles->topLevelItem(i); //顶层节点
        changeItemCaption(item); //更改节点标题
    }
}

void MainWindow::on_actDockVisible_toggled(bool arg1)
{// 停靠区的可见性
    ui->dockWidget->setVisible(arg1);
}

void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{//停靠区可见性变化
    ui->actDockVisible->setChecked(visible);
}

void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{//停靠区浮动性变化
    ui->actDockFloat->setChecked(topLevel);
}

void MainWindow::on_actDockFloat_triggered(bool checked)
{//停靠区浮动性
    ui->dockWidget->setFloating(checked);
}

