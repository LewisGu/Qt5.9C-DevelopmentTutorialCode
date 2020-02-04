#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>
#include    <QNetworkAccessManager>
#include    <QNetworkReply>
#include    <QFile>
#include    <QUrl>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QNetworkAccessManager networkManager;//网络管理
    QNetworkReply *reply;   //网络响应
    QFile *downloadedFile;//下载保存的临时文件
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
//自定义槽函数
    void on_finished();
    void on_readyRead();
    void on_downloadProgress(qint64 bytesRead, qint64 totalBytes);


    void on_btnDefaultPath_clicked();

    void on_btnDownload_clicked();

    void on_editURL_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
