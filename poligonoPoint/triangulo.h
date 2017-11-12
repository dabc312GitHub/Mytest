#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "polygon.h"

class triangulo : public polygon
{
public:
    triangulo(string, double, double);
    double area();
    string tipo();

};

#endif // TRIANGULO_H
