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
    ui->tekst->setText("Strategia nr. 1");
    ui->lcdNumber->display(zmienna);


}

void MainWindow::on_b2_clicked()
{

    zmienna=2;
    ui->tekst->setText("Strategia nr. 2");
     ui->lcdNumber->display(zmienna);
}
