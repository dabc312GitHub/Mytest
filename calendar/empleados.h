#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <iostream>
#include <string>
#include "fecha.h"

using namespace std;

class empleados{
    string nombre;
    int salario;
    fecha ingreso[2];
    fecha f;

public:
    empleados();
    empleados(string, int, fecha ingreso[2]);
    void setNombre(string);
    void setSalario(int);
    void setIngreso(fecha ingreso[2]);

    void printEmpleado();
    //enum empresa;
};

#endif // EMPLEADOS_H
