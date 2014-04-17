#include "glwidget.h"
#include <GL/glu.h>
#include <math.h>
#define PI 3.14159f

GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
}

void GLWidget::initializeGL()
{
    glClearColor(1,1,1,1);
glViewport(0,0,1200,640);

}




void GLWidget::paintGL()
{


/*wymiary:*/
// * lewy dolny róg = glVertex2f(-0.99,-0.99);
//   * lewy gorny róg =    glVertex2f(-0.99,0.4563);
//   * prawy górny róg = glVertex2f(-0.069,0.4563);
//   *  prawy dolny róg= glVertex2f(-0.069,-0.99);


float przesuniecie=0.0614;
float poczatek_tabeli_y=-0.99;
float poczatek_tabeli_x=-0.99;

glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(2);



int rozmiar=15;//TU ZMIENIAMY ROZMIAR GRY


float x =-0.99;
float y=0.5;
float x1=rozmiar*0.04+x;
float y1=-rozmiar*0.1+y;

for(int i =0;i<rozmiar+1;i++)
{
glBegin(GL_LINE_LOOP);
{
glColor3f(0,0,0);

    glVertex2f(x,y);
    glVertex2f(x,y-i*0.1);
    glVertex2f(x+i*0.04,y-i*0.1);
    glVertex2f(x+i*0.04,y);

glEnd();


glBegin(GL_LINE_LOOP);
{

glVertex2f(x1,y1);
glVertex2f(x1,y1+i*0.1);
glVertex2f(x1-i*0.04,y1+i*0.1);
glVertex2f(x1-i*0.04,y1);
glEnd();
}

}
}


// budowanie koła

    float fRadius = przesuniecie/2;
    float fPrecision = 0.05f;
    float fCenterX = poczatek_tabeli_x+(przesuniecie/2);
    float fCenterY = poczatek_tabeli_y+(przesuniecie/2);

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


}









