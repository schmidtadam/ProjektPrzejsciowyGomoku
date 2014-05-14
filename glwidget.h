#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <math.h>
#include <QMouseEvent>


 class QtLogo;


class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = 0);

void initializeGL();
void paintGL();
void pole(int r);
void kolo(int rozmiar,int gracz,int wiersz, int kolumna);
void glutPostRedisplay(void);
void mouseMoveEvent(QMouseEvent *event);
void mouseReleaseEvent(QMouseEvent *event);
int kolumna;
int wiersz;
int temp_wiersz;
int temp_kolumna;
int gracz;

// ///////zmienne silnikowe///////
public:
static  int const  LICZBA_kolumn = 15;
static int const  LICZBA_wierszy =15;
int wygrana;
int tab1[ LICZBA_kolumn ][ LICZBA_wierszy];
int Wygrana; //pomocnicza



// ///////metody silnikowe///////
void zerowanie_tablicy(int zero);
void wyswietlanie_tablicy();
bool zapis_do_tablicy(int wiersz,int kolumna,int gracz);
bool sprawdzanie_wygranej(int gracz);
int zero;

};
#endif

// /////////////////////////////////////////DEFINICJE METOD//////////////////////////////////////////////


// /////////////////////////////////////////tworzenie planszy/////////////////////////////////////////////

inline void GLWidget::zerowanie_tablicy(int zero){
for(int i=0;i<LICZBA_wierszy;i++)
  {
    for(int j=0;j<LICZBA_kolumn;j++)
    {
       tab1[i][j]=zero;

    }
 }
}


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


inline void GLWidget::wyswietlanie_tablicy(){


    for(int i=0;i<LICZBA_wierszy;i++)
   {
     for(int j=0;j<LICZBA_kolumn;j++)
     {
       if(tab1[i][j]==1){kolo(LICZBA_wierszy,1,i+1,j+1);};
        if(tab1[i][j]==2){kolo(LICZBA_wierszy,2,i+1,j+1);};
     }

   }
 }


inline bool GLWidget::zapis_do_tablicy(int wiersz,int kolumna,int gracz){
 bool poprawne;
    if(tab1[wiersz-1][kolumna-1]==0)
            { tab1[wiersz-1][kolumna-1]=gracz;
            poprawne=1;
            }
    else{poprawne=0;}
return poprawne;
}


// ///////////////////////////////////////////tworzenie pionków///////////////////////////////////////////////////////////

inline void GLWidget::kolo(int rozmiar,int gracz,int wiersz, int kolumna){
    ;
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
    if( gracz==1){glColor3f(1.0f,0.0f,0.0f);}
    else if( gracz==2){glColor3f(0.0f,1.0f,0.0f);}
    else if( gracz==3){
        glColor3f(0.1f,0.1f,0.1f);
        fRadius=przesuniecie/3;
    }
    glVertex3f(fCenterX, fCenterY, 0.0f);
    for(float fAngle = 0.0f; fAngle <=(2.1f * PI); fAngle += fPrecision)
    {
    float fX = fCenterX + (fRadius* static_cast<float>(sin(fAngle)));
    float fY = fCenterY + (fRadius* static_cast<float>(cos(fAngle)));


   // glColor3f(1.0,0.1,0.1);
    glVertex3f(fX, fY, 0.0f);
    }
    glEnd();

}

// //////////////////////////////////////////pobsługa myszki////////////////////////////////////////////////////////////

inline void GLWidget::mouseMoveEvent(QMouseEvent *event)
{


    int zx = event->pos().x();
    int zy = event->pos().y();
    temp_wiersz=zy/33+1;
    temp_kolumna=zx/33+1;
    updateGL();

}

inline void GLWidget::mouseReleaseEvent(QMouseEvent *event)
{
  int dx = event->pos().x();
  int dy = event->pos().y();
  if(dx>0 && dy>0 && dx<500 && dy<500){
            wiersz=dy/33+1;
            kolumna=dx/33+1;

            temp_wiersz=dy/33+1;
            temp_kolumna=dx/33+1;
  }
 if(zapis_do_tablicy(wiersz,kolumna,gracz))
      {
         if(gracz==1){gracz=2;}
         else if(gracz==2){gracz=1;};
      }
updateGL();
}


// ////////////////////////////////////////////Funkcja sprawdzajaca///////////////////////////////////////////////////////////////////////////////////////

inline bool GLWidget::sprawdzanie_wygranej(int gracz){

    //sprawdzanie wierszy
     int wynik=0;

     for(int wiersz=0;wiersz<LICZBA_wierszy;wiersz++){
        wynik=0;
         for(int i=0;i<LICZBA_kolumn;i++){
            if(tab1[wiersz][i]==gracz){
                wynik=wynik+1;

                if(tab1[wiersz][i+1]==0&&i<LICZBA_kolumn&&wynik<wygrana){
                    wynik=0;
                 }
                 if (wynik==wygrana){
                    return 1;
                 }
                }
          }
     }
     // /////////////////////////////////////////////////
        //sprawdzanie kolumn

    wynik=0;
     for(int kolumna=0;kolumna<LICZBA_kolumn;kolumna++){
        wynik=0;
         for(int j=0;j<LICZBA_kolumn;j++){
            if(tab1[j][kolumna]==gracz){
                wynik=wynik+1;

                if(tab1[j+1][kolumna]==0&&j<LICZBA_wierszy&&wynik<wygrana){
                    wynik=0;
                 }
                 if (wynik==wygrana){
                    return 1;
                 }
            }
          }
     }
// ///////////////////////////////////////////////////////

        //sprawdzanie skosu takiego->"\"


    for(int a=0;a<LICZBA_kolumn;a++){
            wynik=0;
            for(int i=0;i<LICZBA_kolumn-a;i++){

            if(tab1[a+i][i]==gracz){wynik =wynik+1;}
            else{wynik=0;}

                if (wynik==wygrana){
                    return 1;
                 }


            }

    }


    for(int a=0;a<LICZBA_kolumn;a++){
        wynik=0;
            for(int i=0;i<LICZBA_kolumn-a;i++){


            if(tab1[i][a+i]==gracz){wynik =wynik+1;}
            else{wynik=0;}

                if (wynik==wygrana){
                    return 1;
                 }
            }

    }

    // ////////////////////////////////////////////////////
    //sprawdzanie skosu takiego->"/"
        wynik=0;

    for(int a=0;a<LICZBA_kolumn;a++){
        wynik=0;
            for(int i=0;i<a+1;i++){
                //cout<<tab1[a-i][i];

                if(tab1[a-i][i]==gracz){wynik =wynik+1;}
            else{wynik=0;}

                if (wynik==wygrana){
                                        return 1;
                 }

            }

    }



    for(int a=0;a<LICZBA_kolumn;a++){
        wynik=0;
            for(int i=0;i<LICZBA_kolumn-a;i++){
                //cout<<tab1[LICZBA_kolumn-1-i][a+i];

                if(tab1[LICZBA_kolumn-1-i][a+i]==gracz){wynik =wynik+1;}
            else{wynik=0;}

                if (wynik==wygrana){
                    return 1;
                 }

            }
    }

// ////////////////////////////////////////////////////////////////////
     return 0;
}
