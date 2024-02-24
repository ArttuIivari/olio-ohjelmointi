#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qtimer=new QTimer();
    connect(qtimer, SIGNAL(timeout()), this, SLOT(updateProgressBar()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete qtimer;
    qtimer = nullptr;
}

void MainWindow::updateProgressBar()
{

    if(currentPlayer==1){
        player1Time-=1;
    }
    if(currentPlayer==2){
        player2Time-=1;
    }
    qDebug() << player2Time;

    ui->progressBarPlayer1->setValue(player1Time);
    ui->progressBarPlayer2->setValue(player2Time);
    if(player1Time <= 0){
        setGameInfoText("Player 2 wins!",28);
        qtimer->stop();
    }
    if(player2Time <= 0){
        setGameInfoText("Player 1 wins!",28);
        qtimer->stop();
    }

}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    QString luku = QString::number(fontSize);
    ui->labelText->setStyleSheet("font: "+luku+"pt;");
    ui->labelText->setText(text);
}

void MainWindow::on_btnSwitchPlayer1_clicked()
{
    if(qtimer->isActive()==1){
    setGameInfoText("Player 2's turn",20);
    currentPlayer=2;
    }
}


void MainWindow::on_btnSwitchPlayer2_clicked()
{
    if(qtimer->isActive()==1){
    setGameInfoText("Player 1's turn",20);
    currentPlayer=1;
    }
}


void MainWindow::on_btnSetTimer120_clicked()
{
    if(qtimer->isActive()==0){
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;
    setGameInfoText("120 sec selected",18);
    }
}


void MainWindow::on_btnSetTimer300_clicked()
{
    if(qtimer->isActive()==0){
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;
    setGameInfoText("5 min selected",18);
    }
}


void MainWindow::on_btnStart_clicked()
{
    if(qtimer->isActive()==0)
        qtimer->start(1000);
    setGameInfoText("Player 1's turn",20);
    ui->progressBarPlayer1->setMaximum(gameTime);
    ui->progressBarPlayer2->setMaximum(gameTime);
    currentPlayer=1;
}


void MainWindow::on_btnStop_clicked()
{
    if(qtimer->isActive()==1){
    qtimer->stop();
    setGameInfoText("New game via start button",18);
    currentPlayer=3;
    gameTime=0;
    }
}



