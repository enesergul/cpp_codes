/********************************************************************************
** Form generated from reading UI file 'widget1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET1_H
#define UI_WIDGET1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget1
{
public:
    QTextBrowser *text3;
    QPushButton *buton;
    QSpinBox *spin1;
    QSpinBox *spin2;

    void setupUi(QWidget *Widget1)
    {
        if (Widget1->objectName().isEmpty())
            Widget1->setObjectName(QString::fromUtf8("Widget1"));
        Widget1->resize(800, 600);
        text3 = new QTextBrowser(Widget1);
        text3->setObjectName(QString::fromUtf8("text3"));
        text3->setGeometry(QRect(400, 100, 161, 131));
        buton = new QPushButton(Widget1);
        buton->setObjectName(QString::fromUtf8("buton"));
        buton->setGeometry(QRect(180, 270, 171, 81));
        spin1 = new QSpinBox(Widget1);
        spin1->setObjectName(QString::fromUtf8("spin1"));
        spin1->setGeometry(QRect(100, 130, 42, 22));
        spin2 = new QSpinBox(Widget1);
        spin2->setObjectName(QString::fromUtf8("spin2"));
        spin2->setGeometry(QRect(250, 130, 42, 22));

        retranslateUi(Widget1);

        QMetaObject::connectSlotsByName(Widget1);
    } // setupUi

    void retranslateUi(QWidget *Widget1)
    {
        Widget1->setWindowTitle(QCoreApplication::translate("Widget1", "Widget1", nullptr));
        buton->setText(QCoreApplication::translate("Widget1", "toplaaaaaa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget1: public Ui_Widget1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET1_H
