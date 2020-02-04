#include "qwgraphicsview.h"
#include    <QMouseEvent>
#include    <QPoint>

void QWGraphicsView::mouseMoveEvent(QMouseEvent *event)
{//鼠标移动事件
    QPoint point=event->pos(); //QGraphicsView的坐标
    emit mouseMovePoint(point); //释放信号
    QGraphicsView::mouseMoveEvent(event);
}

void QWGraphicsView::mousePressEvent(QMouseEvent *event)
{ //鼠标左键按下事件
    if (event->button()==Qt::LeftButton)
    {
        QPoint point=event->pos(); //QGraphicsView的坐标
        emit mouseClicked(point);//释放信号
    }
    QGraphicsView::mousePressEvent(event);
}

QWGraphicsView::QWGraphicsView(QWidget *parent):QGraphicsView(parent)
{

}
