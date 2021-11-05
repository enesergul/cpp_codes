#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostAddress>
#include <QThread>
#include <QString>
#include <QObject>
#include <QMessageBox>
#include <QKeyEvent>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
     socket(this)



{
    ui->setupUi(this);
    socket.connectToHost(QHostAddress("127.0.0.1"),9999);

    if(socket.waitForConnected())
        this->ui->statusbar->showMessage("Connected to Server");
    else{
        QMessageBox::critical(this,"QTCPClient", QString("The following error occurred: %1.").arg(socket.errorString()));
        exit(EXIT_FAILURE);
    }
    connect(&socket,SIGNAL(readyRead()),this,SLOT(onReadyRead()));
    connect(ui->pushButton,SIGNAL(pressed()),this,SLOT(onpushButtonclicked()));






}



 MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::onReadyRead()
{
    qDebug() << "onReadyRead";
    QByteArray data= socket.readAll();
    qDebug() << data;


    ui->textEdit->append(QString::fromStdString(data.toStdString()));



}


void MainWindow::onpushButtonclicked()
{
    qDebug() << "pushbutton";
    QString text = ui->lineEdit->text();
    QString text2 = ui->lineEdit_2->text();

    ui->textEdit->append(text);
    ui->textEdit->append(text2);
    ui->lineEdit->setText("");
//    ui->lineEdit_2->setText("");

    socket.write(QByteArray::fromStdString(text2.toStdString()) +": " +QByteArray::fromStdString(text.toStdString()) );
//    socket.write(QByteArray::fromStdString(text2.toStdString()) );

}

