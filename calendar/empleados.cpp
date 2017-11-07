#include "empleados.h"

empleados::empleados(){
    nombre="";
    salario=0;
}

empleados::empleados(string n, int s, fecha ingreso[2]){
    setNombre(n);
    setSalario(s);
    setIngreso(ingreso);
}

void empleados::setSalario(int s){
    salario=s;
}

void empleados::setNombre(string nom){
    nombre=nom;
}

void empleados::setIngreso(fecha ingreso[2]){
    cout<<nombre<<endl;

    for (int i=0; i< 2 ;i++){
        f=ingreso[i];
        f.print();
    }
}


