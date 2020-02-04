
这是《Qt 5.9 C++开发指南》一书所有实例的完整源代码，全部实例都重新用Qt 5.12.1 编译和测试，对在Qt 5.12.1中编译有错误的进行了修改。修改后几乎所有实例程序均可在Qt 5.12.1里编译和运行。

【注意：Qt Creator打开项目时，项目路径中不能有汉字或全角符号，否则无法编译】

发布日期：2019年5月
开发测试环境：64位Window 7系统 , Qt 5.12.1


《Qt 5.9 C++开发指南》图书信息：

作者：王维波，栗宝鹃，侯春望

人民邮电出版社，2018年5月出版


【1】大部分程序都可以在Qt 5.12.1中直接编译和运行，只有两个实例有错误：

(1)原来的实例samp8_2 编译有问题，paintEvent()的代码中提示std::cos(), std::sin()函数不存在。改为使用<Qtmath>中的函数qSin()和qCos()，修改后可编译了。

(2)samp12_4调用Delphi编写的实例无法运行，因为Delphi是32位的，编写的DLL是32位的，而Qt 5.12.1的minGW和MSVC编译器都是64位的。在Qt 5.13中又有了32位编译器，使用32位编译器就可以。


【2】第12章编写Qt Creator的中 Qt Designer的插件，需要使用 MSVC 2015 32bit编译器，但是Qt 5.12.1以后都取消了这个编译器版本， 而Qt Creator还是用MSVC 2015 32bit编译的，所以，编写的插件无法在Qt Creator内置的Qt Designer里显示，但是不影响编译和使用。


【3】使用QChart的程序中，编译提示有些函数过时，不修改也不影响编译和运行，涉及以下几个实例。

(1)实例samp9_2，编译时提示QChart::setAxisX(), QChart::setAxisY()函数过时,应改为下面的方式添加坐标轴
    chart->addAxis(axisX,Qt::AlignBottom); //坐标轴添加到图表，并指定方向
    chart->addAxis(axisY,Qt::AlignLeft);

    series0->attachAxis(axisX); //序列 series0 附加坐标轴
    series0->attachAxis(axisY);

    series1->attachAxis(axisX); //序列 series1 附加坐标轴
    series1->attachAxis(axisY);

    编译时提示QChart::axisX(), QChart::axisY()函数过时，将其修改为如下的形式：
    QList<QAbstractAxis*> axes;
    if (ui->radioX->isChecked())
        axes=ui->chartView->chart()->axes(Qt::Horizontal);
    else
        axes=ui->chartView->chart()->axes(Qt::Vertical);
    curAxis=(QValueAxis*)axes[0];

(2)实例samp9_1，编译时提示QChart::setAxisX(), QChart::setAxisY()函数过时，但依然是可以使用的。为了与书上的内容一致，未做修改

(3)实例samp9_3，编译时提示QChart::axisX(), QChart::axisY()函数过时，但是用到这两个函数的代码比较多，故未做修改

(4)samp15_4, 替换了过时的函数QChart::setAxisX(), QChart::setAxisY()

