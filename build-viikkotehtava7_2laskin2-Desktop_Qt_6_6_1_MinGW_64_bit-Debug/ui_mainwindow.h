/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N1;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *Plus;
    QPushButton *Miinus;
    QPushButton *N4;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N7;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *N0;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *clear;
    QPushButton *enter;
    QPushButton *kerto;
    QPushButton *jako;
    QLabel *label;
    QLabel *label_2;
    QLabel *Tulos;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(100, 120, 80, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(200, 120, 80, 24));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(290, 120, 80, 24));
        Plus = new QPushButton(centralwidget);
        Plus->setObjectName("Plus");
        Plus->setGeometry(QRect(390, 120, 80, 24));
        Miinus = new QPushButton(centralwidget);
        Miinus->setObjectName("Miinus");
        Miinus->setGeometry(QRect(390, 150, 80, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(100, 150, 80, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(200, 150, 80, 24));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(290, 150, 80, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(100, 180, 80, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(200, 180, 80, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(290, 180, 80, 24));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(200, 210, 80, 24));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(100, 70, 113, 24));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(220, 70, 113, 24));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(370, 70, 113, 24));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(100, 210, 80, 24));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(290, 210, 80, 24));
        kerto = new QPushButton(centralwidget);
        kerto->setObjectName("kerto");
        kerto->setGeometry(QRect(390, 180, 80, 24));
        jako = new QPushButton(centralwidget);
        jako->setObjectName("jako");
        jako->setGeometry(QRect(390, 210, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 50, 71, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 50, 91, 16));
        Tulos = new QLabel(centralwidget);
        Tulos->setObjectName("Tulos");
        Tulos->setGeometry(QRect(360, 50, 49, 16));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Miinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        kerto->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        jako->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Numero  1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Numero 2", nullptr));
        Tulos->setText(QCoreApplication::translate("MainWindow", "Tulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
