#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QAudioDeviceInfo>
#include    <QAudioFormat>
#include    <QMessageBox>

QString MainWindow::SampleTypeString(QAudioFormat::SampleType sampleType)
{//将QAudioFormat::SampleType类型转换为字符串
    QString result("Unknown");
    switch (sampleType) {
    case QAudioFormat::SignedInt:
        result = "SignedInt";
        break;
    case QAudioFormat::UnSignedInt:
        result = "UnSignedInt";
        break;
    case QAudioFormat::Float:
        result = "Float";
        break;
    case QAudioFormat::Unknown:
        result = "Unknown";
    }
    return result;
}

QString MainWindow::ByteOrderString(QAudioFormat::Endian endian)
{ //将QAudioFormat::Endian  转换为字符串
  if (endian==QAudioFormat::LittleEndian)
    return "LittleEndian";
  else if (endian==QAudioFormat::BigEndian)
    return "BigEndian";
  else
    return "Unknown";
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->splitter);

//创建显示图表
    QChart *chart = new QChart;
    chart->setTitle("音频输入原始信号");
    ui->chartView->setChart(chart);
//    ui->chartView->setRenderHint(QPainter::Antialiasing);
    lineSeries= new QLineSeries(); //序列
    chart->addSeries(lineSeries);

    QValueAxis *axisX = new QValueAxis;  //坐标轴
    axisX->setRange(0, displayPointsCount); //chart显示4000个采样点数据
    axisX->setLabelFormat("%g");
    axisX->setTitleText("Samples");

    QValueAxis *axisY = new QValueAxis;  //坐标轴
    axisY->setRange(0, 256); // UnSingedInt采样，数据范围0-255
//    axisY->setRange(-1, 1);
    axisY->setTitleText("Audio level");

//    chart->setAxisX(axisX, lineSeries); //setAxisX()函数在Qt 5.12.1中过时
//    chart->setAxisY(axisY, lineSeries); //setAxisY()函数在Qt 5.12.1中过时
//setAxisX(),setAxisY()函数在Qt 5.12.1中过时，用下面的方式替代
    chart->addAxis(axisX,Qt::AlignBottom);
    chart->addAxis(axisY,Qt::AlignLeft);
    lineSeries->attachAxis(axisX);
    lineSeries->attachAxis(axisY);

    chart->legend()->hide();
    ui->comboDevices->clear();
    deviceList=QAudioDeviceInfo::availableDevices(QAudio::AudioInput);//输入设备列表
    for(int i=0;i<deviceList.count();i++)
    {
       QAudioDeviceInfo device=deviceList.at(i);
       ui->comboDevices->addItem(device.deviceName());
     }

    if (deviceList.size()>0)
    {
      ui->comboDevices->setCurrentIndex(0); //触发comboDevices的信号currentIndexChanged()
      curDevice =deviceList.at(0);
    }
    else
    {
        ui->actStart->setEnabled(false);
        ui->actDeviceTest->setEnabled(false);
        ui->groupBoxDevice->setTitle("支持的音频输入设置(无设备)");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_IODevice_UpdateBlockSize(qint64 blockSize)
{//显示缓冲区大小和数据块大小
    ui->LabBufferSize->setText(QString::asprintf("QAudioInput::bufferSize()=%d",
                                                 audioInput->bufferSize()));

    ui->LabBlockSize->setText(
                QString("IODevice数据块字节数=%1").arg(blockSize));
}

void MainWindow::on_comboDevices_currentIndexChanged(int index)
{//选择音频输入设备
    curDevice =deviceList.at(index);//当前音频设备

    ui->comboCodec->clear(); //支持的音频编码
    QStringList codecs = curDevice.supportedCodecs();
    for (int i = 0; i < codecs.size(); ++i)
        ui->comboCodec->addItem(codecs.at(i));

    ui->comboSampleRate->clear(); //支持的采样率
    QList<int> sampleRate = curDevice.supportedSampleRates();
    for (int i = 0; i < sampleRate.size(); ++i)
        ui->comboSampleRate->addItem(QString("%1").arg(sampleRate.at(i)));

    ui->comboChannels->clear();//支持的通道数
    QList<int> Channels = curDevice.supportedChannelCounts();
    for (int i = 0; i < Channels.size(); ++i)
        ui->comboChannels->addItem(QString("%1").arg(Channels.at(i)));

    ui->comboSampleTypes->clear(); //支持的采样点类型
    QList<QAudioFormat::SampleType> sampleTypes = curDevice.supportedSampleTypes();
    for (int i = 0; i < sampleTypes.size(); ++i)
        ui->comboSampleTypes->addItem(SampleTypeString(sampleTypes.at(i)),
                                      QVariant(sampleTypes.at(i)));

    ui->comboSampleSizes->clear();//采样点大小
    QList<int> sampleSizes = curDevice.supportedSampleSizes();
    for (int i = 0; i < sampleSizes.size(); ++i)
        ui->comboSampleSizes->addItem(QString("%1").arg(sampleSizes.at(i)));

    ui->comboByteOrder->clear();//字节序
    QList<QAudioFormat::Endian> endians = curDevice.supportedByteOrders();
    for (int i = 0; i < endians.size(); ++i)
        ui->comboByteOrder->addItem(ByteOrderString(endians.at(i)));
}

void MainWindow::on_actStart_triggered()
{//开始音频输入
    QAudioFormat defaultAudioFormat; //缺省格式
    defaultAudioFormat.setSampleRate(8000);
    defaultAudioFormat.setChannelCount(1);
    defaultAudioFormat.setSampleSize(8);
    defaultAudioFormat.setCodec("audio/pcm");
    defaultAudioFormat.setByteOrder(QAudioFormat::LittleEndian);
    defaultAudioFormat.setSampleType(QAudioFormat::UnSignedInt);

//    curDevice = QAudioDeviceInfo::defaultInputDevice(); // 选择缺省设备
    if (!curDevice.isFormatSupported(defaultAudioFormat))
    {
        QMessageBox::critical(this,"音频输入设置测试","测试失败，输入设备不支持此设置");
        return;
    }

    audioInput = new QAudioInput(curDevice,defaultAudioFormat, this);
    audioInput->setBufferSize(displayPointsCount);

//    Returns the audio buffer size in bytes.
//    If called before start(), returns platform default value.
//    If called before start() but setBufferSize() was called prior,
//    returns value set by setBufferSize(). If called after start(),
//    returns the actual buffer size being used.
//    This may not be what was set previously by setBufferSize().

//    ui->LabBufferSize->setText(QString::asprintf("QAudioInput::bufferSize()=%d",
//                                                 audioInput->bufferSize()));

// 接收音频输入数据的流设备
    displayDevice = new QmyDisplayDevice(lineSeries, displayPointsCount,this);

    connect(displayDevice,SIGNAL(updateBlockSize(qint64)),
            this,SLOT(on_IODevice_UpdateBlockSize(qint64)));

    displayDevice->open(QIODevice::WriteOnly); //必须以写方式打开

    audioInput->start(displayDevice); //以流设备作为参数，开始录入音频输入数据

//    ioDevice=new QmyAudioIODevice(lineSeries,this);//
//    ioDevice->start();
//    audioInput->start(ioDevice);

//    destinationFile.setFileName("/tmp/test.raw");
//    destinationFile.open( QIODevice::WriteOnly | QIODevice::Truncate );
//    audioInput->start(&destinationFile);

    ui->actStart->setEnabled(false);
    ui->actStop->setEnabled(true);
}

void MainWindow::on_actStop_triggered()
{
    audioInput->stop();
    audioInput->deleteLater();
//    destinationFile.close();
//    delete audioInput;

//    disconnect(ioDevice,SIGNAL(readyRead()),
//           this,SLOT(on_IODevice_readyRead()));
    displayDevice->close();
    disconnect(displayDevice,SIGNAL(updateBlockSize(qint64)),
            this,SLOT(on_IODevice_UpdateBlockSize(qint64)));
    displayDevice->deleteLater();

    ui->actStart->setEnabled(true);
    ui->actStop->setEnabled(false);
}

void MainWindow::on_actDeviceTest_triggered()
{//测试音频输入设备是否支持选择的设置
  QAudioFormat settings;

  settings.setCodec(ui->comboCodec->currentText());
  settings.setSampleRate(ui->comboSampleRate->currentText().toInt());
  settings.setChannelCount(ui->comboChannels->currentText().toInt());

  settings.setSampleType(QAudioFormat::SampleType(ui->comboSampleTypes->currentData().toInt()));

  settings.setSampleSize(ui->comboSampleSizes->currentText().toInt());

//  不能采用下面的语句，   QAudioFormat::Endian的取值与 QSysInfo::Endian对应，正好相反
//    testSettings.setByteOrder(QAudioFormat::Endian(ui->comboByteOrder->currentData().toInt()));
  if (ui->comboByteOrder->currentText()=="LittleEndian")
    settings.setByteOrder(QAudioFormat::LittleEndian);
  else
    settings.setByteOrder(QAudioFormat::BigEndian);

  if (curDevice.isFormatSupported(settings))
    QMessageBox::information(this,"音频输入设置测试","测试成功，输入设备支持此设置");
  else
    QMessageBox::critical(this,"音频输入设置测试","测试失败，输入设备不支持此设置");
}
