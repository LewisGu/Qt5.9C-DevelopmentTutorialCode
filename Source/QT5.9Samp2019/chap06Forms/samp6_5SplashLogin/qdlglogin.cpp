#include "qdlglogin.h"
#include "ui_qdlglogin.h"

#include    <QMouseEvent>
#include    <QSettings>
//#include    "qwmisc.h"
#include    <QMessageBox>
#include    <QByteArray>
#include    <QCryptographicHash>

void QDlgLogin::readSettings()
{//读取存储的用户名和密码, 密码是经过加密的
    QString organization="WWB-Qt";//用于注册表，
    QString appName="samp6_5"; //HKEY_CURRENT_USER/Software/WWB-Qt/amp6_5

    QSettings   settings(organization,appName);//创建

    bool saved=settings.value("saved",false).toBool();//读取 saved键的值
    m_user=settings.value("Username", "user").toString();//读取 Username 键的值，缺省为“user”

    QString defaultPSWD=encrypt("12345"); //缺省密码"12345"加密后的数据

    m_pswd=settings.value("PSWD",defaultPSWD).toString();//读取PSWD 键的值，

    if (saved)
        ui->editUser->setText(m_user);

    ui->chkBoxSave->setChecked(saved);
}

void QDlgLogin::writeSettings()
{ //保存用户名，密码等设置
    QSettings   settings("WWB-Qt","samp6_5"); //注册表键组
    settings.setValue("Username",m_user); //用户名
    settings.setValue("PSWD",m_pswd);   //密码，经过加密的
    settings.setValue("saved",ui->chkBoxSave->isChecked());
}

QString QDlgLogin::encrypt(const QString &str)
{ //字符串MD5算法加密
    QByteArray btArray;

    btArray.append(str);//加入原始字符串

    QCryptographicHash hash(QCryptographicHash::Md5);  //Md5加密算法

    hash.addData(btArray);  //添加数据到加密哈希值

    QByteArray resultArray =hash.result();  //返回最终的哈希值

    QString md5 =resultArray.toHex();//转换为16进制字符串

    return  md5;
}

void QDlgLogin::mousePressEvent(QMouseEvent *event)
{ //鼠标按键被按下
    if (event->button() == Qt::LeftButton)
    {
        m_moving = true;
        //记录下鼠标相对于窗口的位置
        //event->globalPos()鼠标按下时，鼠标相对于整个屏幕位置
        //pos() this->pos()鼠标按下时，窗口相对于整个屏幕位置
        m_lastPos = event->globalPos() - pos();
    }
    return QDialog::mousePressEvent(event);  //
}

void QDlgLogin::mouseMoveEvent(QMouseEvent *event)
{//鼠标按下左键移动
    //(event->buttons() && Qt::LeftButton)按下是左键
    //鼠标移动事件需要移动窗口，窗口移动到哪里呢？就是要获取鼠标移动中，窗口在整个屏幕的坐标，然后move到这个坐标，怎么获取坐标？
    //通过事件event->globalPos()知道鼠标坐标，鼠标坐标减去鼠标相对于窗口位置，就是窗口在整个屏幕的坐标
    if (m_moving && (event->buttons() && Qt::LeftButton)
        && (event->globalPos()-m_lastPos).manhattanLength() > QApplication::startDragDistance())
    {
        move(event->globalPos()-m_lastPos);
        m_lastPos = event->globalPos() - pos();
    }
    return QDialog::mouseMoveEvent(event);
}

void QDlgLogin::mouseReleaseEvent(QMouseEvent *event)
{//鼠标按键释放
    Q_UNUSED(event);
    m_moving=false; //停止移动
}

QDlgLogin::QDlgLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgLogin)
{
    ui->setupUi(this);

    ui->editPSWD->setEchoMode(QLineEdit::Password); //密码输入编辑框设置为密码输入模式
    this->setAttribute(Qt::WA_DeleteOnClose);//设置为关闭时删除
    this->setWindowFlags(Qt::SplashScreen); //设置为SplashScreen, 窗口无边框,不在任务栏显示
//    this->setWindowFlags(Qt::FramelessWindowHint);//无边框，但是在任务显示对话框标题

    readSettings(); //读取存储的用户名和密码
}

QDlgLogin::~QDlgLogin()
{
//    QMessageBox::information(this, "提示", "登录窗口被删除");
    delete ui;
}

void QDlgLogin::on_btnOK_clicked()
{//"确定"按钮相应
    QString user=ui->editUser->text().trimmed();//输入用户名
    QString pswd=ui->editPSWD->text().trimmed(); //输入密码

    QString encrptPSWD=encrypt(pswd); //对输入密码进行加密

    if ((user==m_user)&&(encrptPSWD==m_pswd)) //如果用户名和密码正确
    {
        writeSettings();//保存设置
        this->accept(); //对话框 accept()，关闭对话框
    }
    else
    {
        m_tryCount++; //错误次数
        if (m_tryCount>3)
        {
            QMessageBox::critical(this, "错误", "输入错误次数太多，强行退出");
            this->reject(); //退出
        }
        else
            QMessageBox::warning(this, "错误提示", "用户名或密码错误");
    }
}
