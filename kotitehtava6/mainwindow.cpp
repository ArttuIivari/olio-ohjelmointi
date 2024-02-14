#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_count_clicked()
{
    p = ui->textNumber->text();

    value = p.toInt();
    value++;
    ui->textNumber->setText(QString::number(value));
}


void MainWindow::on_btn_reset_clicked()
{
    ui->textNumber->setText("0");
}

