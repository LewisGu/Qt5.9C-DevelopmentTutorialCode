#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    "qwdialogpen.h"

// 若MSVC 编译版本错误，修改 msvc-version.conf 文件
// 解决MSVC编译时，界面汉字乱码的问题
#if _MSC_VER >= 1600     //MSVC2015>1899,    MSVC_VER= 14.0
#pragma execution_character_set("utf-8")
#endif


void MainWindow::createChart()
{//创建图表的各个部件
    QChart *chart = new QChart();
    chart->setTitle(tr("简单函数曲线"));
//    chart->setAcceptHoverEvents(true);
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);

    QLineSeries *series0 = new QLineSeries();
    QLineSeries *series1 = new QLineSeries();
    series0->setName("Sin曲线");
    series1->setName("Cos曲线");

    curSeries=series0; //当前序列

    QPen    pen;
    pen.setStyle(Qt::DotLine);//Qt::SolidLine, Qt::DashLine, Qt::DotLine, Qt::DashDotLine
    pen.setWidth(2);
    pen.setColor(Qt::red);
    series0->setPen(pen); //折线序列的线条设置

    pen.setStyle(Qt::SolidLine);//Qt::SolidLine, Qt::DashLine, Qt::DotLine, Qt::DashDotLine
    pen.setColor(Qt::blue);
    series1->setPen(pen);//折线序列的线条设置

    chart->addSeries(series0);
    chart->addSeries(series1);

    QValueAxis *axisX = new QValueAxis;
    curAxis=axisX; //当前坐标轴
    axisX->setRange(0, 10); //设置坐标轴范围
    axisX->setLabelFormat("%.1f"); //标签格式
    axisX->setTickCount(11); //主分隔个数
    axisX->setMinorTickCount(4);
    axisX->setTitleText("time(secs)"); //标题
//    axisX->setGridLineVisible(false);

    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(-2, 2);
    axisY->setTitleText("value");
    axisY->setTickCount(5);
    axisY->setLabelFormat("%.2f"); //标签格式
//    axisY->setGridLineVisible(false);
    axisY->setMinorTickCount(4);

//  下面4行语句在Qt5.12.1里编译时提示过时（deprecated）了，应使用另外一种方法添加坐标轴
//    chart->setAxisX(axisX, series0); //添加X坐标轴
//    chart->setAxisX(axisX, series1); //添加X坐标轴
//    chart->setAxisY(axisY, series0); //添加Y坐标轴
//    chart->setAxisY(axisY, series1); //添加Y坐标轴

//另一种实现设置坐标轴的方法,在Qt 5.12.1里编译时不会提示过时
    chart->addAxis(axisX,Qt::AlignBottom); //坐标轴添加到图表，并指定方向
    chart->addAxis(axisY,Qt::AlignLeft);

    series0->attachAxis(axisX); //序列 series0 附加坐标轴
    series0->attachAxis(axisY);

    series1->attachAxis(axisX);//序列 series1 附加坐标轴
    series1->attachAxis(axisY);


    foreach (QLegendMarker* marker, chart->legend()->markers()) {
        QObject::disconnect(marker, SIGNAL(clicked()), this, SLOT(on_LegendMarkerClicked()));
        QObject::connect(marker, SIGNAL(clicked()), this, SLOT(on_LegendMarkerClicked()));
    }
}

void MainWindow::prepareData()
{//为序列生成数据
    QLineSeries *series0=(QLineSeries *)ui->chartView->chart()->series().at(0);
    QLineSeries *series1=(QLineSeries *)ui->chartView->chart()->series().at(1);

    series0->clear(); //清除数据
    series1->clear();

    qsrand(QTime::currentTime().second());//随机数初始化
    qreal   t=0,y1,y2,intv=0.1;
    qreal   rd;
    int cnt=100;
    for(int i=0;i<cnt;i++)
    {
        rd=(qrand() % 10)-5; //随机数,-5~+5
        y1=qSin(t)+rd/50;
        *series0<<QPointF(t,y1);  //序列添加数据点
//        series0->append(t,y1);  //序列添加数据点

        rd=(qrand() % 10)-5; //随机数,-5~+5
        y2=qCos(t)+rd/50;
//        series1->append(t,y2); //序列添加数据点
        *series1<<QPointF(t,y2); //序列添加数据点

        t+=intv;
    }
}

void MainWindow::updateFromChart()
{ //从图表上获取数据更新界面显示
    QChart  *aChart;
    aChart=ui->chartView->chart();  //获取chart

    ui->editTitle->setText(aChart->title()); //图表标题

    QMargins    mg=aChart->margins(); //边距
    ui->spinMarginLeft->setValue(mg.left());
    ui->spinMarginRight->setValue(mg.right());
    ui->spinMarginTop->setValue(mg.top());
    ui->spinMarginBottom->setValue(mg.bottom());
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    createChart();//创建图表
    prepareData();//生成数据
    updateFromChart(); //从图表获得属性值，刷新界面显示
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LegendMarkerClicked()
{
    QLegendMarker* marker = qobject_cast<QLegendMarker*> (sender());

    switch (marker->type())
    {
        case QLegendMarker::LegendMarkerTypeXY:
        {
            marker->series()->setVisible(!marker->series()->isVisible());
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

void MainWindow::on_actDraw_triggered()
{ //重新生成数据
    prepareData();//重新生成数据
}

void MainWindow::on_btnSetTitle_clicked()
{ //设置图标标题文字
    QString str=ui->editTitle->text();
    ui->chartView->chart()->setTitle(str);
}

void MainWindow::on_btnSetTitleFont_clicked()
{ //设置图标标题文字的字体
    QFont font=ui->chartView->chart()->titleFont();
    bool  ok=false;
    font=QFontDialog::getFont(&ok,font);
    if (ok)
        ui->chartView->chart()->setTitleFont(font);
}

void MainWindow::on_btnSetMargin_clicked()
{//设置图标的4个边距
    QMargins    mgs;
    mgs.setLeft(ui->spinMarginLeft->value());
    mgs.setRight(ui->spinMarginRight->value());
    mgs.setTop(ui->spinMarginTop->value());
    mgs.setBottom(ui->spinMarginBottom->value());
    ui->chartView->chart()->setMargins(mgs);
}

void MainWindow::on_chkPointVisible_clicked(bool checked)
{//序列的数据点是否可见
    curSeries->setPointsVisible(checked);
}

void MainWindow::on_chkPointLabelVisible_clicked(bool checked)
{ //序列的数据点标签是否可见
    curSeries->setPointLabelsVisible(checked);
}

void MainWindow::on_btnSeriesName_clicked()
{ //设置序列名称
    curSeries->setName(ui->editSeriesName->text());
    if (ui->radioSeries0->isChecked())
        ui->radioSeries0->setText(ui->editSeriesName->text());
    else
        ui->radioSeries1->setText(ui->editSeriesName->text());
}

void MainWindow::on_btnSeriesColor_clicked()
{ //序列的曲线颜色
    QColor  color=curSeries->color();

    color=QColorDialog::getColor(color);
    if (color.isValid())
      curSeries->setColor(color);
}

void MainWindow::on_chkLegendVisible_clicked(bool checked)
{//图例是否可见
    ui->chartView->chart()->legend()->setVisible(checked);
}

void MainWindow::on_btnSetAxisRange_clicked()
{ //设置坐标轴的坐标范围
    curAxis->setRange(ui->spinAxisMin->value(),ui->spinAxisMax->value());
}

void MainWindow::on_spinTickCount_valueChanged(int arg1)
{
    curAxis->setTickCount(arg1);
}

void MainWindow::on_spinMinorTickCount_valueChanged(int arg1)
{
    curAxis->setMinorTickCount(arg1);
}

void MainWindow::on_radioX_clicked()
{ //获取当前坐标轴
// 在Qt 5.12.1中编译时提示 QChart::axisX()和QChart::axisY()函数过时，应使用 QChart::axes()函数
//    if (ui->radioX->isChecked())
//        curAxis=(QValueAxis*)ui->chartView->chart()->axisX();
//    else
//        curAxis=(QValueAxis*)ui->chartView->chart()->axisY();

//  下面是针对Qt 5.12.1修改的代码,在Qt5.9.1里编译也没问题
    QList<QAbstractAxis*> axes;
    if (ui->radioX->isChecked())
        axes=ui->chartView->chart()->axes(Qt::Horizontal);
    else
        axes=ui->chartView->chart()->axes(Qt::Vertical);
    curAxis=(QValueAxis*)axes[0];


//获取坐标轴的各种属性，显示到界面上
    ui->spinAxisMin->setValue(curAxis->min());
    ui->spinAxisMax->setValue(curAxis->max());

    ui->editAxisTitle->setText(curAxis->titleText());
    ui->chkBoxAxisTitle->setChecked(curAxis->isTitleVisible());

    ui->editAxisLabelFormat->setText(curAxis->labelFormat());
    ui->chkBoxLabelsVisible->setChecked(curAxis->labelsVisible());

    ui->chkGridLineVisible->setChecked(curAxis->isGridLineVisible());
    ui->chkAxisLineVisible->setChecked(curAxis->isLineVisible());

    ui->spinTickCount->setValue(curAxis->tickCount());
    ui->chkAxisLineVisible->setChecked(curAxis->isLineVisible());

    ui->spinMinorTickCount->setValue(curAxis->minorTickCount());
    ui->chkMinorTickVisible->setChecked(curAxis->isMinorGridLineVisible());
}

void MainWindow::on_radioY_clicked()
{
    on_radioX_clicked();
}

void MainWindow::on_chkGridLineVisible_clicked(bool checked)
{ //轴的网格线是否可见
    curAxis->setGridLineVisible(checked);
}

void MainWindow::on_chkMinorTickVisible_clicked(bool checked)
{ //次级刻度是否可见
    curAxis->setMinorGridLineVisible(checked);
}


void MainWindow::on_chkBoxLegendBackground_clicked(bool checked)
{//图例的背景是否可见
    ui->chartView->chart()->legend()->setBackgroundVisible(checked);
}

void MainWindow::on_radioButton_clicked()
{//图例的位置
    ui->chartView->chart()->legend()->setAlignment(Qt::AlignTop);
}

void MainWindow::on_radioButton_2_clicked()
{//图例的位置
    ui->chartView->chart()->legend()->setAlignment(Qt::AlignBottom);
}

void MainWindow::on_radioButton_3_clicked()
{//图例的位置
    ui->chartView->chart()->legend()->setAlignment(Qt::AlignLeft);
}

void MainWindow::on_radioButton_4_clicked()
{//图例的位置
    ui->chartView->chart()->legend()->setAlignment(Qt::AlignRight);
}

void MainWindow::on_btnLegendFont_clicked()
{ //图例的字体设置
    QFont font=ui->chartView->chart()->legend()->font();
    bool  ok=false;
    font=QFontDialog::getFont(&ok,font);
    if (ok)
        ui->chartView->chart()->legend()->setFont(font);
}

void MainWindow::on_btnLegendlabelColor_clicked()
{//图例的文字颜色设置
    QColor  color=ui->chartView->chart()->legend()->labelColor();
    color=QColorDialog::getColor(color);
    if (color.isValid())
        ui->chartView->chart()->legend()->setLabelColor(color);
}

void MainWindow::on_chkBoxVisible_clicked(bool checked)
{ //坐标轴是否可见
    curAxis->setVisible(checked);
}


void MainWindow::on_btnAxisSetTitle_clicked()
{ //设置坐标轴的标题
    curAxis->setTitleText(ui->editAxisTitle->text());
}

void MainWindow::on_btnAxisSetTitleFont_clicked()
{ //设置坐标轴的标题的字体
    QFont   font=curAxis->titleFont();

    bool    ok=false;
    font=QFontDialog::getFont(&ok,font);
    if (ok)
       curAxis->setTitleFont(font);
}

void MainWindow::on_chkBoxAxisTitle_clicked(bool checked)
{ //轴标题是否可见
    curAxis->setTitleVisible(checked);
}

void MainWindow::on_pushButton_clicked()
{//设置坐标轴刻度标签的文字格式
    curAxis->setLabelFormat(ui->editAxisLabelFormat->text());
}

void MainWindow::on_btnAxisLabelColor_clicked()
{//设置坐标轴刻度标签的文字颜色
    QColor   color=curAxis->labelsColor();

    color=QColorDialog::getColor(color);
    if (color.isValid())
       curAxis->setLabelsColor(color);
}

void MainWindow::on_btnAxisLabelFont_clicked()
{//设置坐标轴刻度标签的文字字体
    QFont   font=curAxis->labelsFont();

    bool    ok=false;
    font=QFontDialog::getFont(&ok,font);
    if (ok)
       curAxis->setLabelsFont(font);
}

void MainWindow::on_chkBoxLabelsVisible_clicked(bool checked)
{//轴的刻度标签是否可见
   curAxis->setLabelsVisible(checked);
}

void MainWindow::on_btnGridLineColor_clicked()
{ //网格线的颜色设置
    QColor   color=curAxis->gridLineColor();

    color=QColorDialog::getColor(color);
    if (color.isValid())
       curAxis->setGridLineColor(color);
}

void MainWindow::on_pushButton_10_clicked()
{ //网格线的Pen设置
    QPen    pen;
    pen=curAxis->gridLinePen();

    bool    ok=false;
    pen=QWDialogPen::getPen(pen,ok);

    if (ok)
      curAxis->setGridLinePen(pen);
}

void MainWindow::on_chkAxisLineVisible_clicked(bool checked)
{//刻度是否可见
    curAxis->setLineVisible(checked);
}

void MainWindow::on_btnAxisLinePen_clicked()
{
    QPen    pen;
    pen=curAxis->linePen();

    bool    ok=false;
    pen=QWDialogPen::getPen(pen,ok);

    if (ok)
      curAxis->setLinePen(pen);
}


void MainWindow::on_btnAxisLinePenColor_clicked()
{
    QColor   color=curAxis->linePenColor();

    color=QColorDialog::getColor(color);
    if (color.isValid())
       curAxis->setLinePenColor(color);
}

void MainWindow::on_btnMinorColor_clicked()
{//次级刻度网格线颜色
    QColor   color=curAxis->minorGridLineColor();

    color=QColorDialog::getColor(color);
    if (color.isValid())
       curAxis->setMinorGridLineColor(color);
}

void MainWindow::on_btnMinorPen_clicked()
{//次级刻度线Pen设置
    QPen    pen;
    pen=curAxis->minorGridLinePen();

    bool    ok=false;
    pen=QWDialogPen::getPen(pen,ok);

    if (ok)
      curAxis->setMinorGridLinePen(pen);
}

void MainWindow::on_radioSeries0_clicked()
{//获取当前数据序列
    if (ui->radioSeries0->isChecked())
        curSeries=(QLineSeries *)ui->chartView->chart()->series().at(0);
    else
        curSeries=(QLineSeries *)ui->chartView->chart()->series().at(1);
//获取序列的属性值，并显示到界面上
    ui->editSeriesName->setText(curSeries->name());
    ui->chkSeriesVisible->setChecked(curSeries->isVisible());
    ui->chkPointVisible->setChecked(curSeries->pointsVisible());
    ui->sliderSeriesOpacity->setValue(curSeries->opacity()*10);
    ui->chkPointLabelVisible->setChecked(curSeries->pointLabelsVisible());
}

void MainWindow::on_radioSeries1_clicked()
{
    on_radioSeries0_clicked();
}


void MainWindow::on_chkSeriesVisible_clicked(bool checked)
{//序列是否可见
    this->curSeries->setVisible(checked);
}

void MainWindow::on_btnSeriesPen_clicked()
{//序列线条的Pen设置
    bool    ok=false;
    QPen    pen;
    pen=curSeries->pen();

    pen=QWDialogPen::getPen(pen,ok);

    if (ok)
      curSeries->setPen(pen);
}

void MainWindow::on_sliderSeriesOpacity_valueChanged(int value)
{//序列的透明度
    curSeries->setOpacity(value/10.0);
}

void MainWindow::on_btnSeriesLabColor_clicked()
{//序列数据点标签颜色
    QColor  color=curSeries->pointLabelsColor();

    color=QColorDialog::getColor(color);
    if (color.isValid())
      curSeries->setPointLabelsColor(color);

}

void MainWindow::on_btnSeriesLabFont_clicked()
{//序列数据点标签字体
    QFont   font;
    font=curSeries->pointLabelsFont();
    bool    ok=false;
    font=QFontDialog::getFont(&ok,font);
    if (ok)
        curSeries->setPointLabelsFont(font);
}

void MainWindow::on_radioSeriesLabFormat0_clicked()
{ //序列数据点标签的显示格式
    curSeries->setPointLabelsFormat("@yPoint");
}

void MainWindow::on_radioSeriesLabFormat1_clicked()
{//序列数据点标签的显示格式
    curSeries->setPointLabelsFormat("(@xPoint,@yPoint)");
}

void MainWindow::on_cBoxAnimation_currentIndexChanged(int index)
{//动画效果
    ui->chartView->chart()->setAnimationOptions(QChart::AnimationOptions(index));
//    ui->chartView->chart()->setAnimationOptions(QChart::SeriesAnimations);
//    ui->chartView->chart()->setAnimationOptions(QChart::AllAnimations);
}


void MainWindow::on_cBoxTheme_currentIndexChanged(int index)
{ //图标的主题
    ui->chartView->chart()->setTheme(QChart::ChartTheme(index));
}

void MainWindow::on_actZoomIn_triggered()
{//放大
    ui->chartView->chart()->zoom(1.2);//zoomIn();
}

void MainWindow::on_actZoomOut_triggered()
{//缩小
    ui->chartView->chart()->zoom(0.8);//zoomOut();
}

void MainWindow::on_actZoomReset_triggered()
{//复位
    ui->chartView->chart()->zoomReset();
}
