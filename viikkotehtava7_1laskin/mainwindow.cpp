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

void MainWindow::on_LisaaNappi_clicked()
{
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


}


void MainWindow::on_ResetNappi_clicked()
{
  ui->NumeroNaytto->setText("0");
  qDebug() << "Numero nollattu" << 0;

}

