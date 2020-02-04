#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include    <QTcpServer>
#include    <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QLabel  *LabListen;//状态栏标签
    QLabel  *LabSocketState;//状态栏标签

    QTcpServer *tcpServer; //TCP服务器

    QTcpSocket *tcpSocket;//TCP通讯的Socket

    QString getLocalIP();//获取本机IP地址

protected:
    void    closeEvent(QCloseEvent *event);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
//自定义槽函数
    void    onNewConnection();//QTcpServer的newConnection()信号

    void    onSocketStateChange(QAbstractSocket::SocketState socketState);
    void    onClientConnected(); //Client Socket connected
    void    onClientDisconnected();//Client Socket disconnected
    void    onSocketReadyRead();//读取socket传入的数据
//UI生成的
    void on_actStart_triggered();

    void on_actStop_triggered();

    void on_actClear_triggered();

    void on_btnSend_clicked();

    void on_actHostInfo_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
