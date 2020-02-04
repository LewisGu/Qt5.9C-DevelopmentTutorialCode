#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btnCal_clicked();  //计算 按键单击响应

    void on_btnDec_clicked();   //十进制转换为其他进制

    void on_btnBin_clicked();   //二进制转换为其他进制

    void on_btnHex_clicked();   //十六进制转换为其他进制

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
