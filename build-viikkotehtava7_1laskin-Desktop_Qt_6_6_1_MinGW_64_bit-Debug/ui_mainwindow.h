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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *LisaaNappi;
    QPushButton *ResetNappi;
    QLineEdit *NumeroNaytto;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(394, 196);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        LisaaNappi = new QPushButton(centralwidget);
        LisaaNappi->setObjectName("LisaaNappi");
        LisaaNappi->setGeometry(QRect(60, 40, 80, 24));
        ResetNappi = new QPushButton(centralwidget);
        ResetNappi->setObjectName("ResetNappi");
        ResetNappi->setGeometry(QRect(60, 110, 80, 24));
        NumeroNaytto = new QLineEdit(centralwidget);
        NumeroNaytto->setObjectName("NumeroNaytto");
        NumeroNaytto->setGeometry(QRect(170, 70, 81, 24));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LisaaNappi->setText(QCoreApplication::translate("MainWindow", "Lisaa", nullptr));
        ResetNappi->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        NumeroNaytto->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
