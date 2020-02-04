#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    "qwchartview.h"

void MainWindow::createChart()
{ //创建图表
    QChart *chart = new QChart();
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
    ui->chartView->setCursor(Qt::CrossCursor); //设置鼠标指针为十字星

    QLineSeries *series0 = new QLineSeries();
    QLineSeries *series1 = new QLineSeries();
    series0->setName("Sin曲线");
    series1->setName("Cos曲线");

    QPen    pen;
    pen.setStyle(Qt::DotLine);//Qt::SolidLine, Qt::DashLine, Qt::DotLine, Qt::DashDotLine
    pen.setWidth(2);
    pen.setColor(Qt::red);
    series0->setPen(pen);

    pen.setStyle(Qt::SolidLine);//Qt::SolidLine, Qt::DashLine, Qt::DotLine, Qt::DashDotLine
    pen.setColor(Qt::blue);
    series1->setPen(pen);

    chart->addSeries(series0);
    chart->addSeries(series1);

    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(0, 10); //设置坐标轴范围
    axisX->setLabelFormat("%.1f"); //标签格式
    axisX->setTickCount(11); //主分隔个数
    axisX->setMinorTickCount(2);//4
    axisX->setTitleText("time(secs)"); //标题
//    axisX->setGridLineVisible(false);

    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(-2, 2);
    axisY->setTitleText("value");
    axisY->setTickCount(5);
    axisY->setLabelFormat("%.2f"); //标签格式
//    axisY->setGridLineVisible(false);
    axisY->setMinorTickCount(2);//4

//下面4行代码在Qt 5.12.1中编译时提示过时，
//    chart->setAxisX(axisX, series0); //添加X坐标轴
//    chart->setAxisX(axisX, series1); //添加X坐标轴
//    chart->setAxisY(axisY, series0); //添加Y坐标轴
//    chart->setAxisY(axisY, series1); //添加Y坐标轴

//另外一种添加坐标轴的方式，Qt 5.12.1中编译没问题
    chart->addAxis(axisX,Qt::AlignBottom); //坐标轴添加到图表，并指定方向
    chart->addAxis(axisY,Qt::AlignLeft);

    series0->attachAxis(axisX); //序列 series0 附加坐标轴
    series0->attachAxis(axisY);

    series1->attachAxis(axisX); //序列 series1 附加坐标轴
    series1->attachAxis(axisY);

//    chart->legend()->setAlignment(Qt::AlignRight);
    foreach (QLegendMarker* marker, chart->legend()->markers())
    {
        connect(marker, SIGNAL(clicked()), this, SLOT(on_LegendMarkerClicked()));
    }
}

void MainWindow::prepareData()
{//为序列生成数据
    QLineSeries *series0=(QLineSeries *)ui->chartView->chart()->series().at(0);
    QLineSeries *series1=(QLineSeries *)ui->chartView->chart()->series().at(1);

    series0->clear();
    series1->clear();

    qsrand(QTime::currentTime().second());//随机数初始化
    qreal   t=0,y1,y2,intv=0.1;
    qreal   rd;
    int cnt=100;
    for(int i=0;i<cnt;i++)
    {
        rd=(qrand() % 10)-5; //随机数,-5~+5
        y1=qSin(t)+rd/50;//+qrand();
        series0->append(t,y1);

        rd=(qrand() % 10)-5; //随机数,-5~+5
        y2=qSin(t+20)+rd/50;
        series1->append(t,y2);

        t+=intv;
    }

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->chartView);

    labXYValue = new QLabel("X=,  Y=  "); //状态栏显示鼠标点的坐标
    labXYValue->setMinimumWidth(200);

    ui->statusBar->addWidget(labXYValue);

    createChart();//创建图表
    prepareData();//生成数据

    QObject::connect(ui->chartView,SIGNAL(mouseMovePoint(QPoint)),
                     this, SLOT(on_mouseMovePoint(QPoint)));  //鼠标移动事件
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LegendMarkerClicked()
{//点击图例的marker的响应
    QLegendMarker* marker = qobject_cast<QLegendMarker*> (sender());

    switch (marker->type()) //marker的类型
    {
        case QLegendMarker::LegendMarkerTypeXY: //QLineSeries序列的图例marker
        {
            marker->series()->setVisible(!marker->series()->isVisible()); //可见性
            marker->setVisible(true);
            qreal alpha = 1.0;
            if (!marker->series()->isVisible())
                alpha = 0.5;

            QColor color;
            QBrush brush = marker->labelBrush();
            color = brush.color();
            color.setAlphaF(alpha);
            brush.setColor(color);
            marker->setLabelBrush(brush);

            brush = marker->brush();
            color = brush.color();
            color.setAlphaF(alpha);
            brush.setColor(color);
            marker->setBrush(brush);

            QPen pen = marker->pen();
            color = pen.color();
            color.setAlphaF(alpha);
            pen.setColor(color);
            marker->setPen(pen);
            break;
        }
        default:
            break;
    }
}

void MainWindow::on_mouseMovePoint(QPoint point)
{ //鼠标移动响应
    QPointF pt=ui->chartView->chart()->mapToValue(point); //转换为图表的数值
    labXYValue->setText(QString::asprintf("X=%.1f,Y=%.2f",pt.x(),pt.y())); //状态栏显示
}

void MainWindow::on_actZoomReset_triggered()
{ //恢复原始大小
    ui->chartView->chart()->zoomReset();
}

void MainWindow::on_actZoomIn_triggered()
{//放大
    ui->chartView->chart()->zoom(1.2);
}

void MainWindow::on_actZoomOut_triggered()
{//缩小
    ui->chartView->chart()->zoom(0.8);
}
