#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QTime>
#include    <QBarSet>
#include    <QInputDialog>

void MainWindow::iniData()
{ //数据初始化
    QStringList     headerList;
    headerList<<"姓名"<<"数学"<<"语文"<<"英语"<<"平均分";
    theModel->setHorizontalHeaderLabels(headerList); //设置表头文字

    qsrand(QTime::currentTime().second());//随机数种子
    for (int i=0;i<theModel->rowCount();i++)
    {
        QString studName=QString::asprintf("学生%2d",i+1);
        QStandardItem*  aItem=new QStandardItem(studName);//创建item
        aItem->setTextAlignment(Qt::AlignHCenter);
        theModel->setItem(i,colNoName,aItem); //i行，学生列，设置item

        qreal avgScore=0;
        for (int j=colNoMath;j<=colNoEnglish;j++) //数学，语文，英语
        { //不包含最后一列
            qreal score=50.0+(qrand() % 50);//随机数
            avgScore+=score;

            aItem=new QStandardItem(QString::asprintf("%.0f",score));//创建 item
            aItem->setTextAlignment(Qt::AlignHCenter);
            theModel->setItem(i,j,aItem); //为模型的某个行列位置设置Item
        }
        aItem=new QStandardItem(QString::asprintf("%.1f",avgScore/3));//创建平均分item
        aItem->setTextAlignment(Qt::AlignHCenter);
        aItem->setFlags(aItem->flags() & (!Qt::ItemIsEditable));//平均分不允许编辑
        theModel->setItem(i,colNoAverage,aItem); //平均分
    }
}

void MainWindow::surveyData()
{ //数据统计
    int cnt50,cnt60,cnt70,cnt80,cnt90;

    qreal   sumV,minV,maxV;
    qreal   val;
    QTreeWidgetItem *item; //节点

    int i,j;
    for(i=colNoMath;i<=colNoAverage;i++)
    {
        sumV=0;
        cnt50=0;
        cnt60=0;
        cnt70=0;
        cnt80=0;
        cnt90=0;

        for(j=0;j<theModel->rowCount();j++)
        {
            val=theModel->item(j,i)->text().toDouble();
            ////////////////////////////
            if (j==0)
            {
                minV=val;
                maxV=val;
            }
            if (val<minV)
                minV=val;
            if (val>maxV)
                maxV=val;
            //////////////////////////
            sumV+=val;

            if (val<60)
                cnt50++;
            else if ((val>=60) && (val<70))
                cnt60++;
            else if ((val>=70) && (val<80))
                cnt70++;
            else if ((val>=80) && (val<90))
                cnt80++;
            else
                cnt90++;
        }
        //////////
        item=ui->treeWidget->topLevelItem(0); //<60
        item->setText(i,QString::number(cnt50));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item=ui->treeWidget->topLevelItem(1); //60
        item->setText(i,QString::number(cnt60));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item=ui->treeWidget->topLevelItem(2); //70
        item->setText(i,QString::number(cnt70));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item=ui->treeWidget->topLevelItem(3); //80
        item->setText(i,QString::number(cnt80));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item=ui->treeWidget->topLevelItem(4); //90
        item->setText(i,QString::number(cnt90));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item=ui->treeWidget->topLevelItem(5); //average
        item->setText(i,QString::number(sumV/theModel->rowCount()));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item=ui->treeWidget->topLevelItem(6); //max
        item->setText(i,QString::number(maxV));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item=ui->treeWidget->topLevelItem(7); //min
        item->setText(i,QString::number(minV));
        item->setTextAlignment(i,Qt::AlignHCenter);
    }
}

void MainWindow::iniBarChart()
{ //柱状图初始化
    QChart *chart = new QChart(); //创建chart
    chart->setTitle("Barchart演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewBar->setChart(chart); //为ChartView设置chart
    ui->chartViewBar->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildBarChart()
{ //构造柱状图
    QChart *chart =ui->chartViewBar->chart(); //获取ChartView关联的chart
    chart->removeAllSeries(); //删除所有序列

    chart->removeAxis(chart->axisX()); //删除坐标轴
    chart->removeAxis(chart->axisY()); //删除坐标轴

//创建三个QBarSet数据集,从数据模型的表头获取Name
    QBarSet *setMath = new QBarSet(theModel->horizontalHeaderItem(colNoMath)->text());
    QBarSet *setChinese = new QBarSet(theModel->horizontalHeaderItem(colNoChinese)->text());
    QBarSet *setEnglish= new QBarSet(theModel->horizontalHeaderItem(colNoEnglish)->text());

    QLineSeries *Line = new QLineSeries(); //创建一个QLineSeries序列用于显示平均分
    Line->setName(theModel->horizontalHeaderItem(colNoAverage)->text());
    QPen    pen;
    pen.setColor(Qt::red);
    pen.setWidth(2);
    Line->setPen(pen);
//    lineseries->setPointLabelsVisible(true);
//    lineseries->setPointLabelsFormat("@yPoint");

    for(int i=0;i<theModel->rowCount();i++)
    {//从数据模型获取数据
        setMath->append(theModel->item(i,colNoMath)->text().toInt()); //数学
        setChinese->append(theModel->item(i,colNoChinese)->text().toInt()); //语文
        setEnglish->append(theModel->item(i,colNoEnglish)->text().toInt()); //英语
        Line->append(QPointF(i,theModel->item(i,colNoAverage)->text().toFloat()));  //平均分
    }

//创建一个柱状图序列 QBarSeries, 并添加三个数据集
    QBarSeries *series = new QBarSeries();
    series->append(setMath);
    series->append(setChinese);
    series->append(setEnglish);
//    series->setLabelsVisible(true);
//    series->setLabelsPosition(QAbstractBarSeries::LabelsOutsideEnd);// LabelsCenter
//    series->setLabelsPosition(QAbstractBarSeries::LabelsCenter);// LabelsCenter

//    lineseries->setPointLabelsVisible(true);
//    lineseries->setPointLabelsFormat("@yPoint");

    chart->addSeries(series); //添加柱状图序列
    chart->addSeries(Line); //添加折线图序列

//用于横坐标在字符串列表,即学生姓名
    QStringList categories;
    for (int i=0;i<theModel->rowCount();i++)
        categories <<theModel->item(i,colNoName)->text();

//用于柱状图的坐标轴
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories); //添加横坐标文字列表
//    chart->createDefaultAxes();
    chart->setAxisX(axisX, series); //设置横坐标
    chart->setAxisX(axisX, Line);//设置横坐标
    axisX->setRange(categories.at(0), categories.at(categories.count()-1)); //这只坐标轴范围

//数值型坐标作为纵轴
    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(0, 100);
    axisY->setTitleText("分数");
    axisY->setTickCount(6);//11
    axisY->setLabelFormat("%.0f"); //标签格式
//    axisY->setGridLineVisible(false);
//    axisY->setMinorTickCount(4);
    chart->setAxisY(axisY, series); //为
    chart->setAxisY(axisY, Line);

//    lineseries->setPointLabelsVisible(true);
//    lineseries->setPointLabelsFormat("@yPoint");

    chart->legend()->setVisible(true); //显示图例
    chart->legend()->setAlignment(Qt::AlignBottom); //图例显示在下方
}

void MainWindow::iniPiewChart()
{ //饼图初始化
    QChart *chart = new QChart();
    chart->setTitle(" Piechart演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewPie->setChart(chart);
    ui->chartViewPie->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildPieChart()
{ //绘制饼图
    QChart *chart =ui->chartViewPie->chart(); //获取chart对象
    chart->removeAllSeries(); //删除所有序列

    int colNo=1+ui->cBoxCourse->currentIndex(); //获取分析对象，数学、英语、语文或平均分

    QPieSeries *series = new QPieSeries(); //创建饼图序列
    series->setHoleSize(ui->spinHoleSize->value()); //饼图中间空心的大小

    for (int i=0;i<=4;i++) //添加分块数据
    {
        QTreeWidgetItem*  item=ui->treeWidget->topLevelItem(i); //获得QTreeWidgetItem的item
        series->append(item->text(0),item->text(colNo).toFloat()); //添加一个饼图分块数据,标签，数值
    }

    QPieSlice *slice; //饼图分块
    for(int i=0;i<=4;i++) //设置每个分块的标签文字
    {
        slice =series->slices().at(i);  //获取分块
        slice->setLabel(slice->label()+QString::asprintf(": %.0f人, %.1f%%",    //设置分块的标签
                        slice->value(),slice->percentage()*100));
//信号与槽函数关联，鼠标落在某个分块上时，此分块弹出
        connect(slice, SIGNAL(hovered(bool)),
                this, SLOT(on_PieSliceHighlight(bool)));
    }
    slice->setExploded(true); //最后一个设置为exploded
    series->setLabelsVisible(true); //只影响当前的slices，必须添加完slice之后再设置
    chart->addSeries(series); //添加饼图序列
    chart->setTitle("Piechart----"+ui->cBoxCourse->currentText());

    chart->legend()->setVisible(true); //图例
    chart->legend()->setAlignment(Qt::AlignRight);//Qt::AlignRight
}

void MainWindow::iniStackedBar()
{//初始化叠加柱状图绘制窗口
    QChart *chart = new QChart();
    chart->setTitle("StackedBar 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewStackedBar->setChart(chart);
    ui->chartViewStackedBar->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildStackedBar()
{//绘制叠加柱状图
    QChart *chart =ui->chartViewStackedBar->chart(); //获取QChart对象
    chart->removeAllSeries();//删除所有序列
    chart->removeAxis(chart->axisX()); //删除坐标轴
    chart->removeAxis(chart->axisY());

//创建三门课程的数据集
    QBarSet *setMath = new QBarSet(theModel->horizontalHeaderItem(colNoMath)->text());
    QBarSet *setChinese = new QBarSet(theModel->horizontalHeaderItem(colNoChinese)->text());
    QBarSet *setEnglish= new QBarSet(theModel->horizontalHeaderItem(colNoEnglish)->text());

    for(int i=0;i<theModel->rowCount();i++)
    { //添加分数数据到数据集
        setMath->append(theModel->item(i,colNoMath)->text().toInt());
        setChinese->append(theModel->item(i,colNoChinese)->text().toInt());
        setEnglish->append(theModel->item(i,colNoEnglish)->text().toInt());
    }

//创建   QStackedBarSeries对象并添加数据集
    QStackedBarSeries *series = new QStackedBarSeries();
    series->append(setMath);
    series->append(setChinese);
    series->append(setEnglish);
    series->setLabelsVisible(true);//显示每段的标签
//    series->setLabelsPosition(QAbstractBarSeries::LabelsCenter);// LabelsCenter

    chart->addSeries(series); //添加序列到图表

    QStringList categories;
    for (int i=0;i<theModel->rowCount();i++)
        categories <<theModel->item(i,colNoName)->text();

    QBarCategoryAxis *axisX = new QBarCategoryAxis(); //类别坐标轴，作为横轴
    axisX->append(categories);
    chart->setAxisX(axisX, series);
    axisX->setRange(categories.at(0), categories.at(categories.count()-1));

    QValueAxis *axisY = new QValueAxis; //数值坐标轴，作为纵轴
    axisY->setRange(0, 300);
    axisY->setTitleText("总分");
    axisY->setTickCount(6);
    axisY->setLabelFormat("%.0f"); //标签格式
    chart->setAxisY(axisY, series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
}

void MainWindow::iniPercentBar()
{//百分比柱状图初始化
    QChart *chart = new QChart();
    chart->setTitle("PercentBar 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewPercentBar->setChart(chart);
    ui->chartViewPercentBar->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildPercentBar()
{//绘制百分比柱状图
    QChart *chart =ui->chartViewPercentBar->chart();
    chart->removeAllSeries();
    chart->removeAxis(chart->axisX());
    chart->removeAxis(chart->axisY());

//创建数据集
    QBarSet *setMath = new QBarSet(theModel->horizontalHeaderItem(colNoMath)->text());
    QBarSet *setChinese = new QBarSet(theModel->horizontalHeaderItem(colNoChinese)->text());
    QBarSet *setEnglish= new QBarSet(theModel->horizontalHeaderItem(colNoEnglish)->text());

    QTreeWidgetItem *item; //节点
    QStringList categories;
    for (int i=0;i<=4;i++)
    {//从分数段统计数据表里获取数据，添加到数据集
        item=ui->treeWidget->topLevelItem(i);
        categories<<item->text(0);//用作横坐标的标签
        setMath->append(item->text(colNoMath).toFloat());
        setChinese->append(item->text(colNoChinese).toFloat());
        setEnglish->append(item->text(colNoEnglish).toFloat());
    }

    QPercentBarSeries *series = new QPercentBarSeries(); //序列
    series->append(setMath);
    series->append(setChinese);
    series->append(setEnglish);
    series->setLabelsVisible(true);//显示百分比
//    series->setLabelsFormat("@value人");

    chart->addSeries(series);

    QBarCategoryAxis *axisX = new QBarCategoryAxis(); //横坐标
    axisX->append(categories);
    chart->setAxisX(axisX, series);
    axisX->setRange(categories.at(0), categories.at(categories.count()-1));

    QValueAxis *axisY = new QValueAxis;//纵坐标
    axisY->setRange(0, 100);
    axisY->setTitleText("百分比");
    axisY->setTickCount(6);
    axisY->setLabelFormat("%.1f"); //标签格式
    chart->setAxisY(axisY, series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight); //AlignBottom
}

void MainWindow::iniScatterChart()
{//散点图初始化
    QChart *chart = new QChart();
    chart->setTitle("QScatterSeries 和 QSplineSeries 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewScatter->setChart(chart);
    ui->chartViewScatter->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildScatterChart()
{ //绘制 QScatterSeries和QSplineSeries图
    QChart *chart =ui->chartViewScatter->chart();
    chart->removeAllSeries();
    chart->removeAxis(chart->axisX());
    chart->removeAxis(chart->axisY());

    QSplineSeries *seriesLine = new QSplineSeries(); //光滑曲线序列
    seriesLine->setName("spline");
    QPen pen;
    pen.setColor(Qt::blue);
    pen.setWidth(2);
//    seriesLine->setColor(Qt::blue);
    seriesLine->setPen(pen);

    QScatterSeries *series0 = new QScatterSeries(); //散点序列
    series0->setName("散点");
    series0->setMarkerShape(QScatterSeries::MarkerShapeCircle);//MarkerShapeRectangle,MarkerShapeCircle
    series0->setBorderColor(Qt::black);
    series0->setBrush(QBrush(Qt::red));
    series0->setMarkerSize(12);

    qsrand(QTime::currentTime().second());//随机数种子

    for (int i=0;i<10;i++)
    {
        int x=(qrand() % 20);//0到20之间的随机数
        int y=(qrand() % 20);
        series0->append(x,y); //散点序列
        seriesLine->append(x,y); //光滑曲线序列
    }

    chart->addSeries(series0);
    chart->addSeries(seriesLine);

//    QValueAxis *axisY = new QValueAxis;
//    axisY->setRange(0, 20);
//    axisY->setTitleText("Y");
//    axisY->setTickCount(11);
//    axisY->setLabelFormat("%.0f"); //标签格式
//    axisY->setGridLineVisible(true);
//    chart->setAxisY(axisY, series0);
//    chart->setAxisY(axisY, seriesLine);

//    QValueAxis *axisX = new QValueAxis;
//    axisX->setRange(0, 20);
//    axisX->setTitleText("X");
//    axisX->setTickCount(11);
//    axisX->setLabelFormat("%.0f"); //标签格式
//    axisX->setGridLineVisible(true);
//    chart->setAxisX(axisX, series0);
//    chart->setAxisX(axisX, seriesLine);

    chart->createDefaultAxes(); //创建缺省的坐标轴
    chart->axisX()->setTitleText("X 轴");
    chart->axisX()->setRange(-2,22);

    chart->axisY()->setTitleText("Y 轴");
    chart->axisY()->setRange(-2,22);


    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight); //AlignBottom

    foreach (QLegendMarker* marker, chart->legend()->markers()) {
        QObject::disconnect(marker, SIGNAL(clicked()), this, SLOT(on_chartBarLegendMarkerClicked()));
        QObject::connect(marker, SIGNAL(clicked()), this, SLOT(on_chartBarLegendMarkerClicked()));
    }

}

void MainWindow::on_itemChanged(QStandardItem *item)
{ //自动计算平均分
    if ((item->column()<colNoMath) || (item->column()>colNoEnglish))
        return; //如果被修改的item不是数学、语文、英语,就退出

    int rowNo=item->row(); //获取数据的行编号

    qreal   avg=0;
    QStandardItem   *aItem;
    for (int i=colNoMath;i<=colNoEnglish;i++)
    { //获取三个分数的和
        aItem=theModel->item(rowNo,i);
        avg+=aItem->text().toDouble();
    }
    avg=avg/3; //计算平均分

    aItem=theModel->item(rowNo,colNoAverage); //获取平均分数据的item
    aItem->setText(QString::asprintf("%.1f",avg)); //更新平均分数据
}

void MainWindow::on_PieSliceHighlight(bool show)
{ //鼠标移入、移出时触发hovered()信号，动态设置setExploded()效果
    QPieSlice *slice;
    slice=(QPieSlice *)sender();
//    slice->setLabelVisible(show);
    slice->setExploded(show);
}

void MainWindow::on_chartBarLegendMarkerClicked()
{
    QLegendMarker* marker = qobject_cast<QLegendMarker*> (sender());

    switch (marker->type())
    {
        case QLegendMarker::LegendMarkerTypeXY:
        {
            marker->series()->setVisible(!marker->series()->isVisible());
            marker->setVisible(true);
            break;
        }

        case QLegendMarker::LegendMarkerTypeBar:
        { //bar不好处理, barset不能被隐藏，只能take，但是无法恢复
            marker->series()->setVisible(!marker->series()->isVisible());
            marker->setVisible(true);
            break;
        }

        default:
            break;
    }

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    theModel = new QStandardItemModel(iniDataRowCount,fixedColumnCount,this); //数据模型

    iniData(); //初始化数据
    surveyData();//数据统计
//数据模块的 itemChanged信号与自定义的槽函数关联，用于自动计算平均分
    connect(theModel,SIGNAL(itemChanged(QStandardItem *)),
            this,SLOT(on_itemChanged(QStandardItem *)));

    ui->tableView->setModel(theModel); //设置数据模型

    iniBarChart(); //柱状图初始化
    iniPiewChart();//饼图初始化
    iniStackedBar();//堆积图初始化
    iniPercentBar();//百分比图初始化
    iniScatterChart(); //散点图初始化
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actTongJi_triggered()
{
    surveyData();
}


void MainWindow::on_actGenData_triggered()
{
    iniData();
    surveyData();
}

void MainWindow::on_btnBuildBarChart_clicked()
{
    buildBarChart();
}

void MainWindow::on_btnDrawPieChart_clicked()
{
    buildPieChart();
}

void MainWindow::on_cBoxCourse_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    buildPieChart();
}

void MainWindow::on_spinHoleSize_valueChanged(double arg1)
{
    QPieSeries  *series;
    series=(QPieSeries*)ui->chartViewPie->chart()->series().at(0);
    series->setHoleSize(arg1);
}

void MainWindow::on_spinPieSize_valueChanged(double arg1)
{
    QPieSeries  *series;
    series=(QPieSeries*)ui->chartViewPie->chart()->series().at(0);
    series->setPieSize(arg1);
}

void MainWindow::on_btnBuildStackedBar_clicked()
{
    buildStackedBar();
}

void MainWindow::on_btnPercentBar_clicked()
{
    buildPercentBar();
}

void MainWindow::on_btnScatter_clicked()
{
    buildScatterChart();
}

void MainWindow::on_cBoxTheme_currentIndexChanged(int index)
{
    ui->chartViewPie->chart()->setTheme(QChart::ChartTheme(index));
}
