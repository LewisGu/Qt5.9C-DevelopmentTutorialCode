#ifndef QDLGLOGIN_H
#define QDLGLOGIN_H

#include <QDialog>

namespace Ui {
class dlgLogin;
}

class QDlgLogin : public QDialog
{
    Q_OBJECT

private:
    bool    m_moving=false;//表示窗口是否在鼠标操作下移动
    QPoint  m_lastPos;  //上一次的鼠标位置

    QString m_user="user"; //初始化用户名
    QString m_pswd="12345";//初始化密码，未加密的

    int m_tryCount=0; //试错次数

    void    readSettings(); //读取设置,从注册表
    void    writeSettings();//写入设置，从注册表

    QString encrypt(const QString& str);//字符串加密

protected:
//用于鼠标拖动窗口的鼠标事件操作
     void mousePressEvent(QMouseEvent *event);
     void mouseMoveEvent(QMouseEvent *event);
     void mouseReleaseEvent(QMouseEvent *event);

public:
    explicit QDlgLogin(QWidget *parent = 0);
    ~QDlgLogin();

private slots:
    void on_btnOK_clicked(); //OK按键

private:
    Ui::dlgLogin *ui;
};

#endif // DLGLOGIN_H
