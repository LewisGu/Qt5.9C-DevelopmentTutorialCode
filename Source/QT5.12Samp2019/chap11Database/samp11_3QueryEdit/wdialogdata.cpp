#include "wdialogdata.h"
#include "ui_wdialogdata.h"

#include    <QFileDialog>

WDialogData::WDialogData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WDialogData)
{
    ui->setupUi(this);
}

WDialogData::~WDialogData()
{
    delete ui;
}

void WDialogData::setUpdateRecord(QSqlRecord &recData)
{ //编辑记录，更新记录数据到界面
    mRecord=recData;
    ui->spinEmpNo->setEnabled(false); //员工编号不允许编辑
    setWindowTitle("更新记录");

//根据recData的数据更新界面显示
    ui->spinEmpNo->setValue(recData.value("empNo").toInt());
    ui->editName->setText(recData.value("Name").toString());
    ui->comboSex->setCurrentText(recData.value("Gender").toString());
    ui->spinHeight->setValue(recData.value("Height").toFloat());
    ui->editBirth->setDate(recData.value("Birthday").toDate());
    ui->editMobile->setText(recData.value("Mobile").toString());
    ui->comboProvince->setCurrentText(recData.value("Province").toString());
    ui->editCity->setText(recData.value("City").toString());
    ui->comboDep->setCurrentText(recData.value("Department").toString());
    ui->comboEdu->setCurrentText(recData.value("Education").toString());
    ui->spinSalary->setValue(recData.value("Salary").toInt());
    ui->editMemo->setPlainText(recData.value("Memo").toString());

    QVariant    va=recData.value("Photo");//
    if (!va.isValid())  //图片字段内容为空
        ui->LabPhoto->clear();
    else
    {
        QByteArray data=va.toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->LabPhoto->setPixmap(pic.scaledToWidth(ui->LabPhoto->size().width()));
    }
}

void WDialogData::setInsertRecord(QSqlRecord &recData)
{//插入记录，无需更新界面显示，但是要存储recData的字段结构
    mRecord=recData; //保存recData到内部变量
    ui->spinEmpNo->setEnabled(true); //插入的记录，员工编号允许编辑
    setWindowTitle("插入新记录");
    ui->spinEmpNo->setValue(recData.value("empNo").toInt());
}

QSqlRecord WDialogData::getRecordData()
{ //"确定"按钮后，界面数据保存到记录mRecord
    mRecord.setValue("empNo",ui->spinEmpNo->value());
    mRecord.setValue("Name",ui->editName->text());
    mRecord.setValue("Gender",ui->comboSex->currentText());
    mRecord.setValue("Height",ui->spinHeight->value());
    mRecord.setValue("Birthday",ui->editBirth->date());
    mRecord.setValue("Mobile",ui->editMobile->text());

    mRecord.setValue("Province",ui->comboProvince->currentText());
    mRecord.setValue("City",ui->editCity->text());
    mRecord.setValue("Department",ui->comboDep->currentText());

    mRecord.setValue("Education",ui->comboEdu->currentText());
    mRecord.setValue("Salary",ui->spinSalary->value());
    mRecord.setValue("Memo",ui->editMemo->toPlainText());
//照片编辑时已经修改了mRecord的photo字段的值

    return  mRecord; //以记录作为返回值
}

void WDialogData::on_btnClearPhoto_clicked()
{ //清除照片
    ui->LabPhoto->clear();
    mRecord.setNull("Photo"); //Photo字段清空
}

void WDialogData::on_btnSetPhoto_clicked()
{//设置照片
    QString aFile=QFileDialog::getOpenFileName(this,"选择图片文件","",
                                               "照片(*.jpg)");
    if (aFile.isEmpty())
        return;

    QByteArray data;
    QFile* file=new QFile(aFile); //fileName为二进制数据文件名
    file->open(QIODevice::ReadOnly);
    data = file->readAll();
    file->close();

    mRecord.setValue("Photo",data); //图片保存到Photo字段

    QPixmap pic;
    pic.loadFromData(data);
    ui->LabPhoto->setPixmap(pic.scaledToWidth(ui->LabPhoto->size().width()));
}
