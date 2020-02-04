#ifndef QDICETHREAD_H
#define QDICETHREAD_H

//#include    <QObject>
#include    <QThread>
#include    <QMutex>

class QDiceThread : public QThread
{
    Q_OBJECT

private:
    QMutex  mutex; //互斥量

    int     m_seq=0;//序号
    int     m_diceValue;
    bool    m_paused=true;
    bool    m_stop=false; //停止线程
protected:
    void    run() Q_DECL_OVERRIDE;
public:
    QDiceThread();

    void    diceBegin();//掷一次骰子
    void    diceEnd();//
    void    stopThread();

    bool    readValue(int *seq, int *diceValue); //用于主线程读取数据的函数
};

#endif // QDICETHREAD_H
