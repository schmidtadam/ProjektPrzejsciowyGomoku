#include "mojdll.h"
#include<GL/gl.h>
#include <GL/glu.h>
#include <math.h>
#include <cstdlib>
Mojdll::Mojdll()
{
}

int Mojdll::wiersz()
{


int x=std::rand()%15;


return x;

}

int Mojdll::kolumna()
{

  int y=std::rand()%15;


 return y;


}
