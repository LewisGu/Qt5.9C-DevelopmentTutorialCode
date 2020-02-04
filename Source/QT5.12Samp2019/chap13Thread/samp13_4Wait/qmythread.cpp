#include    "qmythread.h"
#include    <QWaitCondition>
#include    <QTime>
#include    <QMutex>


QMutex  mutex;
QWaitCondition  newdataAvailable;

int     seq=0;//序号
int     diceValue;

QThreadProducer::QThreadProducer()
{

}

void QThreadProducer::stopThread()
{
    QMutexLocker  locker(&mutex);
    m_stop=true;
}

void QThreadProducer::run()
{
    m_stop=false;//启动线程时令m_stop=false
    seq=0;
    qsrand(QTime::currentTime().msec());//随机数初始化，qsrand是线程安全的

    while(!m_stop)//循环主体
    {
        mutex.lock();
        diceValue=qrand(); //获取随机数
        diceValue=(diceValue % 6)+1;
        seq++;
        mutex.unlock();

        newdataAvailable.wakeAll();//唤醒所有线程，有新数据了
        msleep(500); //线程休眠100ms
    }
}


void QThreadConsumer::run()
{
    m_stop=false;//启动线程时令m_stop=false
    while(!m_stop)//循环主体
    {
        mutex.lock();
        newdataAvailable.wait(&mutex);//会先解锁mutex，使其他线程可以使用mutex
        emit    newValue(seq,diceValue);
        mutex.unlock();
//        msleep(100); //线程休眠100ms
    }

}

QThreadConsumer::QThreadConsumer()
{

}

void QThreadConsumer::stopThread()
{
    QMutexLocker  locker(&mutex);
    m_stop=true;
}
