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

/*
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
*/
void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    int digitvalue = button->text().toInt();
    QString name = QString::number(digitvalue);
    qDebug() << "Button name: " << digitvalue;
    /*
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "button name: " << name;
    number1 = number1 + name.last(1);
    */

    if(state==0){
        qDebug() << " fdfdsfadsf";
        QString text = ui->lineEditNumber1->text();
        ui->lineEditNumber1->setText(text + name);
    }


}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "button name " << name;
    if(name=="btnClear"){

        ui->lineEditNumber1->setText("");
        ui->lineEditNumber2->setText("");
        number1=0;
        number2=0;
    }

}



void MainWindow::on_btn1_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btn2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btn3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btn4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btn5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btn6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btn7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btn8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btn9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btn0_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnClear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_btnEnter_clicked()
{
    clearAndEnterClickHandler();
}

