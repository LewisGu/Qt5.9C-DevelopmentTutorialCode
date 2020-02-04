#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>
#include    <QtCharts>
#include    <QAudioDeviceInfo>
#include    <QAudioInput>
//#include    <QIODevice>
#include    "qmydisplaydevice.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    const qint64  displayPointsCount=4000;

    QLineSeries *lineSeries;//曲线序列

    QList<QAudioDeviceInfo> deviceList;  //音频录入设备列表

    QAudioDeviceInfo curDevice;//当前输入设备

    QmyDisplayDevice    *displayDevice; //用于显示的IODevice

    QAudioInput         *audioInput;//音频输入设备

    QString SampleTypeString(QAudioFormat::SampleType sampleType);

    QString ByteOrderString(QAudioFormat::Endian endian);
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
//自定义槽函数
    void    on_IODevice_UpdateBlockSize(qint64 blockSize);

//
    void on_comboDevices_currentIndexChanged(int index);

    void on_actStart_triggered();

    void on_actStop_triggered();

    void on_actDeviceTest_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
