#include "qdicethread.h"
#include    <QTime>

QDiceThread::QDiceThread()
{

}

void QDiceThread::diceBegin()
{
//    mutex.lock();
    m_paused=false;
//    mutex.unlock();
}

void QDiceThread::diceEnd()
{
//    mutex.lock();
    m_paused=true;
//    mutex.unlock();
}

void QDiceThread::stopThread()
{
//    mutex.lock();
    m_stop=true;
//    mutex.unlock();
}

bool QDiceThread::readValue(int *seq, int *diceValue)
{
    if (mutex.tryLock())
    {
        *seq=m_seq;
        *diceValue=m_diceValue;
        mutex.unlock();
        return true;
    }
    else
        return false;
}

void QDiceThread::run()
{
    m_stop=false;//启动线程时令m_stop=false
    m_seq=0;
    qsrand(QTime::currentTime().msec());//随机数初始化，qsrand是线程安全的

    while(!m_stop)//循环主体
    {
        if (!m_paused)
        {
            mutex.lock();
            m_diceValue=qrand(); //获取随机数
            m_diceValue=(m_diceValue % 6)+1;
            m_seq++;
            mutex.unlock();
        }
        msleep(500); //线程休眠100ms
    }
}

