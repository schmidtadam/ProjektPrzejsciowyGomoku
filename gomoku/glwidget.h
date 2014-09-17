#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <math.h>
#include <QMouseEvent>
#include <mojdll.h>
#include <mojdll2.h>


class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = 0);

void initializeGL();
void paintGL();
void pole();
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
protected:
static  int const  LICZBA_kolumn = 15;
static int const  LICZBA_wierszy =15;
int wygrana;
int tab1[ LICZBA_kolumn ][ LICZBA_wierszy];

int Wygrana; //pomocnicza
void zmiana_gracza();

void wypisanie_tablicy();
int **tablica;
// ///////metody silnikowe///////
void zerowanie_tablicy(int zero);
void wyswietlanie_tablicy();
bool zapis_do_tablicy(int wiersz,int kolumna,int gracz);
bool sprawdzanie_wygranej();
int zero;
Mojdll losowa;
Mojdll2 strategia2;


};

#endif








