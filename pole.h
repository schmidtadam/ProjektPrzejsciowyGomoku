#ifndef POLE_H
#define POLE_H

#include <QMainWindow>

class pole : public QMainWindow
{
    Q_OBJECT
public:
    explicit pole(QWidget *parent = 0);


void initializeGL();
void paintGL();
};

#endif // POLE_H
