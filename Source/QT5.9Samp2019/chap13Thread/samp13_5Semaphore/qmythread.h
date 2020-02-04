#ifndef QMYTHREAD_H
#define QMYTHREAD_H

//#include    <QObject>
#include    <QThread>

class QThreadDAQ : public QThread
{
    Q_OBJECT

private:
    bool    m_stop=false; //停止线程
protected:
    void    run() Q_DECL_OVERRIDE;
public:
    QThreadDAQ();
    void    stopThread();
};

class QThreadShow : public QThread
{
    Q_OBJECT
private:
    bool    m_stop=false; //停止线程
protected:
    void    run() Q_DECL_OVERRIDE;
public:
    QThreadShow();
    void    stopThread();
signals:
    void    newValue(int *data,int count, int seq);
};
#endif // QMYTHREAD_H
