#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Plus_clicked()
{
    if(tila == 3){
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1+num2;

        QString resStr = QString::number(result);
        qDebug() << "plus:" << num1 << "+" << num2 << "=" << result;
        ui->result->setText(resStr);

        tila = 1;
    }  else {
        qDebug() << "VIRHE molempia numeroita ei syötetty";
    }



    /*
     // lue teksti elementista
    QString str = ui->NumeroNaytto->text();
    // muuta teksti numeroksi
    int num = str.toInt();
    qDebug() << "Numero=" << num;
    // kasvata numeroa yhdella
    num++;
    //muuta numero takasin tekstisti
    QString uusStr = QString::number(num);
    qDebug() << "kasvatettu numero=" << num;
    // aseta teksti takaisin elementtiin
    ui->NumeroNaytto->setText(uusStr);
    */







}


void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
    qDebug() << "valittunumero:" << n;
}


void MainWindow::on_Miinus_clicked()
{
    if(tila == 3){
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1-num2;

        QString resStr = QString::number(result);
        qDebug() << "plus:" << num1 << "-" << num2 << "=" << result;
        ui->result->setText(resStr);

        tila = 1;
    }  else {
        qDebug() << "VIRHE molempia numeroita ei syötetty";
    }

}


void MainWindow::on_kerto_clicked()
{
    if(tila == 3){
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1*num2;

        QString resStr = QString::number(result);
        qDebug() << "plus:" << num1 << "*" << num2 << "=" << result;
        ui->result->setText(resStr);

        tila = 1;
    }  else {
        qDebug() << "VIRHE molempia numeroita ei syötetty";
    }

}


void MainWindow::on_jako_clicked()
{
    if(tila == 3){
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1/num2;

        QString resStr = QString::number(result);
        qDebug() << "plus:" << num1 << "/" << num2 << "=" << result;
        ui->result->setText(resStr);

        tila = 1;
    }  else {
        qDebug() << "VIRHE molempia numeroita ei syötetty";
    }

}

void MainWindow::numberClickHandler(int n)
{

    QString str = QString::number(n);
    if (tila == 1) {
        ui->num1->setText(str);
    } else if (tila == 2){
       ui->num2->setText(str);
    }
}


void MainWindow::on_enter_clicked()
{
    tila++;
    qDebug() << "valittu numero=";


}

