#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

private:
    void    myDrawFilledRect();
    void    myDrawTextureRect();
    void    myDrawGradient();

    void    total();

    void    myDrawShape(); //绘制基本图形


protected:
    void    paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
