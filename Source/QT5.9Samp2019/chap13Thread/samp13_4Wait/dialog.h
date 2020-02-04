#ifndef DIALOG_H
#define DIALOG_H

#include    <QDialog>
#include    <QTimer>

#include    "qmythread.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

private:
    QThreadProducer   threadProducer;
    QThreadConsumer   threadConsumer;
protected:
    void    closeEvent(QCloseEvent *event);
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void    onthreadA_started();
    void    onthreadA_finished();

    void    onthreadB_started();
    void    onthreadB_finished();

    void    onthreadB_newValue(int seq, int diceValue);

    void on_btnClear_clicked();

    void on_btnStopThread_clicked();

    void on_btnStartThread_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
