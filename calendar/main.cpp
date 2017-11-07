#include <iostream>
#include "fecha.h"
#include "empleados.h"
using namespace std;

int main(){

    fecha MyCumpleanios(28, 2, 2016);
    MyCumpleanios.print();
    MyCumpleanios.sumarDias(3);

    cout << endl<<"Hello world!" << endl;

    fecha reclutamiento1(22,10,2014);

    fecha arr[]={MyCumpleanios,reclutamiento1};

    empleados mes("Daryl",4,arr);

    return 0;
}
