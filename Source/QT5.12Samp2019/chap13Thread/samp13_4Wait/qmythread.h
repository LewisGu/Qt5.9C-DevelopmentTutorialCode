#ifndef QMYTHREAD_H
#define QMYTHREAD_H

//#include    <QObject>
#include    <QThread>

class QThreadProducer : public QThread
{
    Q_OBJECT
private:
    bool    m_stop=false; //停止线程
protected:
    void    run() Q_DECL_OVERRIDE;
public:
    QThreadProducer();
    void    stopThread();
};


class QThreadConsumer : public QThread
{
    Q_OBJECT
private:
    bool    m_stop=false; //停止线程
protected:
    void    run() Q_DECL_OVERRIDE;
public:
    QThreadConsumer();
    void    stopThread();
signals:
    void    newValue(int seq,int diceValue);
};
#endif // QMYTHREAD_H
