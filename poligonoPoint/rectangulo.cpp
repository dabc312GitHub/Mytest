#include "rectangulo.h"

rectangulo::rectangulo(string fig, double a,double b) : polygon(fig, a, b) {}

double rectangulo::area(){
    return base * altura;
}

string rectangulo::tipo(){
    return figura;
}
