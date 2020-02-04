#include    "mainwindow.h"
#include    "ui_mainwindow.h"
#include    <QMenu>


void MainWindow::setActionsForButton()
{//为QToolButton按钮设置Action
    ui->tBtnListIni->setDefaultAction(ui->actListIni);
    ui->tBtnListClear->setDefaultAction(ui->actListClear);
    ui->tBtnListInsert->setDefaultAction(ui->actListInsert);
    ui->tBtnListAppend->setDefaultAction(ui->actListAppend);
    ui->tBtnListDelete->setDefaultAction(ui->actListDelete);

    ui->tBtnSelALL->setDefaultAction(ui->actSelALL);
    ui->tBtnSelNone->setDefaultAction(ui->actSelNone);
    ui->tBtnSelInvs->setDefaultAction(ui->actSelInvs);
}

void MainWindow::createSelectionPopMenu()
{
//创建下拉菜单
    QMenu* menuSelection=new QMenu(this); //创建选择弹出式菜单
    menuSelection->addAction(ui->actSelALL);
    menuSelection->addAction(ui->actSelNone);
    menuSelection->addAction(ui->actSelInvs);

//listWidget上方的tBtnSelectItem按钮
    ui->tBtnSelectItem->setPopupMode(QToolButton::MenuButtonPopup);//菜单弹出模式，执行按钮的Action
    ui->tBtnSelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //按钮样式
    ui->tBtnSelectItem->setDefaultAction(ui->actSelPopMenu);//关联Action
    ui->tBtnSelectItem->setMenu(menuSelection); //设置下拉菜单

//工具栏上的 下拉式菜单按钮
    QToolButton  *aBtn=new QToolButton(this);
    aBtn->setPopupMode(QToolButton::InstantPopup);//button's own action is not triggered.
    aBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);//按钮样式
    aBtn->setDefaultAction(ui->actSelPopMenu); //设置Action,获取图标、标题等设置
    aBtn->setMenu(menuSelection);//设置下拉菜单
    ui->mainToolBar->addWidget(aBtn); //工具栏添加按钮

//工具栏添加分隔条，和“退出”按钮
    ui->mainToolBar->addSeparator();
    ui->mainToolBar->addAction(ui->actQuit);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->splitter); //设置中心组件
    setActionsForButton();
    createSelectionPopMenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actListClear_triggered()
{
    ui->listWidget->clear(); //清除项
}

void MainWindow::on_actListIni_triggered()
{ //初始化项
    QListWidgetItem *aItem; //每一行是一个QListWidgetItem

    QIcon aIcon;
    aIcon.addFile(":/images/icons/check2.ico"); //设置ICON的图标
    bool chk=ui->chkBoxListEditable->isChecked();//是否可编辑

    ui->listWidget->clear(); //清除项
    for (int i=0; i<10; i++)
    {
        QString str=QString::asprintf("Item %d",i);
        aItem=new QListWidgetItem(); //新建一个项

        aItem->setText(str); //设置文字标签
        aItem->setIcon(aIcon);//设置图标
        aItem->setCheckState(Qt::Checked); //设置为选中状态
        if (chk) //可编辑, 设置flags
            aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);
        else//不可编辑, 设置flags
            aItem->setFlags(Qt::ItemIsSelectable |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);
        ui->listWidget->addItem(aItem); //增加一个项
    }
}

void MainWindow::on_chkBoxListEditable_clicked(bool checked)
{ //可编辑 QCheckBox的响应代码， 设置所有项是否可编辑
    int i,cnt;
    QListWidgetItem *aItem;

    cnt=ui->listWidget->count();//项的个数
    for (i=0; i<cnt; i++)
    {
        aItem=ui->listWidget->item(i);//获得一个项
        if (checked) //可编辑
            aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);
        else
            aItem->setFlags(Qt::ItemIsSelectable |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);
    }

}

void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{ //listWidget当前选中项发生变化
  QString str;
  if (current != NULL) //需要检测变量指针是否为空
  {
    if (previous==NULL)  //需要检测变量指针是否为空
      str="当前："+current->text();
    else
      str="前一项："+previous->text()+"; 当前项："+current->text();
    ui->editCutItemText->setText(str);
  }
}

void MainWindow::on_actListInsert_triggered()
{   //插入一个项
    QIcon aIcon;
    aIcon.addFile(":/images/icons/check2.ico"); //图标

    bool chk=ui->chkBoxListEditable->isChecked(); //是否可比那几

    QListWidgetItem* aItem=new QListWidgetItem("New Inserted Item"); //创建一个项
    aItem->setIcon(aIcon);//设置图标
    aItem->setCheckState(Qt::Checked); //设置为checked
    if (chk) //设置标记
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);
    else
        aItem->setFlags(Qt::ItemIsSelectable |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);

    ui->listWidget->insertItem(ui->listWidget->currentRow(),aItem); //在当前行的上方插入一个项

}

void MainWindow::on_actListAppend_triggered()
{//增加一个项
    QIcon aIcon;
    aIcon.addFile(":/images/icons/check2.ico"); //设定图标

    bool chk=ui->chkBoxListEditable->isChecked();//是否可编辑

    QListWidgetItem* aItem=new QListWidgetItem("New Added Item"); //创建一个Item
    aItem->setIcon(aIcon); //设置图标
    aItem->setCheckState(Qt::Checked); //设置为checked
    if (chk) //设置标志
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);
    else
        aItem->setFlags(Qt::ItemIsSelectable |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);

    ui->listWidget->addItem(aItem);//增加一个项

}

void MainWindow::on_actListDelete_triggered()
{ //删除当前项
    int row=ui->listWidget->currentRow();//当前行

    QListWidgetItem* aItem=ui->listWidget->takeItem(row); //移除指定行的项，但不delete
    delete aItem; //需要手工删除对象

//    QListWidgetItem *QListWidget::takeItem(int row)
//    Removes and returns the item from the given row in
//            the list widget; otherwise returns 0.
//    Items removed from a list widget will not be managed by Qt,
//            and will need to be deleted manually.
}

void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu* menuList=new QMenu(this); //创建菜单

  //添加Actions创建菜单项
    menuList->addAction(ui->actListIni);
    menuList->addAction(ui->actListClear);
    menuList->addAction(ui->actListInsert);
    menuList->addAction(ui->actListAppend);
    menuList->addAction(ui->actListDelete);
    menuList->addSeparator();
    menuList->addAction(ui->actSelALL);
    menuList->addAction(ui->actSelNone);
    menuList->addAction(ui->actSelInvs);

    menuList->exec(QCursor::pos()); //在鼠标光标位置显示右键快捷菜单

    delete menuList; //手工创建的指针必须手工删除
}

void MainWindow::on_toolBox_currentChanged(int index)
{
    ui->tabWidget->setCurrentIndex(index);//ToolBox当前页与tabWidget的当前页联动
}


void MainWindow::on_actSelALL_triggered()
{ //项全选
    int cnt=ui->listWidget->count();//项个数
    for (int i=0; i<cnt; i++)
    {
        QListWidgetItem *aItem=ui->listWidget->item(i);//获取一个项
        aItem->setCheckState(Qt::Checked);//设置为选中
    }
}

void MainWindow::on_actSelNone_triggered()
{ //全不选
    int i,cnt;
    QListWidgetItem *aItem;

    cnt=ui->listWidget->count();//项个数
    for (i=0; i<cnt; i++)
    {
        aItem=ui->listWidget->item(i);//获取一个项
        aItem->setCheckState(Qt::Unchecked);//不选
    }
}

void MainWindow::on_actSelInvs_triggered()
{//反选
    int i,cnt;
    QListWidgetItem *aItem;

    cnt=ui->listWidget->count();//项个数
    for (i=0; i<cnt; i++)
    {
        aItem=ui->listWidget->item(i);//获取一个项
        if (aItem->checkState()!=Qt::Checked)
            aItem->setCheckState(Qt::Checked);
        else
            aItem->setCheckState(Qt::Unchecked);
    }

}
