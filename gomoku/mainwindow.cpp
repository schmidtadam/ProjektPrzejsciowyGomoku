#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <glwidget.h>
#include "zmienneGlobalne.h"






MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);



   }

MainWindow::~MainWindow()
{
    delete ui;
}
// ////////////////////////////////////////////




void MainWindow::on_b1_clicked()
{

    zmienna =  1;
    ui->tekst->setText("Strategia nr. 3");



}

void MainWindow::on_b2_clicked()
{

    zmienna=2;
    ui->tekst->setText("Strategia nr. 1");
    }



void MainWindow::on_b3_clicked()
{

    zmienna=3;
    ui->tekst->setText("Strategia nr. 2");
    }
