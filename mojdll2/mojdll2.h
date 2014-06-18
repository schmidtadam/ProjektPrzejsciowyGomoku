#ifndef MOJDLL2_H
#define MOJDLL2_H

#include "mojdll2_global.h"

class MOJDLL2SHARED_EXPORT Mojdll2
{

public:
    Mojdll2();
    int kolumna();
    int wiersz();
    int tablica_testowa[15][15];
    void taktyka();

};

#endif // MOJDLL2_H
