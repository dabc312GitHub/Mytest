#include "polygon.h"

polygon::polygon (string fig, double a, double b) : figura(fig), altura(a), base(b) {}

polygon::polygon (string fig, double b) : figura(fig), base(b) {}


void polygon::printArea(){
    cout << "El area del poligono " << this->tipo() << " es: " << this->area() << '\n';
}

