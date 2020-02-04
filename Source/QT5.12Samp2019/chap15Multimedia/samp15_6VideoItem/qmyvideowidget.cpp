#include "qmyvideowidget.h"
#include    <QKeyEvent>
#include    <QMouseEvent>

void QmyVideoWidget::keyPressEvent(QKeyEvent *event)
{
    if ((event->key() == Qt::Key_Escape)&&(isFullScreen()))
    {
        setFullScreen(false);
        event->accept();
        QVideoWidget::keyPressEvent(event);
    }
}

void QmyVideoWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button()==Qt::LeftButton)
    {
        if (thePlayer->state()==QMediaPlayer::PlayingState)
          thePlayer->pause();
        else
          thePlayer->play();
    }
    QVideoWidget::mousePressEvent(event);

}

QmyVideoWidget::QmyVideoWidget(QWidget *parent):QVideoWidget(parent)
{

}

void QmyVideoWidget::setMediaPlayer(QMediaPlayer *player)
{
    thePlayer=player;
}
