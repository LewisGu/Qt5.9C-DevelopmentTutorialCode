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
    void on_btnCal_clicked(); //计算按键 clicked()响应

    void on_btnDec_clicked();//读十进制数再用其他进制显示 的按键的 clicked()响应

    void on_btnBin_clicked();//读二进制数再用其他进制显示 的按键的 clicked()响应

    void on_btnHex_clicked();//读十六进制数再用其他进制显示 的按键的 clicked()响应

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
