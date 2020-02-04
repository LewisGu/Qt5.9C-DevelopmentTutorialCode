#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QSplitter>

#include    <QColorDialog>

void MainWindow::iniGraph3D()
{
    graph3D = new Q3DSurface();
    graphContainer = QWidget::createWindowContainer(graph3D); //Q3DBars继承自QWindow，必须如此创建

//创建坐标轴
    QValue3DAxis *axisX=new QValue3DAxis;
    axisX->setTitle("Axis X");
    axisX->setTitleVisible(true);
    axisX->setRange(-11,11);
//    axisX->setAutoAdjustRange(true);
    graph3D->setAxisX(axisX);

    QValue3DAxis *axisY=new QValue3DAxis;
    axisY->setTitle("Axis Y");
    axisY->setTitleVisible(true);
//    axisY->setRange(-10,10);
    axisY->setAutoAdjustRange(true);
    graph3D->setAxisY(axisY);

    QValue3DAxis *axisZ=new QValue3DAxis;
    axisZ->setTitle("Axis Z");
    axisZ->setTitleVisible(true);
    axisZ->setRange(-11,11);
//    axisZ->setAutoAdjustRange(true);
    graph3D->setAxisZ(axisZ);

//创建数据代理
    proxy = new QSurfaceDataProxy();
    series = new QSurface3DSeries(proxy);
    series->setItemLabelFormat("(@xLabel @yLabel @zLabel)");
    series->setMeshSmooth(true);
    graph3D->activeTheme()->setLabelBackgroundEnabled(false);

    series->setDrawMode(QSurface3DSeries::DrawSurfaceAndWireframe);
    graph3D->addSeries(series);
    series->setBaseColor(Qt::red);

//创建数据, 墨西哥草帽
    int N=41;//-10:0.5:10, N个数据点
    QSurfaceDataArray *dataArray = new QSurfaceDataArray; //数组
    dataArray->reserve(N);

    float x=-10,y,z;
    int i,j;
    for (i =1 ; i <=N; i++)
    {
        QSurfaceDataRow *newRow = new QSurfaceDataRow(N); //一行的数据
        y=-10;
        int index=0;
        for (j = 1; j <=N; j++)
        {
            z=qSqrt(x*x+y*y);
            if (z!=0)
                z=10*qSin(z)/z;
            else
                z=10;
            (*newRow)[index++].setPosition(QVector3D(x, z, y));
            y=y+0.5;
        }
        x=x+0.5;
        *dataArray << newRow;
    }

    proxy->resetArray(dataArray);

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//渐变颜色按钮
    QLinearGradient grBtoY(0, 0, 100, 0);   //线型渐变
    grBtoY.setColorAt(1.0, Qt::black);
    grBtoY.setColorAt(0.67, Qt::blue);
    grBtoY.setColorAt(0.33, Qt::red);
    grBtoY.setColorAt(0.0, Qt::yellow);

    QPixmap pm(160, 20);    //图片
    QPainter pmp(&pm);
    pmp.setBrush(QBrush(grBtoY)); //渐变颜色1
    pmp.setPen(Qt::NoPen);
    pmp.drawRect(0, 0, 160, 20);
    ui->btnGrad1->setIcon(QIcon(pm));   //渐变颜色按钮1
    ui->btnGrad1->setIconSize(QSize(160, 20));

    QLinearGradient grGtoR(0, 0, 100, 0);  //渐变颜色2
    grGtoR.setColorAt(1.0, Qt::darkGreen);
    grGtoR.setColorAt(0.5, Qt::yellow);
    grGtoR.setColorAt(0.2, Qt::red);
    grGtoR.setColorAt(0.0, Qt::darkRed);
    pmp.setBrush(QBrush(grGtoR));
    pmp.drawRect(0, 0, 160, 20);
    ui->btnGrad2->setIcon(QIcon(pm));       //渐变颜色按钮2
    ui->btnGrad2->setIconSize(QSize(160, 20));


    iniGraph3D();

    QSplitter   *splitter=new QSplitter(Qt::Horizontal);
    splitter->addWidget(ui->groupBox);
    splitter->addWidget(graphContainer);

    this->setCentralWidget(splitter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_chkBoxGrid_clicked(bool checked)
{ //图表的网格
    graph3D->activeTheme()->setGridEnabled(checked);
}

void MainWindow::on_chkBoxSmooth_clicked(bool checked)
{ //柱状图的光滑性
    series->setMeshSmooth(checked);
}

void MainWindow::on_chkBoxReflection_clicked(bool checked)
{//反射
    graph3D->setReflection(checked);
}

void MainWindow::on_chkBoxAxisTitle_clicked(bool checked)
{//轴标题
    graph3D->axisX()->setTitleVisible(checked);
    graph3D->axisY()->setTitleVisible(checked);
    graph3D->axisZ()->setTitleVisible(checked);
}

void MainWindow::on_chkBoxAxisBackground_clicked(bool checked)
{//轴标题背景
    graph3D->activeTheme()->setLabelBackgroundEnabled(checked);
}

void MainWindow::on_chkBoxReverse_clicked(bool checked)
{//Z轴反向
    graph3D->axisY()->setReversed(checked);
}

void MainWindow::on_chkBoxBackground_clicked(bool checked)
{//图表的背景
    graph3D->activeTheme()->setBackgroundEnabled(checked);
}

void MainWindow::on_spinFontSize_valueChanged(int arg1)
{//轴标签字体大小
    QFont font = graph3D->activeTheme()->font();
    font.setPointSize(arg1);
    graph3D->activeTheme()->setFont(font);
}

void MainWindow::on_cBoxTheme_currentIndexChanged(int index)
{//设置主题
    Q3DTheme *currentTheme = graph3D->activeTheme();
    currentTheme->setType(Q3DTheme::Theme(index));
}

void MainWindow::on_btnBarColor_clicked()
{ //单一曲面颜色
    QColor  color=series->baseColor();
    color=QColorDialog::getColor(color);
    if (color.isValid())
    {
        series->setBaseColor(color);
        series->setColorStyle(Q3DTheme::ColorStyleUniform);
    }
}

void MainWindow::on_chkBoxItemLabel_clicked(bool checked)
{ //项的标签
    series->setItemLabelVisible(checked);
}

void MainWindow::on_cBoxBarStyle_currentIndexChanged(int index)
{ //棒图的样式
    QAbstract3DSeries::Mesh aMesh;
    aMesh=QAbstract3DSeries::Mesh(index+1);
    series->setMesh(aMesh);
}

void MainWindow::on_cBoxSelectionMode_currentIndexChanged(int index)
{//选择模式
    switch(index)
    {
     case 0:
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionNone);
        break;
     case 1:
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionItem);
        break;
     case 2:
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionItemAndRow | QAbstract3DGraph::SelectionSlice);
        break;
     case 3:
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionItemAndColumn | QAbstract3DGraph::SelectionSlice);
    default:
        break;
    }
}


void MainWindow::on_chkBoxShadow_clicked(bool checked)
{
    if (checked)
       graph3D->setShadowQuality(QAbstract3DGraph::ShadowQualityMedium);
    else
       graph3D->setShadowQuality(QAbstract3DGraph::ShadowQualityNone);
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    graph3D->scene()->activeCamera()->setCameraPreset(Q3DCamera::CameraPreset(index));
}

void MainWindow::on_sliderH_valueChanged(int value)
{
    Q_UNUSED(value);
    int xRot =ui->sliderH->value();
    int yRot=ui->sliderV->value();
    int zoom=ui->sliderZoom->value(); //缩放
    graph3D->scene()->activeCamera()->setCameraPosition(xRot, yRot,zoom);
}

void MainWindow::on_sliderV_valueChanged(int value)
{
    on_sliderH_valueChanged(value);
}

void MainWindow::on_comboDrawMode_currentIndexChanged(int index)
{
    if (index==0)
        series->setDrawMode(QSurface3DSeries::DrawWireframe);
    else if (index==1)
        series->setDrawMode(QSurface3DSeries::DrawSurface);
    else
        series->setDrawMode(QSurface3DSeries::DrawSurfaceAndWireframe);
}

void MainWindow::on_btnGrad1_clicked()
{//渐变颜色
    QLinearGradient gr;
    gr.setColorAt(0.0, Qt::black);
    gr.setColorAt(0.33, Qt::blue);
    gr.setColorAt(0.67, Qt::red);
    gr.setColorAt(1.0, Qt::yellow);

    series->setBaseGradient(gr);
    series->setColorStyle(Q3DTheme::ColorStyleRangeGradient);
//    series->setColorStyle(Q3DTheme::ColorStyleUniform);
}

void MainWindow::on_btnGrad2_clicked()
{
    QLinearGradient grGtoR;
    grGtoR.setColorAt(1.0, Qt::darkGreen);
    grGtoR.setColorAt(0.5, Qt::yellow);
    grGtoR.setColorAt(0.2, Qt::red);
    grGtoR.setColorAt(0.0, Qt::darkRed);

    series->setBaseGradient(grGtoR);
    series->setColorStyle(Q3DTheme::ColorStyleRangeGradient);
}


void MainWindow::on_sliderZoom_valueChanged(int value)
{
    on_sliderH_valueChanged(value);
}
