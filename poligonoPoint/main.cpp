
#include <iostream>

#include "polygon.h"
#include "rectangulo.h"
#include "triangulo.h"
#include "cuadrado.h"

using namespace std;

int main () {
    int tam=3;

    polygon* p1 = new rectangulo (7,6);

    polygon* p2 = new triangulo (7,6);

    polygon* p3 = new cuadrado (7);


    //polygon** arr = new polygon*[tam];
    //polygon**[tam]={p1,p2,p3};

    polygon* d[tam]={p1,p2,p3};

    for(int i=0;i<tam;i++){
        d[i]->printArea();
        delete d[i];
    }

    return 0;
}

