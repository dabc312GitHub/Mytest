#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "polygon.h"

class triangulo:public polygon
{
public:
    triangulo(double, double);
    double area();
};

#endif // TRIANGULO_H
