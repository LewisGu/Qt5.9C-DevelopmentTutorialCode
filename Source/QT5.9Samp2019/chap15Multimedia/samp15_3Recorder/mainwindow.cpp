#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QFileDialog>
#include    <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    recorder = new QAudioRecorder(this);

    probe = new QAudioProbe;//探测器
    connect(probe, SIGNAL(audioBufferProbed(QAudioBuffer)),
            this, SLOT(processBuffer(QAudioBuffer)));
    probe->setSource(recorder);


    connect(recorder,SIGNAL(stateChanged(QMediaRecorder::State)),
            this,SLOT(onStateChanged(QMediaRecorder::State)));

    connect(recorder, SIGNAL(durationChanged(qint64)), this,
            SLOT(onDurationChanged(qint64)));

    if (recorder->defaultAudioInput().isEmpty())
        return;  //无音频录入设备

    foreach (const QString &device, recorder->audioInputs())
        ui->comboDevices->addItem(device); //音频录入设备列表

    foreach (const QString &codecName, recorder->supportedAudioCodecs())
        ui->comboCodec->addItem(codecName); //支持的音频编码

    foreach (int sampleRate, recorder->supportedAudioSampleRates())
        ui->comboSampleRate->addItem(QString::number(sampleRate)); //支持的采样率

    //channels
    ui->comboChannels->addItem("1");
    ui->comboChannels->addItem("2");
    ui->comboChannels->addItem("4");

    //quality
    ui->sliderQuality->setRange(0, int(QMultimedia::VeryHighQuality));
    ui->sliderQuality->setValue(int(QMultimedia::NormalQuality));

    //bitrates:
    ui->comboBitrate->addItem("32000");
    ui->comboBitrate->addItem("64000");
    ui->comboBitrate->addItem("96000");
    ui->comboBitrate->addItem("128000");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onStateChanged(QMediaRecorder::State state)
{ //录音状态变化
    ui->actRecord->setEnabled(state!=QMediaRecorder::RecordingState);
    ui->actPause->setEnabled(state==QMediaRecorder::RecordingState);
    ui->actStop->setEnabled(state==QMediaRecorder::RecordingState);

    ui->btnGetFile->setEnabled(state==QMediaRecorder::StoppedState);
    ui->editOutputFile->setEnabled(state==QMediaRecorder::StoppedState);

}

void MainWindow::onDurationChanged(qint64 duration)
{//录音持续时间变化
    ui->LabPassTime->setText(QString("已录制 %1 秒").arg(duration / 1000));
}

void MainWindow::processBuffer(const QAudioBuffer &buffer)
{ //处理探测到的缓冲区
    ui->spin_byteCount->setValue(buffer.byteCount());//缓冲区字节数
    ui->spin_duration->setValue(buffer.duration()/1000);//缓冲区时长
    ui->spin_frameCount->setValue(buffer.frameCount());//缓冲区帧数
    ui->spin_sampleCount->setValue(buffer.sampleCount());//缓冲区采样数

    QAudioFormat audioFormat=buffer.format();//缓冲区格式
    ui->spin_channelCount->setValue(audioFormat.channelCount()); //通道数
    ui->spin_sampleSize->setValue(audioFormat.sampleSize());//采样大小
    ui->spin_sampleRate->setValue(audioFormat.sampleRate());//采样率
    ui->spin_bytesPerFrame->setValue(audioFormat.bytesPerFrame());//每帧字节数

    if (audioFormat.byteOrder()==QAudioFormat::LittleEndian)
        ui->edit_byteOrder->setText("LittleEndian");//字节序
    else
        ui->edit_byteOrder->setText("BigEndian");

    ui->edit_codec->setText(audioFormat.codec());//编码格式

    if (audioFormat.sampleType()==QAudioFormat::SignedInt)//采样点类型
        ui->edit_sampleType->setText("SignedInt");
    else if(audioFormat.sampleType()==QAudioFormat::UnSignedInt)
        ui->edit_sampleType->setText("UnSignedInt");
    else if(audioFormat.sampleType()==QAudioFormat::Float)
        ui->edit_sampleType->setText("Float");
    else
        ui->edit_sampleType->setText("Unknown");

}

void MainWindow::on_actRecord_triggered()
{ //开始录音
    if (recorder->state() == QMediaRecorder::StoppedState) //已停止，重新设置
    {
        QString selectedFile=ui->editOutputFile->text().trimmed();
        if (selectedFile.isEmpty())
        {
            QMessageBox::critical(this,"错误","请先设置录音输出文件");
            return;
        }

        if (QFile::exists(selectedFile))
         if (!QFile::remove(selectedFile))
         {
           QMessageBox::critical(this,"错误","所设置录音输出文件被占用，无法删除");
            return;
         }
        recorder->setOutputLocation(QUrl::fromLocalFile(selectedFile));//设置输出文件

        recorder->setAudioInput(ui->comboDevices->currentText()); //设置录入设备

        QAudioEncoderSettings settings; //音频编码设置
        settings.setCodec(ui->comboCodec->currentText());//编码
        settings.setSampleRate(ui->comboSampleRate->currentText().toInt());//采样率
        settings.setBitRate(ui->comboBitrate->currentText().toInt());//比特率
        settings.setChannelCount(ui->comboChannels->currentText().toInt()); //通道数
        settings.setQuality(QMultimedia::EncodingQuality(ui->sliderQuality->value())); //品质
        if (ui->radioQuality->isChecked())//编码模式为固定品质,自动决定采样率，采样点大小
            settings.setEncodingMode(QMultimedia::ConstantQualityEncoding);
        else
            settings.setEncodingMode(QMultimedia::ConstantBitRateEncoding);//固定比特率

        recorder->setAudioSettings(settings); //音频设置
    }

    recorder->record();
}

void MainWindow::on_btnGetFile_clicked()
{ //设置保存文件
    QString curPath=QDir::homePath();//获取系统当前目录
    QString dlgTitle="选择输出文件"; //对话框标题
    QString filter="wav文件(*.wav)"; //文件过滤器
    QString selectedFile=QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);

    if (!selectedFile.isEmpty())
        ui->editOutputFile->setText(selectedFile);
}

void MainWindow::on_actPause_triggered()
{ //暂停
    recorder->pause();
}

void MainWindow::on_actStop_triggered()
{//停止
    recorder->stop();
}
