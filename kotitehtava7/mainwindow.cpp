#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qtimer=new QTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSwitchPlayer1_clicked()
{

}


void MainWindow::on_btnSwitchPlayer2_clicked()
{

}


void MainWindow::on_btnSetTimer120_clicked()
{

}


void MainWindow::on_btnSetTimer300_clicked()
{

}

