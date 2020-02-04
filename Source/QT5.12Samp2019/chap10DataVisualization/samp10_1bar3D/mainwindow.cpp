#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QSplitter>

#include    <QColorDialog>

void MainWindow::iniGraph3D()
{
    graph3D = new Q3DBars();
    graphContainer = QWidget::createWindowContainer(graph3D); //Q3DBars继承自QWindow
    graph3D->scene()->activeCamera()->setCameraPreset(Q3DCamera::CameraPresetFrontHigh); //设置视角

//创建坐标轴
    QStringList rowLabs;  //
    QStringList colLabs;

    rowLabs << "row1" << "row2"<<"row3";
    colLabs << "col1" << "col2" << "col3" << "col4"<<"col5";

    QValue3DAxis *axisV=new QValue3DAxis; //数值坐标
    axisV->setTitle("value");
    axisV->setTitleVisible(true);

    QCategory3DAxis *axisRow=new QCategory3DAxis;
    axisRow->setTitle("row axis");
    axisRow->setLabels(rowLabs);
    axisRow->setTitleVisible(true);

    QCategory3DAxis *axisCol=new QCategory3DAxis;
    axisCol->setTitle("column axis");
    axisCol->setLabels(colLabs);
    axisCol->setTitleVisible(true);

    graph3D->setValueAxis(axisV);
    graph3D->setRowAxis(axisRow);
    graph3D->setColumnAxis(axisCol);

//创建序列
    series = new QBar3DSeries;
    series->setMesh(QAbstract3DSeries::MeshCylinder); //MeshBar,MeshPyramid,MeshCylinder
    series->setItemLabelFormat("(@rowLabel,@colLabel): %.1f"); //项的标签显示格式
    graph3D->addSeries(series);

    QBarDataArray *dataSet = new QBarDataArray; //数据代理
    dataSet->reserve(rowLabs.count());

    QBarDataRow *dataRow = new QBarDataRow;
    *dataRow << 1 << 2<< 3<< 4<<5; //第1行数据，有5列
    dataSet->append(dataRow);

    QBarDataRow *dataRow2 = new QBarDataRow;
    *dataRow2 << 5<< 5<< 5<< 5<<5; //第2行数据，有5列
    dataSet->append(dataRow2);

    QBarDataRow *dataRow3 = new QBarDataRow;
    *dataRow3 << 1<< 5<< 9<< 5<<1; //第2行数据，有5列
    dataSet->append(dataRow3);

    series->dataProxy()->resetArray(dataSet);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    iniGraph3D(); //创建图表

    QSplitter   *splitter=new QSplitter(Qt::Horizontal);
    splitter->addWidget(ui->groupBox); //左侧控制面板
    splitter->addWidget(graphContainer);  //右侧图表

    this->setCentralWidget(splitter); //设置主窗口中心组建
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
//    graph3D->seriesList().at(0)->setMeshSmooth(checked);
}

void MainWindow::on_chkBoxReflection_clicked(bool checked)
{//反射
    graph3D->setReflection(checked);
}

void MainWindow::on_chkBoxAxisTitle_clicked(bool checked)
{//轴标题
    graph3D->valueAxis()->setTitleVisible(checked);
    graph3D->rowAxis()->setTitleVisible(checked);
    graph3D->columnAxis()->setTitleVisible(checked);
}

void MainWindow::on_chkBoxAxisBackground_clicked(bool checked)
{//轴标签背景
    graph3D->activeTheme()->setLabelBackgroundEnabled(checked);
}

void MainWindow::on_chkBoxReverse_clicked(bool checked)
{//Z轴反向
    graph3D->valueAxis()->setReversed(checked);
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
{ //设置序列柱状图的颜色
//    QBar3DSeries *series =graph3D->seriesList().at(0);
    QColor  color=series->baseColor();
    color=QColorDialog::getColor(color);
    if (color.isValid())
        series->setBaseColor(color);
}

void MainWindow::on_chkBoxItemLabel_clicked(bool checked)
{ //项的标签
    series->setItemLabelFormat("value at (@rowLabel,@colLabel): %.1f");
    series->setItemLabelVisible(checked);
}

void MainWindow::on_cBoxBarStyle_currentIndexChanged(int index)
{ //棒图的样式
//    QBar3DSeries *series =graph3D->seriesList().at(0);
    QAbstract3DSeries::Mesh aMesh;
    aMesh=QAbstract3DSeries::Mesh(index+1);
    series->setMesh(aMesh);
}

void MainWindow::on_cBoxSelectionMode_currentIndexChanged(int index)
{//选择模式
    graph3D->setSelectionMode(QAbstract3DGraph::SelectionFlags(index));
}

void MainWindow::on_comboCamera_currentIndexChanged(int index)
{ //变换视角
   Q3DCamera::CameraPreset  cameraPos=Q3DCamera::CameraPreset(index);
   graph3D->scene()->activeCamera()->setCameraPreset(cameraPos);
}

void MainWindow::on_sliderH_valueChanged(int value)
{
    Q_UNUSED(value);
    int xRot =ui->sliderH->value();//水平
    int yRot=ui->sliderV->value(); //垂直
    int zoom=ui->sliderZoom->value(); //缩放
    graph3D->scene()->activeCamera()->setCameraPosition(xRot, yRot,zoom);
}

void MainWindow::on_sliderV_valueChanged(int value)
{
    on_sliderH_valueChanged(value);
}

void MainWindow::on_sliderZoom_valueChanged(int value)
{
    on_sliderH_valueChanged(value);
}
