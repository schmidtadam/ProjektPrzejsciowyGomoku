#include "glwidget.h"
#include <GL/glu.h>
#include <math.h>
#define PI 3.14159f

GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
}

void GLWidget::initializeGL()
{gracz=1;

    Wygrana=0;  //zmienna pomocnicza dotycząca ogólnej wygranej

    // /////////////////////////////
    wygrana=5;  //ilosc pionkoe potrzebnych do wygranej
    // /////////////////////////////



 zerowanie_tablicy(0);
 glClearColor(1,1,1,1);
glViewport(0,0,500,500);

}




void GLWidget::paintGL()
{

int rozmiar=15;

pole(rozmiar);
wyswietlanie_tablicy();
kolo(rozmiar,3,temp_wiersz,temp_kolumna);

// ////////////////////////////////////////
if(Wygrana==0)
    {
        if(sprawdzanie_wygranej(1))
            {
             Wygrana=1;
            }
         else  if(sprawdzanie_wygranej(2))
            {
             Wygrana=1;
            }

    }
else if(Wygrana==1)
        {
           zerowanie_tablicy(gracz);
           Wygrana=3;
           wyswietlanie_tablicy();
        }
else if(Wygrana==3)
        {
            zerowanie_tablicy(0);
            wyswietlanie_tablicy();
            Wygrana=0;
        }

}









