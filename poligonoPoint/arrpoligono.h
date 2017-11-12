#ifndef ARRPOLIGONO_H
#define ARRPOLIGONO_H

#include "polygon.h"

class arrPoligono
{

public:
    polygon** arr;
    int tam;

    arrPoligono();
    arrPoligono (int);
    ~arrPoligono();

};
#endif // ARRPOLIGONO_H
