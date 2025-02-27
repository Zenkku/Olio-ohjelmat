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
    if(timer){
        timer->stop();
        delete timer;
            timer = nullptr;
    }

    delete ui;
}

void MainWindow::on_start_clicked()
{

    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    ui->label->setText("Game ongoin");


    //ui:n alustukset
    ui->progressBar->setRange(0,gameTime);
    ui->progressBar_2->setRange(0,gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);

    //käynnistetään ajastin
    timer = new QTimer(this);
    connect(timer,    // lähettävä olio
            QTimer::timeout,    // signaali
            this,           //vastaanotto olio
            &MainWindow::updateProgressBar);   // slotti

    timer->setInterval(1000); // 1000 = 1s
    timer->start();


}


void MainWindow::on_stop_clicked()
{
    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
    ui->label->setText("New game via start button");
    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }


}

void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1 ){
        p1Time = p1Time-1;
        ui->progressBar->setValue(p1Time);
        if(p1Time==0){
            ui->label->setText("Player 2 won");
            if(timer){
                timer->stop();
                delete timer;
                timer = nullptr;
            }
        }

    }else if(currentPlayer == 2){
        p2Time = p2Time-1;
        ui->progressBar_2->setValue(p2Time);
        if(p2Time==0){
            ui->label->setText("Player 1 won");
            if(timer){
                timer->stop();
                delete timer;
                timer = nullptr;
            }
        }
    }
}


void MainWindow::on_swich1_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_swich2_clicked()
{
    currentPlayer = 1;
}



void MainWindow::on_sec_clicked()
{
    gameTime = 120;
    ui->label->setText("ready to play");


}


void MainWindow::on_min_clicked()
{
    gameTime = 300;
    ui->label->setText("ready to play");


}


void MainWindow::on_label_linkActivated(const QString &link)
{

}

