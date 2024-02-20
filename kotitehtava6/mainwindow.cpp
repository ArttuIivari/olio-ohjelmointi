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

void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    int digitvalue = button->text().toInt();
    QString name = QString::number(digitvalue);
    qDebug() << "Button name: " << name;
    switch(state){
    case 0:
        ui->lineEditNumber1->setText(number1 + name);
        number1 = ui->lineEditNumber1->text();
        break;
    case 1:
        ui->lineEditNumber2->setText(number2 + name);
        number2 = ui->lineEditNumber2->text();
        break;
    }

}
void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "button name " << name;
    if(name=="btnClear"){
        resetLineEdits();
    }
    if(name=="btnEnter"){
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
        qDebug() << "num1 " << n1 << "num2 " << n2;
        qDebug() << operand;
        switch(operand){
        case 0:
            result=n1+n2;
            break;
        case 1:
            result=n1-n2;
            break;
        case 2:
            result=n1*n2;
            break;
        case 3:
            result=n1/n2;
            break;
        default:
            qDebug() << "Dafuq";
            return;
        }
        ui->lineEditResult->setText(QString::number(result));
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "button name: " << name;
    if(name=="btnPlus")
        operand = 0;
    else if(name=="btnMinus")
        operand = 1;
    else if(name=="btnMultiply")
        operand = 2;
    else if(name=="btnDiv")
        operand = 3;
    else operand = 99;
    state = 1;
}

void MainWindow::resetLineEdits()
{
    ui->lineEditNumber1->setText("");
    ui->lineEditNumber2->setText("");
    ui->lineEditResult->setText("");
    number1=0;
    number2=0;
    state=0;
    operand=99;
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


void MainWindow::on_btnPlus_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnMinus_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnMultiply_clicked()
{
    addSubMulDivClickHandler();
}

void MainWindow::on_btnDiv_clicked()
{
    addSubMulDivClickHandler();
}

