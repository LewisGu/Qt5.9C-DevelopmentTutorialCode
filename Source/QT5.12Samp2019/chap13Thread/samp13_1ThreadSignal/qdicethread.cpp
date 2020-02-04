#include "qdicethread.h"
#include    <QTime>

QDiceThread::QDiceThread()
{

}

void QDiceThread::diceBegin()
{ //开始掷骰子
    m_Paused=false;
}

void QDiceThread::dicePause()
{//暂停掷骰子
    m_Paused=true;
}

void QDiceThread::stopThread()
{//停止线程
    m_stop=true;
}

void QDiceThread::run()
{//线程任务
    m_stop=false;//启动线程时令m_stop=false
    m_seq=0; //掷骰子次数
    qsrand(QTime::currentTime().msec());//随机数初始化，qsrand是线程安全的

    while(!m_stop)//循环主体
    {
        if (!m_Paused)
        {
            m_diceValue=qrand(); //获取随机数
            m_diceValue=(m_diceValue % 6)+1;
            m_seq++;
            emit newValue(m_seq,m_diceValue);  //发射信号
        }
        msleep(500); //线程休眠500ms
    }

//  在  m_stop==true时结束线程任务
    quit();//相当于  exit(0),退出线程的事件循环
}

