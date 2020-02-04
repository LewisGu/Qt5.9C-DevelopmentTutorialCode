#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    bool    openTextByIODevice(const QString& aFileName);
    bool    saveTextByIODevice(const QString& aFileName);

    bool    openTextByStream(const QString& aFileName);
    bool    saveTextByStream(const QString& aFileName);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actOpen_IODevice_triggered();

    void on_actOpen_TextStream_triggered();

    void on_actSave_IODevice_triggered();

    void on_actSave_TextStream_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
