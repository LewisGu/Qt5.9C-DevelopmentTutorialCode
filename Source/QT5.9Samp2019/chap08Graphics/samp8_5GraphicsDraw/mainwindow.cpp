#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QGraphicsRectItem>
#include    <QInputDialog>
#include    <QColorDialog>
#include    <QFontDialog>
#include    <QTime>
#include    <QKeyEvent>


template<class T> void setBrushColor(T *item)
{//函数模板
    QColor color=item->brush().color();
    color=QColorDialog::getColor(color,NULL,"选择填充颜色");
    if (color.isValid())
        item->setBrush(QBrush(color));
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    labViewCord=new QLabel("View 坐标："); //创建状态栏标签
    labViewCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labViewCord);

    labSceneCord=new QLabel("Scene 坐标：");
    labSceneCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labSceneCord);

    labItemCord=new QLabel("Item 坐标：");
    labItemCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labItemCord);

    labItemInfo=new QLabel("ItemInfo: ");
    labItemInfo->setMinimumWidth(200);
    ui->statusBar->addWidget(labItemInfo);

    scene=new QGraphicsScene(-300,-200,600,200); //创建QGraphicsScene

    ui->View->setScene(scene); //与view关联
//    ui->View->setDragMode(QGraphicsView::RubberBandDrag);

    ui->View->setCursor(Qt::CrossCursor); //设置鼠标
    ui->View->setMouseTracking(true); //
    ui->View->setDragMode(QGraphicsView::RubberBandDrag);

    this->setCentralWidget(ui->View);

    QObject::connect(ui->View,SIGNAL(mouseMovePoint(QPoint)),
                     this, SLOT(on_mouseMovePoint(QPoint)));

    QObject::connect(ui->View,SIGNAL(mouseClicked(QPoint)),
                     this, SLOT(on_mouseClicked(QPoint)));

    QObject::connect(ui->View,SIGNAL(mouseDoubleClick(QPoint)),
                     this, SLOT(on_mouseDoubleClick(QPoint)));

    QObject::connect(ui->View,SIGNAL(keyPress(QKeyEvent*)),
                     this, SLOT(on_keyPress(QKeyEvent*)));

    qsrand(QTime::currentTime().second());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mouseMovePoint(QPoint point)
{//鼠标移动事件，point是 GraphicsView的坐标,物理坐标
    labViewCord->setText(QString::asprintf("View 坐标：%d,%d",point.x(),point.y()));
    QPointF pointScene=ui->View->mapToScene(point); //转换到Scene坐标
    labSceneCord->setText(QString::asprintf("Scene 坐标：%.0f,%.0f",pointScene.x(),pointScene.y()));
}

void MainWindow::on_mouseClicked(QPoint point)
{//鼠标单击事件
    QPointF pointScene=ui->View->mapToScene(point); //转换到Scene坐标
    QGraphicsItem  *item=NULL;
    item=scene->itemAt(pointScene,ui->View->transform()); //获取光标下的绘图项
    if (item != NULL) //有绘图项
    {
        QPointF pointItem=item->mapFromScene(pointScene); //转换为绘图项的局部坐标
        labItemCord->setText(QString::asprintf("Item 坐标：%.0f,%.0f",pointItem.x(),pointItem.y()));
        labItemInfo->setText(item->data(ItemDesciption).toString()+", ItemId="+
                   item->data(ItemId).toString());
    }
}

void MainWindow::on_mouseDoubleClick(QPoint point)
{//鼠标双击事件,调用相应的对话框，设置填充颜色、线条颜色或字体
    QPointF pointScene=ui->View->mapToScene(point); //转换到Scene坐标
    QGraphicsItem  *item=NULL;
    item=scene->itemAt(pointScene,ui->View->transform()); //获取光标下的绘图项

    if (item == NULL) //没有绘图项
        return;

    switch (item->type())  //绘图项的类型
    {
      case    QGraphicsRectItem::Type: //矩形框
      { //强制类型转换
        QGraphicsRectItem *theItem=qgraphicsitem_cast<QGraphicsRectItem*>(item);
        setBrushColor(theItem);
        break;
      }
      case    QGraphicsEllipseItem::Type: //椭圆和圆都是 QGraphicsEllipseItem
      {
        QGraphicsEllipseItem *theItem;
        theItem=qgraphicsitem_cast<QGraphicsEllipseItem*>(item);
        setBrushColor(theItem);
        break;
      }

      case    QGraphicsPolygonItem::Type: //梯形和三角形
      {
        QGraphicsPolygonItem *theItem=qgraphicsitem_cast<QGraphicsPolygonItem*>(item);
        setBrushColor(theItem);
        break;
      }
      case    QGraphicsLineItem::Type: //直线，设置线条颜色
      {
        QGraphicsLineItem *theItem=qgraphicsitem_cast<QGraphicsLineItem*>(item);
        QPen    pen=theItem->pen();
        QColor  color=theItem->pen().color();
        color=QColorDialog::getColor(color,this,"选择线条颜色");
        if (color.isValid())
        {
            pen.setColor(color);
            theItem->setPen(pen);
        }
        break;
      }
      case    QGraphicsTextItem::Type: //文字，设置字体
      {
        QGraphicsTextItem *theItem=qgraphicsitem_cast<QGraphicsTextItem*>(item);
        QFont font=theItem->font();
        bool ok=false;
        font=QFontDialog::getFont(&ok,font,this,"设置字体");
        if (ok)
            theItem->setFont(font);
        break;
      }
    }
}

void MainWindow::on_keyPress(QKeyEvent *event)
{ //按键事件
    if (scene->selectedItems().count()!=1)
        return; //没有选中的绘图项，或选中的多于1个
    QGraphicsItem   *item=scene->selectedItems().at(0);

    if (event->key()==Qt::Key_Delete)//删除
       scene->removeItem(item);
    else if (event->key()==Qt::Key_Space) //顺时针旋转90度
       item->setRotation(90+item->rotation());
    else if (event->key()==Qt::Key_PageUp)//放大
        item->setScale(0.1+item->scale());
    else if (event->key()==Qt::Key_PageDown) //缩小
        item->setScale(-0.1+item->scale());
    else if (event->key()==Qt::Key_Left)  //左移
        item->setX(-1+item->x());
    else if (event->key()==Qt::Key_Right) //右移
        item->setX(1+item->x());
    else if (event->key()==Qt::Key_Up) //上移
        item->setY(-1+item->y());
    else if (event->key()==Qt::Key_Down) //下移
        item->setY(1+item->y());
}

void MainWindow::on_actItem_Rect_triggered()
{ //添加一个矩形
    QGraphicsRectItem   *item=new QGraphicsRectItem(-50,-25,100,50);//x,y 为左上角的图元局部坐标，图元中心点为0,0
    item->setFlags(QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::yellow));
    item->setZValue(++frontZ);
    item->setPos(-50+(qrand() % 100),-50+(qrand() % 100));

    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"矩形");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actItem_Ellipse_triggered()
{ //添加一个椭圆
    QGraphicsEllipseItem   *item=new QGraphicsEllipseItem(-50,-30,100,60);
    item->setFlags(QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::blue)); //填充颜色
    item->setZValue(++frontZ); //用于叠放顺序
    item->setPos(-50+(qrand() % 100),-50+(qrand() % 100)); //初始位置
    item->setData(ItemId,++seqNum);  //自定义数据，ItemId键
    item->setData(ItemDesciption,"椭圆"); //自定义数据，ItemDesciption键

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actItem_Polygon_triggered()
{ //添加一个梯形
    QGraphicsPolygonItem   *item=new QGraphicsPolygonItem;

    QPolygonF   points;
    points.append(QPointF(-40,-40));
    points.append(QPointF(40,-40));
    points.append(QPointF(100,40));
    points.append(QPointF(-100,40));
    item->setPolygon(points);
    item->setPos(-50+(qrand() % 100),-50+(qrand() % 100));

    item->setFlags(QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::green));
    item->setZValue(++frontZ);

    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"梯形");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actEdit_Delete_triggered()
{ //删除所有选中的绘图项
    int cnt=scene->selectedItems().count();
    if (cnt>0)
    for (int i=0;i<cnt;i++)
    {
        QGraphicsItem*  item=scene->selectedItems().at(0);
        scene->removeItem(item); //删除绘图项
    }
}

void MainWindow::on_actZoomIn_triggered()
{ //放大
    int cnt=scene->selectedItems().count();
    if (cnt==1)
    {
        QGraphicsItem   *item;
        item=scene->selectedItems().at(0);
        item->setScale(0.1+item->scale());
    }
    else
        ui->View->scale(1.1,1.1);
}

void MainWindow::on_actZoomOut_triggered()
{//缩小
    int cnt=scene->selectedItems().count();
    if (cnt==1)
    {
        QGraphicsItem   *item;
        item=scene->selectedItems().at(0);
        item->setScale(item->scale()-0.1);
    }
    else
        ui->View->scale(0.9,0.9);
}

void MainWindow::on_actRestore_triggered()
{//取消所有变换
    int cnt=scene->selectedItems().count();
    if (cnt==1)
    {
        QGraphicsItem* item=scene->selectedItems().at(0);
//        item->resetTransform();   //不起作用
        item->setRotation(0);
        item->setScale(1.0);
    }
    else
        ui->View->resetTransform();
}

void MainWindow::on_actRotateLeft_triggered()
{//逆时针旋转
    int cnt=scene->selectedItems().count();
    if (cnt==1)
    {
        QGraphicsItem* item=scene->selectedItems().at(0);
        item->setRotation(-30+item->rotation());
    }
    else
        ui->View->rotate(-30);
}

void MainWindow::on_actRotateRight_triggered()
{//顺时针旋转
    int cnt=scene->selectedItems().count();
    if (cnt==1)
    {
        QGraphicsItem* item=scene->selectedItems().at(0);
        item->setRotation(+30+item->rotation());
    }
    else
        ui->View->rotate(+30);
}

void MainWindow::on_actEdit_Front_triggered()
{ //bring to front,前置
    int cnt=scene->selectedItems().count();
    if (cnt>0)
    { //只处理选中的第1个绘图项
        QGraphicsItem* item=scene->selectedItems().at(0);
        item->setZValue(++frontZ);
    }
}

void MainWindow::on_actEdit_Back_triggered()
{//bring to back，后置
    int cnt=scene->selectedItems().count();
    if (cnt>0)
    {//只处理选中的第1个绘图项
        QGraphicsItem* item=scene->selectedItems().at(0);
        item->setZValue(--backZ);
    }

}

void MainWindow::on_actItem_Line_triggered()
{//添加直线
    QGraphicsLineItem   *item=new QGraphicsLineItem(-100,0,100,0);//x,y 为左上角的图元局部坐标，图元中心点为0,0
    item->setFlags(QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);

    QPen    pen(Qt::red);
    pen.setWidth(3);
    item->setPen(pen);

    item->setZValue(++frontZ);
    item->setPos(-50+(qrand() % 100),-50+(qrand() % 100));

    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"直线");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actItem_Text_triggered()
{ //添加文字
    QString str=QInputDialog::getText(this,"输入文字","请输入文字");
    if (str.isEmpty())
        return;

    QGraphicsTextItem   *item=new QGraphicsTextItem(str);

    QFont   font=this->font();
    font.setPointSize(20);
    font.setBold(true);
    item->setFont(font);

    item->setFlags(QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);
    item->setPos(-50+(qrand() % 100),-50+(qrand() % 100));
    item->setZValue(++frontZ);

    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"文字");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actGroup_triggered()
{ //组合
    int cnt=scene->selectedItems().count();
    if (cnt>1)
    {
       QGraphicsItemGroup* group =new QGraphicsItemGroup; //创建组合
       scene->addItem(group); //组合添加到场景中

        for (int i=0;i<cnt;i++)
        {
            QGraphicsItem* item=scene->selectedItems().at(0);
            item->setSelected(false); //清除选择虚线框
            item->clearFocus();
            group->addToGroup(item); //添加到组合
        }
        group->setFlags(QGraphicsItem::ItemIsMovable
                       | QGraphicsItem::ItemIsSelectable
                       | QGraphicsItem::ItemIsFocusable);

        group->setZValue(++frontZ);
//        group->clearFocus();
        scene->clearSelection();
        group->setSelected(true);
     }
}

void MainWindow::on_actGroupBreak_triggered()
{ //break group,打散组合
    int cnt=scene->selectedItems().count();
    if (cnt==1)
    {
        QGraphicsItemGroup  *group;
        group=(QGraphicsItemGroup*)scene->selectedItems().at(0);
        scene->destroyItemGroup(group);
     }
}

void MainWindow::on_actItem_Circle_triggered()
{ //添加圆形
    QGraphicsEllipseItem   *item=new QGraphicsEllipseItem(-50,-50,100,100);
    item->setFlags(QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::cyan));
    item->setZValue(++frontZ);
    item->setPos(-50+(qrand() % 100),-50+(qrand() % 100));

    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"圆形");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actItem_Triangle_triggered()
{ //添加三角形
    QGraphicsPolygonItem   *item=new QGraphicsPolygonItem;
    QPolygonF   points;
    points.append(QPointF(0,-40));
    points.append(QPointF(60,40));
    points.append(QPointF(-60,40));
    item->setPolygon(points);
    item->setPos(-50+(qrand() % 100),-50+(qrand() % 100));

    item->setFlags(QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::magenta));
    item->setZValue(++frontZ);

    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"三角形");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

