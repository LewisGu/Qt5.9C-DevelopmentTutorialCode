#ifndef QWMAINWINDOW_H
#define QWMAINWINDOW_H

#include <QMainWindow>

#include    "qformdoc.h"

namespace Ui {
class QWMainWindow;
}

class QWMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    void    paintEvent(QPaintEvent *event);//绘制背景

public:
    explicit QWMainWindow(QWidget *parent = 0);
    ~QWMainWindow();

private slots:
    void on_tabWidget_tabCloseRequested(int index); //tab页关闭时

    void on_actDoc_Open_triggered();//打开文件

    void on_actDoc_New_triggered();//新建文件

    void on_tabWidget_currentChanged(int index); //tabWidget当前页切换

    void on_actCut_triggered(); //cut

    void on_actFont_triggered();//字体设置

    void on_actCopy_triggered(); //copy

    void on_actPaste_triggered(); //paste

    void on_actCloseALL_triggered(); //关闭全部

public  slots:
    void  on_fileOpended(QString& aFileName); //主窗口打开文件后触发

private:
    Ui::QWMainWindow *ui;
};

#endif // QWMAINWINDOW_H
