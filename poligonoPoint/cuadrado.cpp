#include "cuadrado.h"

cuadrado::cuadrado(double b) : polygon(b) {}

double cuadrado::area(){
    return base * base;
}
