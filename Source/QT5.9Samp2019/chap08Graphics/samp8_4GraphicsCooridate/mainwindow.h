#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>
#include    <QGraphicsScene>
#include    <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QGraphicsScene  *scene;

    QLabel  *labViewCord;
    QLabel  *labSceneCord;
    QLabel  *labItemCord;


    void iniGraphicsSystem(); //创建Graphics View的各项

protected:
    void resizeEvent(QResizeEvent *event);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void    on_mouseMovePoint(QPoint point);

    void    on_mouseClicked(QPoint point);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
