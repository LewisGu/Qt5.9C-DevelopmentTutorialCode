#ifndef QWMAINWINDOW_H
#define QWMAINWINDOW_H

#include    <QMainWindow>

#include    "qformdoc.h"

#include    <QMdiSubWindow>

namespace Ui {
class QWMainWindow;
}

class QWMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    void closeEvent(QCloseEvent *event); //主窗口关闭时关闭所有子窗口
public:
    explicit QWMainWindow(QWidget *parent = 0);
    ~QWMainWindow();

private slots:
    void on_actDoc_Open_triggered(); //打开文件

    void on_actDoc_New_triggered(); //新建文件

    void on_actCut_triggered(); //cut

    void on_actFont_triggered();  //设置字体

    void on_actCopy_triggered();  //copy

    void on_actPaste_triggered(); //paste

    void on_mdiArea_subWindowActivated(QMdiSubWindow *arg1); //子窗口被激活

    void on_actViewMode_triggered(bool checked); //MDI 模式设置

    void on_actCascade_triggered(); //级联形式显示子窗口

    void on_actTile_triggered(); //平铺形式显示子窗口

    void on_actCloseALL_triggered(); //关闭全部子窗口

private:
    Ui::QWMainWindow *ui;
};

#endif // QWMAINWINDOW_H
