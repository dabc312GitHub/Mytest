#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "polygon.h"

class rectangulo:public polygon
{
public:
    rectangulo(double, double);
    double area();
};

#endif // RECTANGULO_H
