#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>
#include    <QAudioRecorder>
#include    <QAudioProbe>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QAudioRecorder *recorder;//音频录音
    QAudioProbe *probe; //探测器

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
//自定义槽函数
    void onStateChanged(QMediaRecorder::State state);//recorder
    void onDurationChanged(qint64 duration);//recorder

    void processBuffer(const QAudioBuffer& buffer);//probe


    void on_actRecord_triggered();

    void on_btnGetFile_clicked();

    void on_actPause_triggered();

    void on_actStop_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
