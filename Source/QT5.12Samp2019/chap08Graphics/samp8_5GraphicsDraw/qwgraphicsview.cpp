#include "qwgraphicsview.h"
#include    <QMouseEvent>
#include    <QPoint>

void QWGraphicsView::mouseMoveEvent(QMouseEvent *event)
{//鼠标移动事件
//    QPoint  point;
    QPoint point=event->pos(); //QGraphicsView的坐标
    emit mouseMovePoint(point); //释放信号
    QGraphicsView::mouseMoveEvent(event);
}

void QWGraphicsView::mousePressEvent(QMouseEvent *event)
{ //鼠标左键按下事件
    if (event->button()==Qt::LeftButton)
    {
//        QPoint  point;
        QPoint point=event->pos(); //QGraphicsView的坐标
        emit mouseClicked(point);//释放信号
    }
    QGraphicsView::mousePressEvent(event);
}

void QWGraphicsView::mouseDoubleClickEvent(QMouseEvent *event)
{ //鼠标双击事件
    if (event->button()==Qt::LeftButton)
    {
//        QPoint  point;
        QPoint point=event->pos(); //QGraphicsView的坐标
        emit mouseDoubleClick(point);//释放信号
    }
    QGraphicsView::mouseDoubleClickEvent(event);
}

void QWGraphicsView::keyPressEvent(QKeyEvent *event)
{ //按键事件
    emit keyPress(event);
    QGraphicsView::keyPressEvent(event);
}

QWGraphicsView::QWGraphicsView(QWidget *parent):QGraphicsView(parent)
{

}
