#include "qwdialogheaders.h"
#include "ui_qwdialogheaders.h"

#include    <QMessageBox>

QWDialogHeaders::QWDialogHeaders(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialogHeaders)
{
    ui->setupUi(this);
    model= new QStringListModel;
    ui->listView->setModel(model);
}

QWDialogHeaders::~QWDialogHeaders()
{
//    QMessageBox::information(this, "消息", "DialogHeaders对话框被删除和释放");
    delete ui;
}

void QWDialogHeaders::setHeaderList(QStringList &headers)
{
    model->setStringList(headers);
}

QStringList QWDialogHeaders::headerList()
{
    return  model->stringList();
}
