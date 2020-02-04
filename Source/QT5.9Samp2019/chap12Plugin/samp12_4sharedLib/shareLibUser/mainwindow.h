#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include    <QPen>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QPen    mPen;

protected:
    void    paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
//    void on_pushButton_clicked();

    void on_action_Pen_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
