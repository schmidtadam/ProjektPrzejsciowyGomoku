#include "pole.h"
#include <GL/glu.h>
#include <math.h>
#define PI 3.14159f




pole::pole(QWidget *parent) :
    QMainWindow(parent)
{
}


void GLWidget::initializeGL()
{
    glClearColor(1,1,1,1);

}

void GLWidget::paintGL()
{
    /*wymiary:
     * lewy dolny róg = glVertex2f(-0.99,-0.99);
     * lewy gorny róg =    glVertex2f(-0.99,0.4563);
    * prawy górny róg = glVertex2f(-0.069,0.4563);
    *  prawy dolny róg= glVertex2f(-0.069,-0.99);
    *
*/glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10);
    glLineWidth(2);


// dodałem pomocnicze zmienne bym nie musiał pamietac o tych przecinkowych cyfrach
float przesunieciex=0.0614;
float przesunieciey=0.0969;
float poczatek_tabeli_y=-0.99;
float poczatek_tabeli_x=-0.99;



// budowanie koła  ///////////////////////////
    float fRadius = przesunieciex/2;
    float fPrecision = 0.05f;
    float fCenterX = poczatek_tabeli_x+(przesunieciex/2);
    float fCenterY = poczatek_tabeli_y+(przesunieciey/2);

    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(fCenterX, fCenterY, 0.0f);
    for(float fAngle = 0.0f; fAngle <=(2.1f * PI); fAngle += fPrecision)
    {
    float fX = fCenterX + (fRadius* static_cast<float>(0.8*sin(fAngle)));
    float fY = fCenterY + (fRadius* static_cast<float>(cos(fAngle)));


    glColor3f(1.0,0.1,0.1);
    glVertex3f(fX, fY, 0.0f);
    }
    glEnd();

// /////////////////////////////////////////////////////



glPointSize(10);
glLineWidth(2);

float x = -0.99;
for(int i =0;i<16;i++)//rysujemy linie pionowe
{
glBegin(GL_LINES);
{
    glColor3f(0,0,0);
glVertex2f(x,-0.982);
glVertex2f(x,0.475);
x=x+przesunieciex;
glEnd();
}
}

float y=0.472;
for (int i =0;i<16;i++)// rysujemy linie poziome
{
glBegin(GL_LINES);

glColor3f(0.2,0.2,0.2);

 glVertex2f(-0.99,y);
 glVertex2f(-0.07,y);
y=y-przesunieciey;

glEnd();


}

}

//glVertex2f(cos(6.28 * (i/40.0)),sin(6.28 * (i/40.0)));







