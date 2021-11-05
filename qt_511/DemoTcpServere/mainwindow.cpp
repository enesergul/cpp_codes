#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string.h>
#include <QThread>
#include <QTimer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),server(this)
{
    ui->setupUi(this);
    server.listen(QHostAddress::Any,9999);  // Slota baglandi.
    connect(&server,SIGNAL(newConnection()),this,SLOT(onNewConnection()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::onNewConnection()
{
    qDebug() << "onNEwConnection";
    QTcpSocket *clientSocket=server.nextPendingConnection();
//ready read
    connect(clientSocket,SIGNAL(readyRead()),this,SLOT(onReadyRead()));
//state change
     connect(clientSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(onStateChanged(QAbstractSocket::SocketState)));
    sockets.push_back(clientSocket);

}


void MainWindow::onStateChanged(QAbstractSocket::SocketState state)
{

        qDebug() << "onStateChanged";
    if(state == QAbstractSocket::UnconnectedState){
     QTcpSocket*s=static_cast<QTcpSocket*>(QObject::sender());
     sockets.removeOne(s);

    }

}


void MainWindow::onReadyRead()
{
    qDebug() << "onReadyRead";
    QTcpSocket* s=static_cast<QTcpSocket*>(QObject::sender());
    QByteArray data= s->readAll();
       ui->textEdit->append(data);






  /*  for(QTcpSocket* socket : sockets){
        if(socket!=s){
        socket->write(data);
        }}*/
mesaj=data;
            for(int i=0;i<100;i++){
              if(mesaj[i]=='s' && mesaj[i+1]=='a'){
                ui->textEdit->append("SERVER: as hg ");
                 qDebug() << " SERVER: as hg " ;
                }}

            for(int i=0;i<100;i++){
              if(mesaj[i]=='n' && mesaj[i+1]=='a'&& mesaj[i+2]=='b'&& mesaj[i+3]=='e'&& mesaj[i+4]=='r'){
                  qDebug() << " SERVER: iyi senden naber " ;
                  ui->textEdit->append("SERVER: iyi senden naber ");
                }}

            for(int i=0;i<100;i++){
              if(mesaj[i]=='b' && mesaj[i+1]=='y'&& mesaj[i+2]=='e'){
                  qDebug() << "SERVER: gorusuruz " ;
                  ui->textEdit->append("SERVER: gorusuruz ");
                  QThread::sleep(1);
                  x=true;
                }



            }









}
