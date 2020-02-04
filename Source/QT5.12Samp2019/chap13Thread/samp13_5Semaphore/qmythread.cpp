#include    "qmythread.h"
#include    <QSemaphore>

const int BufferSize = 8;
int buffer1[BufferSize];
int buffer2[BufferSize];
int curBuf=1; //当前正在写入的Buffer

int bufNo=0; //采集的缓冲区序号

quint8   counter=0;//数据生成器

QSemaphore emptyBufs(2);//信号量：空的缓冲区个数，初始资源个数为2
QSemaphore fullBufs; //满的缓冲区个数，初始资源为0

QThreadDAQ::QThreadDAQ()
{

}

void QThreadDAQ::stopThread()
{
    m_stop=true;
}

void QThreadDAQ::run()
{
    m_stop=false;//启动线程时令m_stop=false
    bufNo=0;//缓冲区序号
    curBuf=1; //当前写入使用的缓冲区
    counter=0;//数据生成器

    int n=emptyBufs.available();
    if (n<2)  //保证 线程启动时emptyBufs.available==2
      emptyBufs.release(2-n);

    while(!m_stop)//循环主体
    {
        emptyBufs.acquire();//获取一个空的缓冲区
        for(int i=0;i<BufferSize;i++) //产生一个缓冲区的数据
        {
            if (curBuf==1)
                buffer1[i]=counter; //向缓冲区写入数据
            else
                buffer2[i]=counter;
            counter++; //模拟数据采集卡产生数据

            msleep(50); //每50ms产生一个数
        }

        bufNo++;//缓冲区序号
        if (curBuf==1) // 切换当前写入缓冲区
          curBuf=2;
        else
          curBuf=1;

        fullBufs.release(); //有了一个满的缓冲区,available==1
    }
    quit();
}

void QThreadShow::run()
{
    m_stop=false;//启动线程时令m_stop=false

    int n=fullBufs.available();
    if (n>0)
       fullBufs.acquire(n); //将fullBufs可用资源个数初始化为0

    while(!m_stop)//循环主体
    {
        fullBufs.acquire(); //等待有缓冲区满,当fullBufs.available==0阻塞

        int bufferData[BufferSize];
        int seq=bufNo;

        if(curBuf==1) //当前在写入的缓冲区是1，那么满的缓冲区是2
            for (int i=0;i<BufferSize;i++)
               bufferData[i]=buffer2[i]; //快速拷贝缓冲区数据
        else
            for (int i=0;i<BufferSize;i++)
               bufferData[i]=buffer1[i];

        emptyBufs.release();//释放一个空缓冲区
        emit    newValue(bufferData,BufferSize,seq);//给主线程传递数据
    }
    quit();
}

QThreadShow::QThreadShow()
{

}

void QThreadShow::stopThread()
{
    m_stop=true;
}
