#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <string>
int pozX,pozY;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //  ui->pole->hide();
    qApp->installEventFilter(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->pole->show();
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{

    if (event->type() == QEvent::MouseMove)
    {
      QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
      statusBar()->showMessage(QString("Mouse move (%1,%2)").arg(mouseEvent->pos().x()).arg(mouseEvent->pos().y()));
    }
    if (event->type() == QEvent::MouseButtonDblClick)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        pozX=mouseEvent->pos().x();
        pozY=mouseEvent->pos().y();

        QString labeltext1;

        labeltext1= QString("Wartosc X wynosi ( %1 )").arg(mouseEvent->pos().x());
        QString labeltext2;

        labeltext2 = QString("Wartosc Y wynosi ( %1 )").arg(mouseEvent->pos().y());

        ui->label->setText(labeltext1);
        ui->label_2->setText(labeltext2);


    }


}





