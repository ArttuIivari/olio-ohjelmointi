#include "form2.h"
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


void MainWindow::on_btnSave_clicked()
{

    fname = ui->textFname->text();
    ui->labelResult->setText("Terve " + fname);
}


void MainWindow::on_btnOpenForm2_clicked()
{
    Form2 *objectForm2 = new Form2(this);
    connect(objectForm2, SIGNAL(lnameIsSet()), this, SLOT(slotLnameShow()));
    objectForm2->setNameFromMainwindow(fname);
    //objectForm2->show();                  //Pystyy käyttämään mainwindowia
    objectForm2->open();                    //.. ja ei pysty openilla.

}

void MainWindow::slotLnameShow()
{
    QString lname = objectForm2->getLname();

}

