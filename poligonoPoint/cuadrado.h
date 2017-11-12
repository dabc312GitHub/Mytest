#ifndef CUADRADO_H
#define CUADRADO_H

#include "polygon.h"

class cuadrado : public polygon
{
public:
    cuadrado(string, double);
    double area();
    string tipo();

};

#endif // CUADRADO_H
