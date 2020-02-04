#ifndef QWDIALOG_H
#define QWDIALOG_H

#include <QDialog>

namespace Ui {
class QWDialog;
}

class QWDialog : public QDialog
{
    Q_OBJECT   //只要使用信号与槽功能的类，都需加入此宏定义

public:
    explicit QWDialog(QWidget *parent = 0); //构造函数
    ~QWDialog();   //析构函数

private slots:
    void on_chkBoxUnder_clicked(bool checked);  //设置下划线

    void on_chkBoxItalic_clicked(bool checked); //设置斜体

    void on_chkBoxBold_clicked(bool checked);   //设置粗体

    void setTextFontColor(); //设置字体颜色
private:
    Ui::QWDialog *ui;   //指向界面的指针，用于访问界面组件
};

#endif // QWDIALOG_H




