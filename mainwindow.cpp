#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pole->hide();                   //tu jest warning

}

MainWindow::~MainWindow()
{
    delete ui;
}
// ////////////////////////////////////////////

void MainWindow::on_pushButton_2_clicked()
{
    ui->pole->show();
}

