#include "mainwindow.h"
#include "ui_mainwindow.h"
#include    <QGraphicsEllipseItem>


void MainWindow::iniGraphicsSystem()
{ //构造Graphics View的各项
    QRectF   rect(-200,-100,400,200);
    scene=new QGraphicsScene(rect); //scene逻辑坐标系定义
    ui->View->setScene(scene);


//画一个矩形框，大小等于scene
    QGraphicsRectItem   *item=new QGraphicsRectItem(rect); //矩形框正好等于scene的大小
    item->setFlags(QGraphicsItem::ItemIsSelectable     //可选，可以有焦点，但是不能移动
                   | QGraphicsItem::ItemIsFocusable);
    QPen    pen;
    pen.setWidth(2);
    item->setPen(pen);
//    item->setPos(500,0);//缺省位置在scene的（0,0）
    scene->addItem(item);

//一个位于scene中心的椭圆，测试局部坐标
    QGraphicsEllipseItem   *item2=new QGraphicsEllipseItem(-100,-50,200,100); //矩形框内创建椭圆,绘图项的局部坐标，左上角(-100,-50)，宽200，高100
    item2->setPos(0,0);
    item2->setBrush(QBrush(Qt::blue));
    item2->setFlags(QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);
    scene->addItem(item2);

//一个圆，中心位于scene的边缘
    QGraphicsEllipseItem   *item3=new QGraphicsEllipseItem(-50,-50,100,100); //矩形框内创建椭圆,绘图项的局部坐标，左上角(-100,-50)，宽200，高100
    item3->setPos(rect.right(),rect.bottom());
    item3->setBrush(QBrush(Qt::red));
    item3->setFlags(QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);
    scene->addItem(item3);

    scene->clearSelection();
//    item->setSelected(true);

//    ui->View->setDragMode(QGraphicsView::RubberBandDrag);
}

void MainWindow::resizeEvent(QResizeEvent *event)
{ //窗口变化大小时的事件
    Q_UNUSED(event);
//Graphics View坐标，左上角总是（0,0），宽度=，长度=
    ui->labViewSize->setText(QString::asprintf("Graphics View坐标，左上角总是（0,0），宽度=%d，高度=%d",
                ui->View->width(),ui->View->height()));

    QRectF  rectF=ui->View->sceneRect(); //Scene的矩形区
    ui->LabSceneRect->setText(QString::asprintf("QGraphicsView::sceneRect=(Left,Top,Width,Height)=%.0f,%.0f,%.0f,%.0f",
                                                rectF.left(),rectF.top(),rectF.width(),rectF.height()));
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    labViewCord=new QLabel("View 坐标：");
    labViewCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labViewCord);

    labSceneCord=new QLabel("Scene 坐标：");
    labSceneCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labSceneCord);

    labItemCord=new QLabel("Item 坐标：");
    labItemCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labItemCord);

    ui->View->setCursor(Qt::CrossCursor);
    ui->View->setMouseTracking(true);
    ui->View->setDragMode(QGraphicsView::RubberBandDrag);

    QObject::connect(ui->View,SIGNAL(mouseMovePoint(QPoint)),
                     this, SLOT(on_mouseMovePoint(QPoint)));

    QObject::connect(ui->View,SIGNAL(mouseClicked(QPoint)),
                     this, SLOT(on_mouseClicked(QPoint)));

    iniGraphicsSystem();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mouseMovePoint(QPoint point)
{//鼠标移动事件，point是 GraphicsView的坐标,物理坐标
    labViewCord->setText(QString::asprintf("View 坐标：%d,%d",point.x(),point.y()));
    QPointF pointScene=ui->View->mapToScene(point); //转换到Scene坐标
    labSceneCord->setText(QString::asprintf("Scene 坐标：%.0f,%.0f", pointScene.x(),pointScene.y()));
}

void MainWindow::on_mouseClicked(QPoint point)
{//鼠标单击事件
    QPointF pointScene=ui->View->mapToScene(point); //转换到Scene坐标
    QGraphicsItem  *item=NULL;
    item=scene->itemAt(pointScene,ui->View->transform()); //获取光标下的绘图项
    if (item != NULL) //有绘图项
    {
        QPointF pointItem=item->mapFromScene(pointScene); //转换为绘图项的局部坐标
        labItemCord->setText(QString::asprintf("Item 坐标：%.0f,%.0f", pointItem.x(),pointItem.y()));
    }
}
