#ifndef QMYVIDEOWIDGET_H
#define QMYVIDEOWIDGET_H

#include    <QObject>
#include    <QWidget>
#include    <QVideoWidget>
#include    <QMediaPlayer>

class QmyVideoWidget : public QVideoWidget
{
private:
    QMediaPlayer    *thePlayer;//

protected:
    void keyPressEvent(QKeyEvent *event);

    void mousePressEvent(QMouseEvent *event);

public:
    QmyVideoWidget(QWidget *parent = Q_NULLPTR);
    void    setMediaPlayer(QMediaPlayer *player);

};

#endif // QMYVIDEOWIDGET_H
