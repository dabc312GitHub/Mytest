#include "polygon.h"

polygon::polygon (double a, double b) : altura(a), base(b) {}

polygon::polygon (double b) : base(b) {}

polygon::polygon () : base(0), altura(0) {}



void polygon::printArea(){
    cout << this->area() << '\n';
}
