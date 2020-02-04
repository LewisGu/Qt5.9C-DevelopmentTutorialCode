#include "qformtable.h"
#include "ui_qformtable.h"

#include    <QMessageBox>

QFormTable::QFormTable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QFormTable)
{
    ui->setupUi(this);

    theModel = new QStandardItemModel(12,6,this); //数据模型
    theSelection = new QItemSelectionModel(theModel);//Item选择模型
    //为tableView设置数据模型
    ui->tableView->setModel(theModel); //设置数据模型
    ui->tableView->setSelectionModel(theSelection);//设置选择模型

//    QMessageBox::information(this, "消息", "表格窗口被创建");
}

QFormTable::~QFormTable()
{
//    QMessageBox::information(this, "消息", "FormTable窗口被删除和释放");
    delete ui;
}

void QFormTable::on_actSize_triggered()
{
    QWDialogSize    *dlgTableSize=new QWDialogSize(this); //创建对话框

    Qt::WindowFlags    flags=dlgTableSize->windowFlags();
    dlgTableSize->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

    dlgTableSize->setRowColumn(theModel->rowCount(),theModel->columnCount()); //对话框数据初始化

    int ret=dlgTableSize->exec();// 以模态方式显示对话框，用户关闭对话框时返回 DialogCode值
    if (ret==QDialog::Accepted) //OK键被按下,对话框关闭，若设置了setAttribute(Qt::WA_DeleteOnClose)，对话框被释放，无法获得返回值
    { //OK键被按下，获取对话框上的输入，设置行数和列数
        int cols=dlgTableSize->columnCount();
        theModel->setColumnCount(cols);

        int rows=dlgTableSize->rowCount();
        theModel->setRowCount(rows);
    }
    delete dlgTableSize; //删除对话框
}

void QFormTable::on_actSetHeader_triggered()
{
    if (dlgSetHeaders==NULL) //如果对象没有被创建过，就创建对象
        dlgSetHeaders = new QWDialogHeaders(this);

    if (dlgSetHeaders->headerList().count()!=theModel->columnCount())
    {
        QStringList strList;
        for (int i=0;i<theModel->columnCount();i++)//获取现有的表头标题
            strList.append(theModel->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString());
        dlgSetHeaders->setHeaderList(strList);//用于对话框初始化显示
    }

    int ret=dlgSetHeaders->exec();// 以模态方式显示对话框
    if (ret==QDialog::Accepted) //OK键被按下
    {
        QStringList strList=dlgSetHeaders->headerList();//获取对话框上修改后的StringList
        theModel->setHorizontalHeaderLabels(strList);// 设置模型的表头标题
    }
}
