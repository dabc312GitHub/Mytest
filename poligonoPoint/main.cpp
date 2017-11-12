
#include <iostream>

#include "polygon.h"
#include "rectangulo.h"
#include "triangulo.h"
#include "cuadrado.h"
#include "arrpoligono.h"

using namespace std;

int main () {
    int tam=10;
    int borrar=2;
    int pos;

    polygon* p0 = new rectangulo ("rect 1", 3, 2);

    polygon* p1 = new triangulo ("tri 1", 7, 6);

    polygon* p2 = new cuadrado ("cuad 1", 5.5);


    arrPoligono figGeo(tam);

    figGeo.arr[0]=p0;
    figGeo.arr[1]=p1;
    figGeo.arr[2]=p2;

    for(int i=0;i<tam;i++){
        if(i!=borrar){
            cout<<"se agrega la figura p" << i << "  donde" << endl;
            figGeo.arr[i]->printArea();
        }
        else
            cout<< "se elimino la figura p" << i <<endl;
        cout<<endl;
    }

    return 0;
}

