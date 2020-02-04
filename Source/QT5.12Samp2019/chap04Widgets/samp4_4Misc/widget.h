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
    void on_SliderV_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_radioBtnDec_clicked(); //设置LCD显示十进制

    void on_radioBtnBin_clicked();//设置LCD显示二进制

    void on_radioBtnOct_clicked();//设置LCD显示八进制

    void on_radioBtnHex_clicked();//设置LCD显示十六进制

    void on_SliderH_valueChanged(int value);

    void on_ScrollBarV_sliderMoved(int position);

    void on_ScrollBarH_sliderMoved(int position);

    void on_SliderRed_valueChanged(int value); // Slidered的valueChanged()信号的响应

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
