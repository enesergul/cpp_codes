#include "widget1.h"
#include "ui_widget1.h"
#include <qstring.h>
#include <QVariant>
#include <QDebug>





Widget1::Widget1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget1)
{
    ui->setupUi(this);
}

Widget1::~Widget1()
{
    delete ui;
}







void Widget1::on_buton_clicked()
{


    double result =0;

    result=ui->spin1->value()+ui->spin2->value();
    qDebug()<<result;
    ui->text3->setText(QString::number(result));



}


void Widget1::on_pushButton_clicked()
{
    double result =0;

    result=ui->spin1->value()-ui->spin2->value();
    qDebug()<<result;
    ui->text3->setText(QString::number(result));


}


void Widget1::on_pushButton_2_clicked()
{
    double result =0;

    result=ui->spin1->value()*ui->spin2->value();
    qDebug()<<result;
    ui->text3->setText(QString::number(result));




}


void Widget1::on_pushButton_3_clicked()
{
    double result =0;

    result=ui->spin1->value()/ui->spin2->value();
    qDebug()<<result;
    ui->text3->setText(QString::number(result));


}

