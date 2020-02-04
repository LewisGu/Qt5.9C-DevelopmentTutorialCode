#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>
#include    <QListWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    void    setActionsForButton();
    void    createSelectionPopMenu();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actListClear_triggered();  //清除项

    void on_actListIni_triggered(); //项初始化

    void on_chkBoxListEditable_clicked(bool checked);   //chkBoxListEditable单击事件

//当前选择项发生变化
    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_actListInsert_triggered();  //插入项

    void on_actListAppend_triggered();  //添加项

    void on_actListDelete_triggered();  //删除当前项

    void on_listWidget_customContextMenuRequested(const QPoint &pos);   //弹出菜单

    void on_toolBox_currentChanged(int index); //ToolBox当前组变化时，显示TabWidget相应的页面

    void on_actSelALL_triggered(); //全选

    void on_actSelNone_triggered();//全不选

    void on_actSelInvs_triggered();//反选

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
