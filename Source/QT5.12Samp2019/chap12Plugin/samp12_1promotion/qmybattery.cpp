#include "qmybattery.h"

#include    <QPainter>

void QmyBattery::paintEvent(QPaintEvent *event)
{  //界面组件的绘制
    Q_UNUSED(event);

    QPainter    painter(this);
    QRect rect(0,0,width(),height()); //viewport矩形区
    painter.setViewport(rect);//设置Viewport
    painter.setWindow(0,0,120,50); // 设置窗口大小，逻辑坐标
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);

//绘制电池边框
    QPen    pen;//设置画笔
    pen.setWidth(2); //线宽
    pen.setColor(mColorBorder); //划线颜色
    pen.setStyle(Qt::SolidLine);//线的类型，实线、虚线等
    pen.setCapStyle(Qt::FlatCap);//线端点样式
    pen.setJoinStyle(Qt::BevelJoin);//线的连接点样式
    painter.setPen(pen);

    QBrush  brush;//设置画刷
    brush.setColor(mColorBack); //画刷颜色
    brush.setStyle(Qt::SolidPattern); //画刷填充样式
    painter.setBrush(brush);

    rect.setRect(1,1,109,48);
    painter.drawRect(rect);//绘制电池边框

    brush.setColor(mColorBorder); //画刷颜色
    painter.setBrush(brush);
    rect.setRect(110,15,10,20);
    painter.drawRect(rect); //画电池正极头

//画电池柱
    if (mPowerLevel>mWarnLevel)
    {  //正常颜色电量柱
        brush.setColor(mColorPower); //画刷颜色
        pen.setColor(mColorPower); //划线颜色
    }
    else
    { //电量低电量柱
        brush.setColor(mColorWarning); //画刷颜色
        pen.setColor(mColorWarning); //划线颜色
    }
    painter.setBrush(brush);
    painter.setPen(pen);

    if (mPowerLevel>0)
    {
        rect.setRect(5,5,mPowerLevel,40);
        painter.drawRect(rect);//画电池柱
    }

//绘制电量百分比文字
    QFontMetrics    textSize(this->font());
    QString powStr=QString::asprintf("%d%%",mPowerLevel);
    QRect textRect=textSize.boundingRect(powStr);//得到字符串的rect

    painter.setFont(this->font());
    pen.setColor(mColorBorder); //划线颜色
    painter.setPen(pen);

    painter.drawText(55-textRect.width()/2,
               23+textRect.height()/2,
               powStr);
}

QmyBattery::QmyBattery(QWidget *parent) : QWidget(parent)
{
//    setPalette(QPalette(mColorBack));
//    setAutoFillBackground(true);
//    this->resize(120,50);
}

void QmyBattery::setPowerLevel(int pow)
{ //设置当前电量值
    mPowerLevel=pow;
    emit powerLevelChanged(pow); //触发信号
    repaint();
}

int QmyBattery::powerLevel()
{ //读取当前电量值
    return mPowerLevel;
}

void QmyBattery::setWarnLevel(int warn)
{//设置电量低阈值
    mWarnLevel=warn;
    repaint();
}

int QmyBattery::warnLevel()
{//读取电量低阈值
    return  mWarnLevel;
}

QSize QmyBattery::sizeHint()
{//报告缺省大小,调整比例
    int H=this->height();
    int W=H*12/5;
    QSize   size(W,H);
    return size;
}
