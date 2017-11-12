#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "polygon.h"

class rectangulo : public polygon
{
public:
    rectangulo(string, double, double);
    double area();
    string tipo();
};

#endif // RECTANGULO_H
