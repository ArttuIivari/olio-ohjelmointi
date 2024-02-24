#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();

private slots:
    void on_btnSwitchPlayer1_clicked();

    void on_btnSwitchPlayer2_clicked();

    void on_btnSetTimer120_clicked();

    void on_btnSetTimer300_clicked();

    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void updateProgressBar();
private:
    Ui::MainWindow *ui;
    QTimer *qtimer;

    short gameTime = 0;
    short player1Time;
    short player2Time;
    short currentPlayer = 3;


    void setGameInfoText(QString,short);


};
#endif // MAINWINDOW_H
