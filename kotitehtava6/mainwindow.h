#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_count_clicked();

    void on_btn_reset_clicked();

private:
    Ui::MainWindow *ui;
    int value = 0;
    QString p;
};
#endif // MAINWINDOW_H
