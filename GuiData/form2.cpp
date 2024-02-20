#include "form2.h"
#include "mainwindow.h"
#include "ui_form2.h"

Form2::Form2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
}

Form2::~Form2()
{
    delete ui;
}

void Form2::setNameFromMainwindow(const QString &newNameFromMainwindow)
{
    nameFromMainwindow = newNameFromMainwindow;
    ui-labelFname->setText(newNameFromMainwindow);
}


void Form2::on_btnSave_clicked()
{
    lname=ui->textLname->text();
    emit lnameIsSet();
    qDebug()<<lname;


}

QString Form2::getLname() const
{
    return lname;
}

