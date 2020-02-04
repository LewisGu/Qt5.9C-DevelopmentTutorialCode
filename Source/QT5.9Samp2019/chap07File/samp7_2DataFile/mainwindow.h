#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>
#include    <QLabel>
#include    <QStandardItemModel>
#include    <QItemSelectionModel>

#include    "qwintspindelegate.h"
#include    "qwfloatspindelegate.h"
#include    "qwcomboboxdelegate.h"


#define     FixedColumnCount    6       //文件固定6行

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:

//用于状态栏的信息显示
    QLabel  *LabCellPos;    //当前单元格行列号
    QLabel  *LabCellText;   //当前单元格内容

    QWIntSpinDelegate    intSpinDelegate; //整型数
    QWFloatSpinDelegate  floatSpinDelegate; //浮点数
    QWComboBoxDelegate   comboBoxDelegate; //列表选择

    QStandardItemModel  *theModel;//数据模型
    QItemSelectionModel *theSelection;//Item选择模型

    void    resetTable(int aRowCount);  //表格复位，设定行数
    bool    saveDataAsStream(QString& aFileName);//将数据保存为数据流文件
    bool    openDataAsStream(QString& aFileName);//读取数据流文件

    bool    saveBinaryFile(QString& aFileName);//保存为二进制文件
    bool    openBinaryFile(QString& aFileName);//打开二进制文件

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_actOpen_triggered(); //打开文件

    void on_actAppend_triggered(); //添加行

    void on_actInsert_triggered();//插入行

    void on_actDelete_triggered();//删除行

    void on_actSave_triggered();//保存文件

    void on_actAlignCenter_triggered(); //居中对齐

    void on_actFontBold_triggered(bool checked); //字体粗体设置

    void on_actAlignLeft_triggered(); //左对齐

    void on_actAlignRight_triggered(); //右对齐

    void on_actTabReset_triggered(); //表格复位

    void on_actSaveBin_triggered(); //保存为自编码二进制文件

    void on_actOpenBin_triggered(); //打开自编码二进制文件

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
