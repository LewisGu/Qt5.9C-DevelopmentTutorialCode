#include "qwdialogpen.h"
#include "ui_qwdialogpen.h"

#include    <QColorDialog>

// 若MSVC 编译版本错误，修改 msvc-version.conf 文件
// 解决MSVC编译时，界面汉字乱码的问题
#if _MSC_VER >= 1600     //MSVC2015>1899,    MSVC_VER= 14.0
#pragma execution_character_set("utf-8")
#endif


QWDialogPen::QWDialogPen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialogPen)
{
    ui->setupUi(this);

//“线型”ComboBox的选择项设置
    ui->comboPenStyle->clear();
    ui->comboPenStyle->addItem("NoPen",0);
    ui->comboPenStyle->addItem("SolidLine",1);
    ui->comboPenStyle->addItem("DashLine",2);
    ui->comboPenStyle->addItem("DotLine",3);
    ui->comboPenStyle->addItem("DashDotLine",4);
    ui->comboPenStyle->addItem("DashDotDotLine",5);
    ui->comboPenStyle->addItem("CustomDashLine",6);

    ui->comboPenStyle->setCurrentIndex(1);
}

QWDialogPen::~QWDialogPen()
{
    delete ui;
}

void QWDialogPen::setPen(QPen pen)
{ //设置QPen，并刷新显示界面
    m_pen=pen;

    ui->spinWidth->setValue(pen.width()); //线宽
    int i=static_cast<int>(pen.style());  //枚举类型转换为整型
    ui->comboPenStyle->setCurrentIndex(i);

    QColor  color=pen.color();
    ui->btnColor->setAutoFillBackground(true); //设置颜色按钮的背景色
    QString str=QString::asprintf("background-color: rgb(%d, %d, %d);",
                                  color.red(),color.green(),color.blue());
    ui->btnColor->setStyleSheet(str);
}

QPen QWDialogPen::getPen()
{//获得设置的属性
    m_pen.setStyle(Qt::PenStyle(ui->comboPenStyle->currentIndex())); //线型
    m_pen.setWidth(ui->spinWidth->value()); //线宽

    QColor  color;
    color=ui->btnColor->palette().color(QPalette::Button);
    m_pen.setColor(color); //颜色
    return  m_pen;
}

QPen QWDialogPen::getPen(QPen iniPen,bool &ok)
{ //静态函数，获取QPen
    QWDialogPen *Dlg=new QWDialogPen; //创建一个对话框
    Dlg->setPen(iniPen); //设置初始化QPen

    QPen    pen;
    int ret=Dlg->exec(); //弹出对话框
    if (ret==QDialog::Accepted)
    {
        pen=Dlg->getPen(); //获取
        ok=true;    }
    else
    {
        pen=iniPen;
        ok=false;   }

    delete  Dlg; //删除对话框对象
    return  pen; //返回设置的QPen对象
}

void QWDialogPen::on_btnColor_clicked()
{//设置颜色
    QColor  color=QColorDialog::getColor();
    if (color.isValid())
    { //用样式表设置QPushButton的背景色
        QString str=QString::asprintf("background-color: rgb(%d, %d, %d);",
                                      color.red(),color.green(),color.blue());
        ui->btnColor->setStyleSheet(str);
    }
}
