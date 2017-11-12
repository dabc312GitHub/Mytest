#include "cuadrado.h"

cuadrado::cuadrado(string fig, double b) : polygon(fig, b) {}

double cuadrado::area(){
    return base * base;
}

string cuadrado::tipo(){
    return figura;
}



