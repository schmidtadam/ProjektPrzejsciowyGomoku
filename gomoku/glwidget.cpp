#include "glwidget.h"
#include <GL/glu.h>
#include <math.h>


GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
}

void GLWidget::initializeGL()
{

Wygrana=0;//zmienna pomocnicza
gracz =1;
 zerowanie_tablicy(0);
glClearColor(1,1,1,1);
glViewport(0,0,500,500);
}

void GLWidget::zerowanie_tablicy(int zero){
for(int i=0;i<LICZBA_wierszy;i++)
  {
    for(int j=0;j<LICZBA_kolumn;j++)
    {
       tab1[i][j]=zero;

    }
 }
}




void GLWidget::wypisanie_tablicy()
{
      for(int i=0;i<15;i++)
        for(int j=0;j<15;j++)
          strategia2.tablica_testowa[i][j]=tab1[i][j];

}

void GLWidget::zmiana_gracza()
{

    if(gracz==1)

    if(zapis_do_tablicy(wiersz,kolumna,gracz))
         {

           gracz=2;


            }
if(gracz==2)
    {

wypisanie_tablicy();
    zapis_do_tablicy(strategia2.wiersz(),strategia2.kolumna(),gracz);// //////TUTAJ WSTAWIAMY WARTOSCI Z DLL
        gracz=1;

    }
}

// /////////////////////////////////////////tworzenie planszy/////////////////////////////////////////////
    void GLWidget::pole()
{

   glClear(GL_COLOR_BUFFER_BIT);
   glLineWidth(2);
   int rozmiar=15;
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

}


    void GLWidget::wyswietlanie_tablicy()
{
    for(int i=0;i<LICZBA_wierszy;i++)
   {
     for(int j=0;j<LICZBA_kolumn;j++)
     {
       if(tab1[i][j]==1){kolo(LICZBA_wierszy,1,i+1,j+1);};
        if(tab1[i][j]==2){kolo(LICZBA_wierszy,2,i+1,j+1);};
     }

  }
 }

    bool GLWidget::zapis_do_tablicy(int wiersz,int kolumna,int gracz)
{
 bool poprawne;
    if(tab1[wiersz-1][kolumna-1]==0)
            { tab1[wiersz-1][kolumna-1]=gracz;
            poprawne=1;
            }
    else{poprawne=0;}
return poprawne;
}

// ///////////////////////////////////////////tworzenie pionków///////////////////////////////////////////////////////////

    void GLWidget::kolo(int rozmiar,int gracz,int wiersz, int kolumna)
{
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



    glVertex3f(fX, fY, 0.0f);
    }
    glEnd();

}

// //////////////////////////////////////////obsługa myszki////////////////////////////////////////////////////////////

    void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
    int zx = event->pos().x();
    int zy = event->pos().y();
    temp_wiersz=(zy/33)+1;
    temp_kolumna=(zx/33)+1;
    updateGL();

}

    void GLWidget::mouseReleaseEvent(QMouseEvent *event)
{
           int dx = event->pos().x();
  int dy = event->pos().y();
  if(dx>0 && dy>0 && dx<500 && dy<500)
  {
            wiersz=dy/33+1;
            kolumna=dx/33+1;

            temp_wiersz=dy/33+1;
            temp_kolumna=dx/33+1;

  }
zmiana_gracza();
updateGL();

}


// ////////////////////////////////////////////Funkcja sprawdzajaca///////////////////////////////////////////////////////////////////////////////////////

    bool GLWidget::sprawdzanie_wygranej(){

     int w,k,c,i;
// Sprawdzanie w poziomie

 for(w = 0; w < 15; w++)
 {
  c = 1;
 for(k = 1; k < 15; k++)
 {
 if(tab1[w][k-1] == tab1[w][k]) c++;
 else c = 1;

 if((c == 5) && tab1[w][k])
 return true;
 }
 }

//sprawdzanie w pionie

 for(k = 0; k < 15; k++)
 {
 c = 1;
 for(w = 1; w < 15; w++)
 {
 if(tab1[w-1][k] == tab1[w][k])
     c++;
     else c = 1;
 if((c == 5) && tab1[w][k])
 return true;
        }
  }

//sprawdzanie skosu takiego->"\"

 for(k = 0; k < 11; k++)
 for(w = 0; w < 11; w++)
 {
 c = 1;
 for(i = 1; i < 5; i++)
 if(tab1[w+i-1][k+i-1] == tab1[w+i][k+i]) c++;
 else c = 1;
 if((c == 5) && tab1[w][k])
return true;
 }
//sprawdzanie skosu takiego->"/"
for(k = 4; k < 15; k++)
for(w = 0; w < 11; w++)
{
c = 1;
for(i = 1; i < 5; i++)
if(tab1[w+i-1][k-i+1] == tab1[w+i][k-i]) c++;
else c = 1;
if((c == 5) && tab1[w][k])
return true;
}
return 0;
}



// //////////////////////////////////////// RYSOWANIE // /////////////////////////////////////////////////////////////////////
    void GLWidget::paintGL()
{
pole();
wyswietlanie_tablicy();
kolo(15,3,temp_wiersz,temp_kolumna);


if(Wygrana==0)
    {
        if(sprawdzanie_wygranej())

             Wygrana=1;
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










