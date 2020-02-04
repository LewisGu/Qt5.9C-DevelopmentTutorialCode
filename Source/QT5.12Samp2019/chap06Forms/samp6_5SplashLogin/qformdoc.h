#ifndef QFORMDOC_H
#define QFORMDOC_H

#include <QWidget>

namespace Ui {
class QFormDoc;
}

class QFormDoc : public QWidget
{
    Q_OBJECT

private:
    QString mCurrentFile; //当前文件

public:
    explicit QFormDoc(QWidget *parent = 0);
    ~QFormDoc();

    void    loadFromFile(QString& aFileName); //打开文件
    QString currentFileName();//返回当前文件名

public:
    void    setEditFont(); //设置字体
    void    textCut(); //Cut
    void    textCopy(); //copy
    void    textPaste(); //paste

signals:
    void    fileOpended(QString& aFileName); //打开文件时释放的信号

private:
    Ui::QFormDoc *ui;

};

#endif // QFORMDOC_H
