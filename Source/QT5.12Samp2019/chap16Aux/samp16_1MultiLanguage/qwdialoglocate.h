#ifndef QWDIALOGLOCATE_H
#define QWDIALOGLOCATE_H

#include <QDialog>

namespace Ui {
class QWDialogLocate;
}

class QWDialogLocate : public QDialog
{
    Q_OBJECT

private:
    void closeEvent(QCloseEvent *event);
    void showEvent(QShowEvent *event);

public:
    explicit QWDialogLocate(QWidget *parent = 0);
    ~QWDialogLocate();

    void    setSpinRange(int rowCount, int colCount); //设置最大值,用于初始化

private slots:
    void on_btnSetText_clicked();


public slots:
    void    setSpinValue(int rowNo, int colNo);//响应主窗口信号，设置spinBox的值

signals:
    void    changeCellText(int row, int column, QString &text); //释放信号，定位单元格，并设置文字
    void    changeActionEnable(bool en); //是否信号，改变action的enable

private:
    Ui::QWDialogLocate *ui;
};

#endif // QWDIALOGLOCATE_H
