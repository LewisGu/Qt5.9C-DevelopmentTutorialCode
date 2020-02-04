#include "qwmainwind.h"
#include "ui_qwmainwind.h"

#include    <QFile>
#include    <QFileDialog>
#include    <QTextStream>
#include    <QFontDialog>
#include    <QCoreApplication>
#include    <Qlabel>
#include    <QTextCharFormat>


void QWMainWind::updateCurFile(QString aFile)
{//更新当前文件名，并更新状态栏提示
    fCurFileName=aFile;
    fLabCurFile->setText("当前文件："+fCurFileName);
}

void QWMainWind::iniUI()
{
//状态栏
    fLabCurFile=new QLabel;  //用于显示当前文件名的标签
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件：");
    ui->statusBar->addWidget(fLabCurFile);//添加到状态栏

    progressBar1=new QProgressBar;//状态栏上的进度条
    progressBar1->setMaximumWidth(200);//设置组件最大宽度
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->txtEdit->font().pointSize());//初始值
    ui->statusBar->addWidget(progressBar1); //添加到状态栏

//工具栏
    spinFontSize = new QSpinBox;// 工具栏上的文字大小 SpinBox
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());//初始值
    spinFontSize->setMinimumWidth(50);//设置组件最小宽度

    ui->mainToolBar->addWidget(new QLabel("字体大小 ")); //不引用的Label无需定义变量
    ui->mainToolBar->addWidget(spinFontSize); //SpinBox添加到工具栏

    ui->mainToolBar->addSeparator(); //工具栏上增加分隔条
    ui->mainToolBar->addWidget(new QLabel(" 字体 "));
    comboFont = new QFontComboBox;//字体名称ComboBox
    comboFont->setMinimumWidth(150); //设置组件最小宽度
    ui->mainToolBar->addWidget(comboFont);//添加到工具栏

    setCentralWidget(ui->txtEdit); //将txtEdit设置为中心组件，自动填充整个工作区
}

void QWMainWind::iniSignalSlots()
{ //信号与槽的关联，当函数带有参数时，必须写明参数的类型
    connect(spinFontSize,SIGNAL(valueChanged(int)),
            this,SLOT(on_spinBoxFontSize_valueChanged(int)));

    connect(comboFont,SIGNAL(currentIndexChanged(const QString &)),
            this,SLOT(on_comboFont_currentIndexChanged(const QString &)));
}

QWMainWind::QWMainWind(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QWMainWind)
{
    ui->setupUi(this);

    iniUI();//手工初始化UI

    iniSignalSlots();//信号与槽关联
}

QWMainWind::~QWMainWind()
{
    delete ui;
}

void QWMainWind::on_txtEdit_copyAvailable(bool b)
{//有文字可copy时更新cut,copy的Enable状态
    ui->actCut->setEnabled(b); //能否 cut
    ui->actCopy->setEnabled(b);  //能否copy

    ui->actPaste->setEnabled(ui->txtEdit->canPaste()); //能否paste
}

void QWMainWind::on_actOpen_triggered()
{
    QString curPath,aFileName;
    curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径

//调用打开文件对话框打开一个文件
    aFileName=QFileDialog::getOpenFileName(this,tr("打开一个文件"),curPath,
                 "C++程序文件(*.cpp);;H头文件(*.h);;文本文件(*.txt);;所有文件(*.*)");

    if (!aFileName.isEmpty())
    {
        QFile aFile(aFileName);  //以文件方式读出
        if (aFile.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            QTextStream aStream(&aFile); //用文本流读取文件
            while (!aStream.atEnd())
                ui->txtEdit->append(aStream.readLine()); //读取一个文本行
            updateCurFile(aFileName); //更新状态栏显示
        }
        aFile.close();
    }
}

void QWMainWind::on_actFont_triggered()
{
    bool    ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok)
        ui->txtEdit->setFont(font);

}

void QWMainWind::on_actNew_triggered()
{//新建文件
    ui->txtEdit->clear();
    updateCurFile("");
}

void QWMainWind::on_spinBoxFontSize_valueChanged(int aFontSize)
{//改变字体大小的SpinBox的响应
    QTextCharFormat fmt;
    fmt.setFontPointSize(aFontSize); //设置字体大小
    ui->txtEdit->mergeCurrentCharFormat(fmt);
    progressBar1->setValue(aFontSize);
}

void QWMainWind::on_comboFont_currentIndexChanged(const QString &arg1)
{//FontCombobox的响应，选择字体名称
    QTextCharFormat fmt;
    fmt.setFontFamily(arg1);//设置字体名称
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}


void QWMainWind::on_actToolbarLab_triggered(bool checked)
{
    if (checked)  //显示文字和图标
        ui->mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    else //只显示图标
        ui->mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
}

void QWMainWind::on_actFontBold_triggered(bool checked)
{
    QTextCharFormat fmt; //格式
    fmt=ui->txtEdit->currentCharFormat();//获取当前选择文字的格式

    if (checked) // 相当于调用ui->actFontBold->isChecked();读取Action的check状态
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);

    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actFontItalic_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actFontUnder_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}


void QWMainWind::on_txtEdit_selectionChanged()
{//当前选择的文字发生变化,更新粗体、斜体、下划线3个action的checked状态
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat(); //获取文字的格式

    ui->actFontItalic->setChecked(fmt.fontItalic()); //是否斜体
    ui->actFontBold->setChecked(fmt.font().bold()); //是否粗体
    ui->actFontUnder->setChecked(fmt.fontUnderline()); //是否有下划线
}
