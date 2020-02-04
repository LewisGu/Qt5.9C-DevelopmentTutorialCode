#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QFileDialog>
#include    <QTextStream>


void MainWindow::iniModelFromStringList(QStringList& aFileContent)
{ //从一个StringList 获取数据，初始化Model
    int rowCnt=aFileContent.count(); // 第1行是标题头，
    theModel->setRowCount(rowCnt-1); //数据行数

    QString header,aLineText;
    QStandardItem   *aItem;
    QStringList     headerList,tmpList;

//设置表头
    header=aFileContent.at(0);//第1行是表头
    headerList=header.split(QRegExp("\\s+"),QString::SkipEmptyParts);//一个或多个空格、TAB等分隔符隔开的字符串
    theModel->setHorizontalHeaderLabels(headerList); //设置表头文字

//设置表格数据
    int i,j;
    for (i=1;i<rowCnt;i++)
    {
        aLineText=aFileContent.at(i); //获取stringList的一行
        tmpList=aLineText.split(QRegExp("\\s+"),QString::SkipEmptyParts);//一个或多个空格、TAB等分隔符隔开的字符串分解为多个字符串
        for (j=0;j<FixedColumnCount-1;j++)
        {
            aItem=new QStandardItem(tmpList.at(j));//创建item
            theModel->setItem(i-1,j,aItem); //为模型的某个行列位置设置Item
        }
        aItem=new QStandardItem(headerList.at(j));//最后一列是Checkable,设置
        aItem->setCheckable(true);
        if (tmpList.at(j)=="0")
            aItem->setCheckState(Qt::Unchecked);
        else
            aItem->setCheckState(Qt::Checked);
        theModel->setItem(i-1,j,aItem); //为模型的某个行列位置设置Item
    }
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    theModel = new QStandardItemModel(2,FixedColumnCount,this); //创建数据模型
    theSelection = new QItemSelectionModel(theModel);//Item选择模型
    connect(theSelection,SIGNAL(currentChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));

    //为tableView设置数据模型
    ui->tableView->setModel(theModel); //设置数据模型
    ui->tableView->setSelectionModel(theSelection);//设置选择模型

//为各列设置自定义代理组件
    ui->tableView->setItemDelegateForColumn(0,&intSpinDelegate);  //测深，整数
    ui->tableView->setItemDelegateForColumn(1,&floatSpinDelegate);  //浮点数
    ui->tableView->setItemDelegateForColumn(2,&floatSpinDelegate); //浮点数
    ui->tableView->setItemDelegateForColumn(3,&floatSpinDelegate); //浮点数
    ui->tableView->setItemDelegateForColumn(4,&comboBoxDelegate); //Combbox选择型

    setCentralWidget(ui->splitter); //

//创建状态栏组件
    LabCurFile = new QLabel("当前文件：",this);
    LabCurFile->setMinimumWidth(300);

    LabCellPos = new QLabel("当前单元格：",this);
    LabCellPos->setMinimumWidth(180);
    LabCellPos->setAlignment(Qt::AlignHCenter);

    LabCellText = new QLabel("单元格内容：",this);
    LabCellText->setMinimumWidth(200);

    ui->statusBar->addWidget(LabCurFile);
    ui->statusBar->addWidget(LabCellPos);
    ui->statusBar->addWidget(LabCellText);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    if (current.isValid())
    {
        LabCellPos->setText(QString::asprintf("当前单元格：%d行，%d列",
                                  current.row(),current.column()));
        QStandardItem   *aItem;
        aItem=theModel->itemFromIndex(current); //从模型索引获得Item
        this->LabCellText->setText("单元格内容："+aItem->text());

        QFont   font=aItem->font();
        ui->actFontBold->setChecked(font.bold());
    }
}

void MainWindow::on_actOpen_triggered()
{
    QString curPath,aFileName,str;
    curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径
//调用打开文件对话框打开一个文件
    aFileName=QFileDialog::getOpenFileName(this,tr("打开一个文件"),curPath,
                 "井斜数据文件(*.txt);;所有文件(*.*)");

    if (aFileName.isEmpty())
        return; //

    QStringList fFileContent;//
    QFile aFile(aFileName);  //以文件方式读出
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream aStream(&aFile); //用文本流读取文件
        ui->plainTextEdit->clear();
        while (!aStream.atEnd())
        {
            str=aStream.readLine();//读取文件的一行
            ui->plainTextEdit->appendPlainText(str); //添加到文本框显示
            fFileContent.append(str); //添加到StringList
        }
        aFile.close();

        this->LabCurFile->setText("当前文件："+aFileName);
        ui->actAppend->setEnabled(true);
        ui->actInsert->setEnabled(true);
        ui->actDelete->setEnabled(true);
        ui->actSave->setEnabled(true);

        iniModelFromStringList(fFileContent);//初始化数据模型
    }
}

void MainWindow::on_actAppend_triggered()
{ //添加行
    QList<QStandardItem*>    aItemList; //容器类
    QStandardItem   *aItem;
    QString str;
    for(int i=0;i<FixedColumnCount-2;i++)
    {
        aItem=new QStandardItem("0"); //创建Item
        aItemList<<aItem;   //添加到容器
    }
    aItem=new QStandardItem("优"); //创建Item
    aItemList<<aItem;   //添加到容器

    str=theModel->headerData(theModel->columnCount()-1,Qt::Horizontal,Qt::DisplayRole).toString();
    aItem=new QStandardItem(str); //创建Item
    aItem->setCheckable(true);
    aItemList<<aItem;   //添加到容器

    theModel->insertRow(theModel->rowCount(),aItemList); //插入一行，需要每个Cell的Item
    QModelIndex curIndex=theModel->index(theModel->rowCount()-1,0);//创建最后一行的ModelIndex
    theSelection->clearSelection();
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void MainWindow::on_actInsert_triggered()
{//插入行
    QList<QStandardItem*>    aItemList;  //QStandardItem的容器类
    QStandardItem   *aItem;
    QString str;
    for(int i=0;i<FixedColumnCount-2;i++)
    {
        aItem=new QStandardItem("0"); //新建一个QStandardItem
        aItemList<<aItem;//添加到容器类
    }
    aItem=new QStandardItem("优"); //新建一个QStandardItem
    aItemList<<aItem;//添加到容器类

    str=theModel->headerData(theModel->columnCount()-1,Qt::Horizontal,Qt::DisplayRole).toString();
    aItem=new QStandardItem(str); //创建Item
    aItem->setCheckable(true);
    aItemList<<aItem;//添加到容器类
    QModelIndex curIndex=theSelection->currentIndex();
    theModel->insertRow(curIndex.row(),aItemList);
    theSelection->clearSelection();
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void MainWindow::on_actDelete_triggered()
{ //删除行
    QModelIndex curIndex=theSelection->currentIndex();
    if (curIndex.row()==theModel->rowCount()-1)//(curIndex.isValid())
        theModel->removeRow(curIndex.row());
    else
    {
        theModel->removeRow(curIndex.row());
        theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    }
}

void MainWindow::on_actModelData_triggered()
{//模型数据导出到PlainTextEdit显示
    ui->plainTextEdit->clear(); //清空
    QStandardItem   *aItem;
    QString str;

//获取表头文字
    int i,j;
    for (i=0;i<theModel->columnCount();i++)
    { //
        aItem=theModel->horizontalHeaderItem(i); //表头
        str=str+aItem->text()+"\t";
    }
    ui->plainTextEdit->appendPlainText(str);


//获取数据区的每行
    for (i=0;i<theModel->rowCount();i++)
    {
        str="";
        for(j=0;j<theModel->columnCount()-1;j++)
        {
            aItem=theModel->item(i,j);
            str=str+aItem->text()+QString::asprintf("\t"); //以 TAB分隔
        }
        aItem=theModel->item(i,j);
        if (aItem->checkState()==Qt::Checked)
            str=str+"1";
        else
            str=str+"0";


         ui->plainTextEdit->appendPlainText(str);
    }

}

void MainWindow::on_actSave_triggered()
{ //保存为文件
    QString curPath,aFileName;
    curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径
//调用打开文件对话框选择一个文件
    aFileName=QFileDialog::getSaveFileName(this,tr("选择一个文件"),curPath,
                 "井斜数据文件(*.txt);;所有文件(*.*)");

    if (aFileName.isEmpty())
        return; //

    QFile aFile(aFileName);  //以文件方式读出
    if (!(aFile.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate)))
        return;

    QTextStream aStream(&aFile); //用文本流读取文件

    QStandardItem   *aItem;
    int i,j;
    QString str;

    ui->plainTextEdit->clear();

//获取表头文字
    for (i=0;i<theModel->columnCount();i++)
    {
        aItem=theModel->horizontalHeaderItem(i);
        str=str+aItem->text()+"\t\t";
    }
    aStream<<str<<"\n";  //文件里需要加入 \n
    ui->plainTextEdit->appendPlainText(str);

//获取数据区文字，
    for (i=0;i<theModel->rowCount();i++)
    {
        str="";
        for(j=0;j<theModel->columnCount()-1;j++)
        {
            aItem=theModel->item(i,j);
            str=str+aItem->text()+QString::asprintf("\t\t");
        }

        aItem=theModel->item(i,j);
        if (aItem->checkState()==Qt::Checked)
            str=str+"1";
        else
            str=str+"0";

         ui->plainTextEdit->appendPlainText(str);
         aStream<<str<<"\n";
    }
}

void MainWindow::on_actAlignCenter_triggered()
{
    if (!theSelection->hasSelection())
        return;

    QModelIndexList selectedIndix=theSelection->selectedIndexes();

    QModelIndex aIndex;
    QStandardItem   *aItem;

    for (int i=0;i<selectedIndix.count();i++)
    {
        aIndex=selectedIndix.at(i);
        aItem=theModel->itemFromIndex(aIndex);
        aItem->setTextAlignment(Qt::AlignHCenter);
    }
}

void MainWindow::on_actFontBold_triggered(bool checked)
{
    if (!theSelection->hasSelection())
        return;

    QModelIndexList selectedIndix=theSelection->selectedIndexes();

    QModelIndex aIndex;
    QStandardItem   *aItem;
    QFont   font;

    for (int i=0;i<selectedIndix.count();i++)
    {
        aIndex=selectedIndix.at(i);
        aItem=theModel->itemFromIndex(aIndex);
        font=aItem->font();
        font.setBold(checked);
        aItem->setFont(font);
    }

}

void MainWindow::on_actAlignLeft_triggered()
{
    if (!theSelection->hasSelection())
        return;

    QModelIndexList selectedIndix=theSelection->selectedIndexes();

    QModelIndex aIndex;
    QStandardItem   *aItem;

    for (int i=0;i<selectedIndix.count();i++)
    {
        aIndex=selectedIndix.at(i);
        aItem=theModel->itemFromIndex(aIndex);
        aItem->setTextAlignment(Qt::AlignLeft);
    }
}

void MainWindow::on_actAlignRight_triggered()
{
    if (!theSelection->hasSelection())
        return;

    QModelIndexList selectedIndix=theSelection->selectedIndexes();

    QModelIndex aIndex;
    QStandardItem   *aItem;

    for (int i=0;i<selectedIndix.count();i++)
    {
        aIndex=selectedIndix.at(i);
        aItem=theModel->itemFromIndex(aIndex);
        aItem->setTextAlignment(Qt::AlignRight);
    }
}
