#include "widget.h"
#include "ui_widget.h"

#include    <QPainter>

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter    painter(this);

    int W=width();
    int H=height();

    int side=qMin(W,H);//去长和宽的小值
    QRect rect((W-side)/2, (H-side)/2,side,side); //viewport矩形区
    painter.drawRect(rect); //Viewport大小

    painter.setViewport(rect);//设置Viewport
    painter.setWindow(-100,-100,200,200); // 设置窗口大小，逻辑坐标

    painter.setRenderHint(QPainter::Antialiasing);

//设置画笔
    QPen    pen;
    pen.setWidth(1); //线宽
    pen.setColor(Qt::red); //划线颜色
    //Qt::NoPen,Qt::SolidLine, Qt::DashLine, Qt::DotLine,Qt::DashDotLine,Qt::DashDotDotLine,Qt::CustomDashLine
    pen.setStyle(Qt::SolidLine);//线的类型，实线、虚线等
    //Qt::FlatCap, Qt::SquareCap,Qt::RoundCap
    pen.setCapStyle(Qt::FlatCap);//线端点样式
    //Qt::MiterJoin,Qt::BevelJoin,Qt::RoundJoin,Qt::SvgMiterJoin
    pen.setJoinStyle(Qt::BevelJoin);//线的连接点样式
    painter.setPen(pen);

////设置画刷
//    QBrush  brush;
//    brush.setColor(Qt::yellow); //画刷颜色
//    brush.setStyle(Qt::SolidPattern); //画刷填充样式
//    painter.setBrush(brush);

////线性渐变
    QLinearGradient  linearGrad(0,0,100,0);//从左到右,
    linearGrad.setColorAt(0,Qt::yellow);//起点颜色
    linearGrad.setColorAt(1,Qt::green);//终点颜色
    linearGrad.setSpread(QGradient::PadSpread);  //展布模式
    painter.setBrush(linearGrad);

//径向渐变
//    QRadialGradient  radialGrad(50,0,50,50,0);
////    radialGrad.setColorAt(0,Qt::white);
//    radialGrad.setColorAt(0,Qt::yellow);
//    radialGrad.setColorAt(1,Qt::blue);
//    radialGrad.setSpread(QGradient::ReflectSpread); //QGradient::PadSpread ,QGradient::RepeatSpread, QGradient::ReflectSpread
//    p.setBrush(radialGrad);


//圆锥型渐变
//    QConicalGradient  coniGrad(W/2,H/2,45);
//    coniGrad.setColorAt(0,Qt::white);
//    coniGrad.setColorAt(0.5,Qt::blue);
//    coniGrad.setColorAt(1,Qt::red);
//    coniGrad.setSpread(QGradient::PadSpread); //QGradient::PadSpread ,QGradient::RepeatSpread, QGradient::ReflectSpread
//    p.setBrush(coniGrad);

    //设置复合模式
//    painter.setCompositionMode(QPainter::RasterOp_NotSourceXorDestination);
    painter.setCompositionMode(QPainter::CompositionMode_Difference);
//    painter.setCompositionMode(QPainter::CompositionMode_Exclusion);

    // ,CompositionMode_Xor,RasterOp_NotSourceXorDestination
//CompositionMode_Difference,CompositionMode_Exclusion,CompositionMode_ColorBurn,CompositionMode_Multiply
//    p.save();RasterOp_SourceOrNotDestination
    for(int i=0; i<36;i++)
    {
        painter.drawEllipse(QPoint(50,0),50,50);
        painter.rotate(10);
    }
}

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
    this->resize(300,300);
}

Widget::~Widget()
{
    delete ui;
}
