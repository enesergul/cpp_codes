#include <QCoreApplication>

#include <QChar>
#include <QtDebug>

/*
QChar(uchar ch)
QChar(char ch)
QChar(wchar_t ch)
QChar(char16_t ch)
QChar(QLatin1Char ch)
QChar(QChar::SpecialCharacter ch)
QChar(int code)
QChar(uint code)
QChar(short code)
QChar(uchar cell, uchar row)
QChar(ushort code)
QChar() */

int main()
{
{

        QChar ch1('a');
        qDebug() << "ch1 " << ch1;


        QChar ch2('7');
        qDebug() << "ch2 " << ch2;

        QChar ch3(111);
        qDebug() << "ch3 " << ch3;


        qDebug() << " char null :" << QChar::Null;






}


    return 0;
}
