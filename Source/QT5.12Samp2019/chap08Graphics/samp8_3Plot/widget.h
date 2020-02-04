#ifndef WIDGET_H
#define WIDGET_H

#include     <QWidget>
#include    <QMargins>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

private:
//    static const   int m_count=1000;
//    qreal   m_t[m_count];
//    qreal   m_sin[m_count];

    QVector<QPointF>    m_dataF;//实际数据
    QVector<QPoint>     m_points;//数据点，像素点
    const   qreal   m_intv=0.01;
    const   int     m_count=1000;

    QMargins    m_margins;//(50,50,50,50);//QMargins(int left, int top, int right, int bottom)
//    const   int     m_margin=50;//边距空白
    const   int     m_XTicks=10;
    const   int     m_YTicks=4;

    qreal   m_xmin=0,m_xmax=10;//
    qreal   m_xspan=m_xmax-m_xmin;

    qreal   m_ymin=-2,m_ymax=2; //
    qreal   m_yspan=m_ymax-m_ymin;//


    qreal   m_xRatio,m_yRatio;//X,Y周比例,即一个数值是多少个像素点

    void    iniData();//初始化数据
    void    preparePoints(QRect &windRect);//准备画点的数据
    void    drawGrid(QPainter& p, QRect &windRect);//绘制网格底图
    void    drawCurve(QPainter& p, QRect &windRect);//绘制曲线
protected:
    void    paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
