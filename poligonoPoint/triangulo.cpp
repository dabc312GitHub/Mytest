#include "triangulo.h"

triangulo::triangulo(double a,double b) : polygon(a,b) {}

double triangulo::area(){
    return base * altura / 2;
}
