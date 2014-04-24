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


pole();
kolo();








// budowanie koła



}









