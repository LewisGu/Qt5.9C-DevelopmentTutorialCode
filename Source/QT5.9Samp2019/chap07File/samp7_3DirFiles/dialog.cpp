#include "dialog.h"
#include "ui_dialog.h"

#include    <QFileDialog>
#include    <QDateTime>
#include    <QTemporaryDir>
#include    <QTemporaryFile>

void Dialog::showBtnInfo(QObject *btn)
{ //显示btn的信息
    QPushButton *theBtn =static_cast<QPushButton*>(btn);
    ui->plainTextEdit->appendPlainText(theBtn->text());
    ui->plainTextEdit->appendPlainText(theBtn->toolTip()+"\n");
}

void Dialog::on_directoryChanged(const QString path)
{ //directoryChanged()信号的槽函数
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("目录发生了变化\n");
}

void Dialog::on_fileChanged(const QString path)
{//fileChanged()信号的槽函数
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("文件发生了变化\n");
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    showBtnInfo(sender());
    QString str=QCoreApplication::applicationDirPath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_2_clicked()
{
    showBtnInfo(sender());
    QString str=QCoreApplication::applicationFilePath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_3_clicked()
{
    showBtnInfo(sender());
    QString str=QCoreApplication::applicationName();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_4_clicked()
{
    showBtnInfo(sender());
    QStringList strList=QCoreApplication::libraryPaths();
    for (int i=0;i<strList.count();i++)
        ui->plainTextEdit->appendPlainText(strList.at(i));
    ui->plainTextEdit->appendPlainText("");
}

void Dialog::on_pushButton_5_clicked()
{
    ui->plainTextEdit->clear();
}


void Dialog::on_pushButton_41_clicked()
{//打开文件
    QString curDir=QDir::currentPath();
    QString aFile=QFileDialog::getOpenFileName(this,"打开一个文件",curDir,"所有文件(*.*)");
    ui->editFile->setText(aFile);
}

void Dialog::on_pushButton_45_clicked()
{
    QString curDir=QDir::currentPath();
    QString aDir=QFileDialog::getExistingDirectory(this,"选择一个目录",curDir,QFileDialog::ShowDirsOnly);
    ui->editDir->setText(aDir);
}

void Dialog::on_pushButton_28_clicked()
{//QFileInfo::absoluteFilePath()
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QString  str=fileInfo.absoluteFilePath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_29_clicked()
{//QFileInfo::absolutePath()
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QString  str=fileInfo.absolutePath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_30_clicked()
{//QFileInfo.basename()
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QString  str=fileInfo.baseName();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_31_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QString  str=fileInfo.completeBaseName();
    ui->plainTextEdit->appendPlainText(str+"\n");

}

void Dialog::on_pushButton_32_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QString  str=fileInfo.completeSuffix();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_27_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    bool  the=fileInfo.exists();
    if(the)
        ui->plainTextEdit->appendPlainText(+"true \n");
    else
        ui->plainTextEdit->appendPlainText(+"false \n");
}

void Dialog::on_pushButton_39_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QString  str=fileInfo.suffix();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_33_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QString  str=fileInfo.fileName();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_34_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QString  str=fileInfo.filePath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_42_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editDir->text());
    bool  the=fileInfo.isDir();
    if(the)
        ui->plainTextEdit->appendPlainText(+"true \n");
    else
        ui->plainTextEdit->appendPlainText(+"false \n");
}

void Dialog::on_pushButton_43_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    bool  the=fileInfo.isFile();
    if(the)
        ui->plainTextEdit->appendPlainText(+"true \n");
    else
        ui->plainTextEdit->appendPlainText(+"false \n");
}

void Dialog::on_pushButton_35_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    bool  the=fileInfo.isExecutable();
    if(the)
        ui->plainTextEdit->appendPlainText(+"true \n");
    else
        ui->plainTextEdit->appendPlainText(+"false \n");
}

void Dialog::on_pushButton_37_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QString  str=fileInfo.path();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_36_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QDateTime  dt=fileInfo.lastModified();
    QString  str=dt.toString("yyyy-MM-dd hh:mm:ss");
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_44_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QDateTime  dt=fileInfo.lastRead();
    QString  str=dt.toString("yyyy-MM-dd hh:mm:ss");
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_38_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    qint64  dt=fileInfo.size();
    QString  str=QString("%1 Bytes").arg(dt);
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_10_clicked()
{
    showBtnInfo(sender());
    QString  str=QDir::tempPath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_9_clicked()
{
    showBtnInfo(sender());
    QString  str=QDir::rootPath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_8_clicked()
{
    showBtnInfo(sender());
    QString  str=QDir::homePath();
    ui->plainTextEdit->appendPlainText(str+"\n");

}

void Dialog::on_pushButton_6_clicked()
{
    showBtnInfo(sender());
    QString  str=QDir::currentPath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_7_clicked()
{
    showBtnInfo(sender());
    QFileInfoList  strList=QDir::drives();
    for(int i=0;i<strList.count();i++)
        ui->plainTextEdit->appendPlainText(strList.at(i).path());
    ui->plainTextEdit->appendPlainText("\n");

}

void Dialog::on_pushButton_13_clicked()
{//absoluteFilePath()，
    showBtnInfo(sender());
    QDir    dir(ui->editDir->text());
    QString  str=dir.absoluteFilePath(ui->editFile->text());
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_14_clicked()
{
    showBtnInfo(sender());
    QDir    dir(ui->editDir->text());
    QString  str=dir.absolutePath();
    ui->plainTextEdit->appendPlainText(str+"\n");

}

void Dialog::on_pushButton_15_clicked()
{
    showBtnInfo(sender());
    QDir    dir(ui->editDir->text());
    QString  str=dir.canonicalPath();
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_19_clicked()
{
    showBtnInfo(sender());
    QDir    dir(ui->editDir->text());
    QString  str=dir.filePath(ui->editFile->text());
    ui->plainTextEdit->appendPlainText(str+"\n");

}

void Dialog::on_pushButton_16_clicked()
{
    showBtnInfo(sender());
    QDir    dir(ui->editDir->text());
    QString  str=dir.dirName();
    ui->plainTextEdit->appendPlainText(str+"\n");
}
void Dialog::on_pushButton_18_clicked()
{
    showBtnInfo(sender());
    QDir    dir(ui->editDir->text());
    bool  the=dir.exists();
    if (the)
        ui->plainTextEdit->appendPlainText("true \n");
    else
        ui->plainTextEdit->appendPlainText("false \n");
}

void Dialog::on_pushButton_17_clicked()
{//列出所有文件
    showBtnInfo(sender());
    QDir    dir(ui->editDir->text());
    QStringList strList=dir.entryList(QDir::Files);

    ui->plainTextEdit->appendPlainText("所选目录下的所有文件：");
    for(int i=0;i<strList.count();i++)
        ui->plainTextEdit->appendPlainText(strList.at(i));
    ui->plainTextEdit->appendPlainText("\n");
}

void Dialog::on_pushButton_11_clicked()
{//列出子目录
    showBtnInfo(sender());

    QDir    dir(ui->editDir->text());
    QStringList strList=dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);

    ui->plainTextEdit->appendPlainText("所选目录下的所有目录:");
    for(int i=0;i<strList.count();i++)
        ui->plainTextEdit->appendPlainText(strList.at(i));
    ui->plainTextEdit->appendPlainText("\n");

}

void Dialog::on_pushButton_24_clicked()
{
    showBtnInfo(sender());
    QString sous(ui->editDir->text());
    QDir    dir(sous);
    bool   ok=dir.rmdir(sous);
    if (ok)
        ui->plainTextEdit->appendPlainText("成功删除所选目录\n"+sous+"\n");
    else
        ui->plainTextEdit->appendPlainText("删除失败\n");
}

void Dialog::on_pushButton_20_clicked()
{
    showBtnInfo(sender());
    QString subDir="subdir1";
    QDir    dir(ui->editDir->text());
    bool   ok=dir.mkdir(subDir);
    if (ok)
        ui->plainTextEdit->appendPlainText("所选目录下成功新建一个目录 "+subDir+"\n");
    else
        ui->plainTextEdit->appendPlainText("创建目录失败\n");
}

void Dialog::on_pushButton_26_clicked()
{
    showBtnInfo(sender());
    QString curDir=QDir::currentPath();
    QDir    lastDir(curDir);
    ui->plainTextEdit->appendPlainText("选择目录之前："+lastDir.absolutePath());

    QString aDir=QFileDialog::getExistingDirectory(this,"选择一个目录",curDir,QFileDialog::ShowDirsOnly);
    if (aDir.isEmpty())
       return;

    ui->editDir->setText(aDir);
    lastDir.setPath(aDir);
    ui->plainTextEdit->appendPlainText("选择目录之后："+lastDir.absolutePath()+"\n");
}

void Dialog::on_pushButton_22_clicked()
{
    showBtnInfo(sender());
    QDir    dir(ui->editDir->text());
    QString sous(ui->editFile->text());
    bool ok= dir.remove(sous);
    if (ok)
        ui->plainTextEdit->appendPlainText("删除文件:"+sous+"\n");
    else
        ui->plainTextEdit->appendPlainText("删除文件失败\n");
}

void Dialog::on_pushButton_12_clicked()
{
    showBtnInfo(sender());
    QDir    dir(ui->editDir->text());
    bool ok= dir.removeRecursively();
    if (ok)
        ui->plainTextEdit->appendPlainText("删除目录及文件成功\n");
    else
        ui->plainTextEdit->appendPlainText("删除目录及文件失败\n");
}

void Dialog::on_pushButton_23_clicked()
{
    showBtnInfo(sender());

    QDir    dir(ui->editDir->text());
    QString sous=ui->editFile->text(); //源文件
    QFileInfo   fileInfo(sous);//
    QString newFile=fileInfo.path()+"/"+fileInfo.baseName()+".XYZ";
    dir.rename(sous,newFile);

    ui->plainTextEdit->appendPlainText("源文件："+sous);
    ui->plainTextEdit->appendPlainText("重命名为："+newFile+"\n");
}

void Dialog::on_pushButton_21_clicked()
{//QTemporaryDir
    showBtnInfo(sender());

    QTemporaryDir    dir;
    dir.setAutoRemove(true);
    ui->plainTextEdit->appendPlainText(dir.path()+"\n");
}

void Dialog::on_pushButton_25_clicked()
{//QTemporaryFile
    showBtnInfo(sender());

    QTemporaryFile    aFile;
    aFile.setAutoRemove(true);
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName()+"\n");
}

void Dialog::on_pushButton_40_clicked()
{
    QCoreApplication::exit();
}

void Dialog::on_pushButton_48_clicked()
{
    showBtnInfo(sender());
    QString sous=ui->editFile->text(); //源文件
    QFileInfo   fileInfo(sous);//
    QString newFile=fileInfo.path()+"/"+fileInfo.baseName()+"--副本."+fileInfo.suffix();
    QFile::copy(sous,newFile);
    ui->plainTextEdit->appendPlainText("源文件："+sous);
    ui->plainTextEdit->appendPlainText("复制为文件："+newFile+"\n");
}

void Dialog::on_pushButton_51_clicked()
{
    showBtnInfo(sender());
    QString sous=ui->editFile->text(); //源文件
    bool the=QFile::exists(sous);
    if(the)
        ui->plainTextEdit->appendPlainText(+"true \n");
    else
        ui->plainTextEdit->appendPlainText(+"false \n");
}

void Dialog::on_pushButton_54_clicked()
{
    showBtnInfo(sender());
    QString sous=ui->editFile->text(); //源文件
    QFile   file(sous);
    bool the=file.exists();
    if(the)
        ui->plainTextEdit->appendPlainText(+"true \n");
    else
        ui->plainTextEdit->appendPlainText(+"false \n");
}

void Dialog::on_pushButton_53_clicked()
{
    showBtnInfo(sender());
    QString sous=ui->editFile->text(); //源文件
    QFile   file(sous);

    QFileInfo   fileInfo(sous);//
    QString newFile=fileInfo.path()+"/"+fileInfo.baseName()+"--副本."+fileInfo.suffix();

    file.copy(newFile);
    ui->plainTextEdit->appendPlainText("源文件："+sous);
    ui->plainTextEdit->appendPlainText("复制为文件："+newFile+"\n");
}

void Dialog::on_pushButton_49_clicked()
{
    showBtnInfo(sender());
    QString sous=ui->editFile->text(); //源文件
    QFile::remove(sous);
    ui->plainTextEdit->appendPlainText("删除文件："+sous+"\n");
}

void Dialog::on_pushButton_50_clicked()
{//QFile::rename()
    showBtnInfo(sender());
    QString sous=ui->editFile->text(); //源文件
    QFileInfo   fileInfo(sous);//源文件信息
    QString newFile=fileInfo.path()+"/"+fileInfo.baseName()+".XYZ"; //更改文件后缀为".XYZ"
    QFile::rename(sous,newFile); //重命名文件
    ui->plainTextEdit->appendPlainText("源文件："+sous);
    ui->plainTextEdit->appendPlainText("重命名为："+newFile+"\n");
}

void Dialog::on_pushButton_55_clicked()
{
    showBtnInfo(sender());
    QString sous=ui->editFile->text(); //源文件
    QFile   file(sous);
    file.remove();
    ui->plainTextEdit->appendPlainText("删除文件："+sous+"\n");
}

void Dialog::on_pushButton_56_clicked()
{//QFile.rename()
    showBtnInfo(sender());
    QString sous=ui->editFile->text(); //源文件
    QFile   file(sous); //源文件对象
    QFileInfo   fileInfo(sous);//源文件信息
    QString newFile=fileInfo.path()+"/"+fileInfo.baseName()+".XYZ"; //修改文件后缀为“.XYZ”
    file.rename(newFile); //重命名文件
    ui->plainTextEdit->appendPlainText("源文件："+sous);
    ui->plainTextEdit->appendPlainText("重命名为："+newFile+"\n");
}

void Dialog::on_pushButton_46_clicked()
{//开始监听,addPath()
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("监听目录："+ui->editDir->text()+"\n");
    fileWatcher.addPath(ui->editDir->text());//添加监听目录
    fileWatcher.addPath(ui->editFile->text());//添加监听文件

    QObject::connect(&fileWatcher,&QFileSystemWatcher::directoryChanged,
            this,&Dialog::on_directoryChanged); //directoryChanged
    QObject::connect(&fileWatcher,&QFileSystemWatcher::fileChanged,
            this,&Dialog::on_fileChanged); //fileChanged
}

void Dialog::on_pushButton_47_clicked()
{//停止监听,removePath()
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("停止监听目录："+ui->editDir->text()+"\n");
    fileWatcher.removePath(ui->editDir->text());//
    fileWatcher.removePath(ui->editFile->text());//
    QObject::disconnect(&fileWatcher,&QFileSystemWatcher::directoryChanged,
            this,&Dialog::on_directoryChanged); //directoryChanged
    QObject::disconnect(&fileWatcher,&QFileSystemWatcher::fileChanged,
            this,&Dialog::on_fileChanged); //fileChanged
}

void Dialog::on_pushButton_52_clicked()
{//显示监听目录,directories()
    showBtnInfo(sender());
    QStringList strList=fileWatcher.directories();
    for (int i=0; i<strList.count();i++)
        ui->plainTextEdit->appendPlainText(strList.at(i));
    ui->plainTextEdit->appendPlainText("");

}

void Dialog::on_pushButton_57_clicked()
{//显示监听文件,files()
    showBtnInfo(sender());
    QStringList strList=fileWatcher.files();
    for (int i=0; i<strList.count();i++)
        ui->plainTextEdit->appendPlainText(strList.at(i));
    ui->plainTextEdit->appendPlainText("");

}

void Dialog::on_pushButton_59_clicked()
{
    showBtnInfo(sender());
    bool  the=QFileInfo::exists(ui->editFile->text());
    if(the)
        ui->plainTextEdit->appendPlainText(+"true \n");
    else
        ui->plainTextEdit->appendPlainText(+"false \n");

}

void Dialog::on_pushButton_58_clicked()
{
    showBtnInfo(sender());
    QFileInfo  fileInfo(ui->editFile->text());
    QDateTime  dt=fileInfo.created();
    QString  str=dt.toString("yyyy-MM-dd hh:mm:ss");
    ui->plainTextEdit->appendPlainText(str+"\n");
}

void Dialog::on_pushButton_60_clicked()
{
    showBtnInfo(sender());
    QDir::setCurrent(ui->editDir->text());
    QString  str=QDir::currentPath();
    ui->editDir->setText(str);
    ui->plainTextEdit->appendPlainText("设置当前路径为："+str+"\n");
}

void Dialog::on_pushButton_61_clicked()
{
   showBtnInfo(sender());
   QString str=QCoreApplication::organizationName();
   ui->plainTextEdit->appendPlainText(str+"\n");

}
