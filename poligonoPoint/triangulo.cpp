#include "triangulo.h"

triangulo::triangulo(string fig, double a,double b) : polygon(fig, a, b) {}

double triangulo::area(){
    return base * altura / 2;
}

string triangulo::tipo(){
    return figura;
}

