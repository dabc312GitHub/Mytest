#ifndef PIEZAS_H
#define PIEZAS_H

#include <iostream>
#include <vector>

#define FILAS 11
#define COLUMNAS 22
#define MaxDimensiones 4

using namespace std;

class piezas
{

public:
    piezas();
    void printPiezas(int v[4][4]);
};

#endif // PIEZAS_H
