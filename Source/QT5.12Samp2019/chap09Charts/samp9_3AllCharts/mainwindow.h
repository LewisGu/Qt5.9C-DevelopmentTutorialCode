#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include    <QStandardItemModel>
#include    <QItemSelectionModel>

#include    <QtCharts>  //必须这么设置
QT_CHARTS_USE_NAMESPACE

#define     fixedColumnCount   5    //数据模型的列数
#define     iniDataRowCount    40   //学生个数

#define     colNoName       0   //姓名的列编号
#define     colNoMath       1   //数学的列编号
#define     colNoChinese    2   //语文的列编号
#define     colNoEnglish    3   //英语的列编号
#define     colNoAverage    4   //平均分的列编号


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QStandardItemModel  *theModel;//数据模型

    void    iniData();//初始化数据
    void    surveyData();//统计数据

    void    iniBarChart(); //柱状图初始化
    void    buildBarChart();//构建柱状图

    void    iniPiewChart(); //饼图初始化
    void    buildPieChart(); //构建饼图

    void    iniStackedBar(); //堆积图初始化
    void    buildStackedBar(); //构建堆积图

    void    iniPercentBar(); //初始化
    void    buildPercentBar(); //构建图表

    void    iniScatterChart(); //初始化
    void    buildScatterChart(); //构建图表

private slots:
//三个分数列的数据发生变化，重新计算平均分
    void on_itemChanged(QStandardItem *item);

    void on_PieSliceHighlight(bool show);

    void on_chartBarLegendMarkerClicked();
///////

    void on_actTongJi_triggered();

    void on_actGenData_triggered();

    void on_btnBuildBarChart_clicked();

    void on_btnDrawPieChart_clicked();

    void on_cBoxCourse_currentIndexChanged(int index);

    void on_spinHoleSize_valueChanged(double arg1);

    void on_spinPieSize_valueChanged(double arg1);

    void on_btnBuildStackedBar_clicked();

    void on_btnPercentBar_clicked();

    void on_btnScatter_clicked();

    void on_cBoxTheme_currentIndexChanged(int index);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
