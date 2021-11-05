#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool x=false;
    int i=0;
    int tryConnect=0;

public slots:
      void onReadyRead();
      void onpushButtonclicked();

protected:
    bool isSignalConnected();

private:
    Ui::MainWindow *ui;
    QTcpSocket socket;

};
#endif // MAINWINDOW_H
