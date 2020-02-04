#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QFileDialog>
#include    <QMessageBox>
#include    "wdialogdata.h"

void MainWindow::openTable()
{//打开数据表
    qryModel=new QSqlQueryModel(this);
    theSelection=new QItemSelectionModel(qryModel);

    qryModel->setQuery("SELECT empNo, Name, Gender, Height, Birthday, Mobile, Province, City, Department, "
                       " Education, Salary FROM employee order by empNo");
    if (qryModel->lastError().isValid())
    {
        QMessageBox::information(this, "错误", "数据表查询错误,错误信息\n"+qryModel->lastError().text(),
                                 QMessageBox::Ok,QMessageBox::NoButton);
        return;
    }

    qryModel->setHeaderData(0,Qt::Horizontal,"工号");
    qryModel->setHeaderData(1,Qt::Horizontal,"姓名");
    qryModel->setHeaderData(2,Qt::Horizontal,"性别");
    qryModel->setHeaderData(3,Qt::Horizontal,"身高");
    qryModel->setHeaderData(4,Qt::Horizontal,"出生日期");
    qryModel->setHeaderData(5,Qt::Horizontal,"手机");
    qryModel->setHeaderData(6,Qt::Horizontal,"省份");
    qryModel->setHeaderData(7,Qt::Horizontal,"城市");
    qryModel->setHeaderData(8,Qt::Horizontal,"部门");
    qryModel->setHeaderData(9,Qt::Horizontal,"学历");
    qryModel->setHeaderData(10,Qt::Horizontal,"工资");

    ui->tableView->setModel(qryModel);
    ui->tableView->setSelectionModel(theSelection);
//    ui->tableView->resizeColumnsToContents();
//    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    ui->actOpenDB->setEnabled(false);

    ui->actRecInsert->setEnabled(true);
    ui->actRecDelete->setEnabled(true);
    ui->actRecEdit->setEnabled(true);
    ui->actScan->setEnabled(true);
}

void MainWindow::updateRecord(int recNo)
{ //更新一条记录
    QSqlRecord  curRec=qryModel->record(recNo); //获取当前记录
    int empNo=curRec.value("EmpNo").toInt();//获取EmpNo

    QSqlQuery query; //查询出当前记录的所有字段
    query.prepare("select * from employee where EmpNo = :ID");
    query.bindValue(":ID",empNo);
    query.exec();
    query.first();

    if (!query.isValid()) //是否为有效记录
        return;

    curRec=query.record();//获取当前记录的数据
    WDialogData    *dataDialog=new WDialogData(this); //创建对话框
    Qt::WindowFlags    flags=dataDialog->windowFlags();
    dataDialog->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

    dataDialog->setUpdateRecord(curRec);//调用对话框函数更新数据和界面
    int ret=dataDialog->exec();// 以模态方式显示对话框
    if (ret==QDialog::Accepted) //OK键被按下
    {
        QSqlRecord  recData=dataDialog->getRecordData(); //获得对话框返回的记录

        query.prepare("update employee set Name=:Name, Gender=:Gender,Height=:Height,"
                      " Birthday=:Birthday, Mobile=:Mobile, Province=:Province,"
                      " City=:City, Department=:Department, Education=:Education,"
                      " Salary=:Salary, Memo=:Memo, Photo=:Photo "
                      " where EmpNo = :ID");

        query.bindValue(":Name",recData.value("Name"));
        query.bindValue(":Gender",recData.value("Gender"));
        query.bindValue(":Height",recData.value("Height"));
        query.bindValue(":Birthday",recData.value("Birthday"));
        query.bindValue(":Mobile",recData.value("Mobile"));

        query.bindValue(":Province",recData.value("Province"));
        query.bindValue(":City",recData.value("City"));
        query.bindValue(":Department",recData.value("Department"));
        query.bindValue(":Education",recData.value("Education"));

        query.bindValue(":Salary",recData.value("Salary"));
        query.bindValue(":Memo",recData.value("Memo"));
        query.bindValue(":Photo",recData.value("Photo"));

        query.bindValue(":ID",empNo);

        if (!query.exec())
            QMessageBox::critical(this, "错误", "记录更新错误\n"+query.lastError().text(),
                                     QMessageBox::Ok,QMessageBox::NoButton);
        else
            qryModel->query().exec();//数据模型重新查询数据，更新tableView显示
    }
    delete dataDialog;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setCentralWidget(ui->tableView);

    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);
    //    ui->tableView->resizeColumnsToContents();
    //    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actOpenDB_triggered()
{
    QString aFile=QFileDialog::getOpenFileName(this,"选择数据库文件","",
                             "SQL Lite数据库(*.db *.db3)");
    if (aFile.isEmpty())
       return;

//打开数据库
    DB=QSqlDatabase::addDatabase("QSQLITE"); //添加 SQL LITE数据库驱动
    DB.setDatabaseName(aFile); //设置数据库名称
//    DB.setHostName();
//    DB.setUserName();
//    DB.setPassword();
    if (!DB.open())   //打开数据库
    {
        QMessageBox::warning(this, "错误", "打开数据库失败",
                                 QMessageBox::Ok,QMessageBox::NoButton);
        return;
    }

//打开数据表
    openTable();
}


void MainWindow::on_actRecInsert_triggered()
{//插入记录
    QSqlQuery query;
    query.exec("select * from employee where EmpNo =-1"); //实际不查询出记录，只查询字段信息

    QSqlRecord curRec=query.record();//获取当前记录,实际为空记录
    curRec.setValue("EmpNo",qryModel->rowCount()+3000);

    WDialogData    *dataDialog=new WDialogData(this);
    Qt::WindowFlags    flags=dataDialog->windowFlags();
    dataDialog->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

    dataDialog->setInsertRecord(curRec); //插入记录
    int ret=dataDialog->exec();// 以模态方式显示对话框
    if (ret==QDialog::Accepted) //OK键被按下
    {
        QSqlRecord  recData=dataDialog->getRecordData();

        query.prepare("INSERT INTO employee (EmpNo,Name,Gender,Height,Birthday,Mobile,Province,"
                      " City,Department,Education,Salary,Memo,Photo) "
                      " VALUES(:EmpNo,:Name, :Gender,:Height,:Birthday,:Mobile,:Province,"
                      " :City,:Department,:Education,:Salary,:Memo,:Photo)");

        query.bindValue(":EmpNo",recData.value("EmpNo"));
        query.bindValue(":Name",recData.value("Name"));
        query.bindValue(":Gender",recData.value("Gender"));
        query.bindValue(":Height",recData.value("Height"));
        query.bindValue(":Birthday",recData.value("Birthday"));
        query.bindValue(":Mobile",recData.value("Mobile"));

        query.bindValue(":Province",recData.value("Province"));
        query.bindValue(":City",recData.value("City"));
        query.bindValue(":Department",recData.value("Department"));
        query.bindValue(":Education",recData.value("Education"));

        query.bindValue(":Salary",recData.value("Salary"));
        query.bindValue(":Memo",recData.value("Memo"));
        query.bindValue(":Photo",recData.value("Photo"));

        if (!query.exec())
            QMessageBox::critical(this, "错误", "插入记录错误\n"+query.lastError().text(),
                                     QMessageBox::Ok,QMessageBox::NoButton);
        else //插入，删除记录后需要重新设置SQL语句查询
        {
            QString sqlStr=qryModel->query().executedQuery();//  执行过的SELECT语句
            qryModel->setQuery(sqlStr);         //重新查询数据
        }
    }

    delete dataDialog;
}

void MainWindow::on_actRecDelete_triggered()
{//删除当前记录
    int curRecNo=theSelection->currentIndex().row();
    QSqlRecord  curRec=qryModel->record(curRecNo); //获取当前记录
    if (curRec.isEmpty()) //当前为空记录
        return;

    int empNo=curRec.value("EmpNo").toInt();//获取员工编号
    QSqlQuery query;
    query.prepare("delete  from employee where EmpNo = :ID");
    query.bindValue(":ID",empNo);

    if (!query.exec())
        QMessageBox::critical(this, "错误", "删除记录出现错误\n"+query.lastError().text(),
                                 QMessageBox::Ok,QMessageBox::NoButton);
    else //插入，删除记录后需要重新设置SQL语句查询
    {
        QString sqlStr=qryModel->query().executedQuery();//  执行过的SELECT语句
        qryModel->setQuery(sqlStr);         //重新查询数据
    }
}


void MainWindow::on_actRecEdit_triggered()
{//编辑当前记录
    int curRecNo=theSelection->currentIndex().row();
    updateRecord(curRecNo);
}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{ //tableView上双击,编辑当前记录
    int curRecNo=index.row();
    updateRecord(curRecNo);
}


void MainWindow::on_actScan_triggered()
{//涨工资，记录遍历
    QSqlQuery qryEmpList; //员工工资信息列表
//    qryEmpList.setForwardOnly(true);
    qryEmpList.exec("SELECT empNo,Salary FROM employee ORDER BY empNo");
    qryEmpList.first();

    QSqlQuery qryUpdate; //临时 QSqlQuery
    qryUpdate.prepare("UPDATE employee SET Salary=:Salary WHERE EmpNo = :ID");

    while (qryEmpList.isValid()) //当前记录有效
    {
        int empID=qryEmpList.value("empNo").toInt(); //获取empNo
        float salary=qryEmpList.value("Salary").toFloat(); //获取Salary
        salary=salary+1000; //涨工资

        qryUpdate.bindValue(":ID",empID);
        qryUpdate.bindValue(":Salary",salary); //设置SQL语句参数
        qryUpdate.exec(); //执行update

        if (!qryEmpList.next()) //移动到下一条记录，并判断是否到末尾了
            break;
    }

    qryModel->query().exec();//数据模型重新查询数据，更新tableView的显示
    QMessageBox::information(this, "提示", "涨工资计算完毕",
                             QMessageBox::Ok,QMessageBox::NoButton);
}
