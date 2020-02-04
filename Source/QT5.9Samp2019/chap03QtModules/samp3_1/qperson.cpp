#include "qperson.h"

QPerson::QPerson(QString fName,QObject *parent) : QObject(parent)
{ //构造函数
    m_name=fName;
}

int QPerson::age()
{ //返回age
    return  m_age;
}

void QPerson::setAge(int value)
{//设置age
    m_age=value;
    emit ageChanged(m_age); //发射信号
}

void QPerson::incAge()
{
    m_age++;
    emit ageChanged(m_age);//发射信号
}

