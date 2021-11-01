#ifndef WIDGET1_H
#define WIDGET1_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget1; }
QT_END_NAMESPACE

class Widget1 : public QWidget
{
    Q_OBJECT

public:
    Widget1(QWidget *parent = nullptr);
    ~Widget1();

private slots:


void on_buton_clicked();


void on_pushButton_clicked();

void on_pushButton_2_clicked();

void on_pushButton_3_clicked();

private:
    Ui::Widget1 *ui;
};
#endif // WIDGET1_H
