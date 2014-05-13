#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <math.h>
#include <QMouseEvent>




class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = 0);

void initializeGL();
void paintGL();
void pole(int r);
void kolo(int rozmiar,int wiersz, int kolumna);

void mousePressEvent(QMouseEvent *event);
int kolumna;
int wiersz;

private:

   QPoint lastPos;

};
#endif

// /////////////////////////////////////////DEFINICJE METOD//////////////////////////////////////////////


// /////////////////////////////////////////tworzenie planszy//////////////////////////////////////////////

inline void GLWidget::pole(int r){


   glClear(GL_COLOR_BUFFER_BIT);
   glLineWidth(2);
   int rozmiar=r;//TU ZMIENIAMY ROZMIAR GRY
   float przesuniecie=2000000/rozmiar;
   przesuniecie=przesuniecie*0.000001;
   float poczatek_x =-1;
   float poczatek_y=-1;

 for(int j =0;j<rozmiar;j++)
 {
           for(int i =0;i<rozmiar;i++)
           {

               glBegin(GL_LINE_LOOP);
                             {
                             glColor3f(0,0,0);

                                 glVertex2f(poczatek_x+j*przesuniecie       ,poczatek_y+i*przesuniecie);    //1
                                 glVertex2f(poczatek_x+(j+1)*przesuniecie   ,poczatek_y+i*przesuniecie);    //2
                                 glVertex2f(poczatek_x+(j+1)*przesuniecie   ,poczatek_y+(i+1)*przesuniecie);//3
                                 glVertex2f(poczatek_x+j*przesuniecie       ,poczatek_y+(i+1)*przesuniecie);//4
                              }
                             glEnd();


             }

 }
 /*ramka tabelki zbędny relikt
   glBegin(GL_LINE_LOOP);
       glColor3f(0,0,0);

           glVertex2f(-1,-1);
           glVertex2f(-1,1);
           glVertex2f(1,1);//3
           glVertex2f(1,-1);//4

       glEnd();
}*/
}


// ///////////////////////////////////////////tworzenie pionków///////////////////////////////////////////////////////////

inline void GLWidget::kolo(int rozmiar,int wiersz, int kolumna){

    wiersz=rozmiar-wiersz+1;
    float PI=3.1459;
    float przesuniecie=2000000/rozmiar;
    przesuniecie=przesuniecie*0.000001;     // przesuniecie koła w tabelce
    float poczatek_x =-1+przesuniecie/2;    // pierwsze kolo jest ustawiane w innym miejscu niz poczatek tabeli stad to przesuniecie
    float poczatek_y=-1+przesuniecie/2;

    float fRadius = przesuniecie/2;
    float fPrecision = 0.05f;
    float fCenterX = poczatek_x+(kolumna-1)*(przesuniecie);
    float fCenterY = poczatek_y+(wiersz-1)*(przesuniecie);

    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(fCenterX, fCenterY, 0.0f);
    for(float fAngle = 0.0f; fAngle <=(2.1f * PI); fAngle += fPrecision)
    {
    float fX = fCenterX + (fRadius* static_cast<float>(sin(fAngle)));
    float fY = fCenterY + (fRadius* static_cast<float>(cos(fAngle)));


    glColor3f(1.0,0.1,0.1);
    glVertex3f(fX, fY, 0.0f);
    }
    glEnd();
}

// //////////////////////////////////////////proba wlozenia myszki do QGLWidget////////////////////////////////////////////////////////////

inline void GLWidget::mousePressEvent(QMouseEvent *event)
{
    lastPos = event->pos();
short int x=lastPos.x();
short int y=lastPos.y();
    wiersz=10;
    kolumna=5;
    updateGL();

}


