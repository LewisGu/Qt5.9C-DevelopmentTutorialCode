#ifndef QWDIALOGPEN_H
#define QWDIALOGPEN_H

#include    <QDialog>
#include    <QPen>
//#include    "sharedlib_global.h"

namespace Ui {
class QWDialogPen;
}

class QWDialogPen : public QDialog
{ //QPen属性设置对话框
    Q_OBJECT
private:
    QPen    m_pen; //成员变量
public:
    explicit QWDialogPen(QWidget *parent = 0);
    ~QWDialogPen();

    void    setPen(QPen pen); //设置QPen，用于对话框的界面显示
    QPen    getPen(); //获取对话框设置的QPen的属性
    static  QPen    getPen(QPen  iniPen, bool &ok);  //静态函数

private slots:
    void on_btnColor_clicked();
private:
    Ui::QWDialogPen *ui;
};

#endif // QWDIALOGPEN_H
