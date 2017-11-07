#include "rectangulo.h"

rectangulo::rectangulo(double a,double b) : polygon(a,b) {}

double rectangulo::area(){
    return base * altura;
}

