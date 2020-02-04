#ifndef DIALOG_H
#define DIALOG_H

#include    <QDialog>
#include    <QHostInfo>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void lookedUpHostInfo(const QHostInfo &host);

//===========================
    void on_btnGetHostInfo_clicked();

    void on_btnDetail_clicked();

    void on_btnLookup_clicked();

    void on_btnALLInterface_clicked();

    void on_btnClear_clicked();

private:
    Ui::Dialog *ui;

    QString  protocolName(QAbstractSocket::NetworkLayerProtocol protocol);
};

#endif // DIALOG_H
