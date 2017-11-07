#ifndef PLATAFORMA_H
#define PLATAFORMA_H

#include <iostream>
#include <vector>


#define FILAS 11
#define COLUMNAS 22
#define MaxDimensiones 4

using namespace std;


class plataforma
{
    vector<string> colors = {"red", "green", "blue"};
    vector< vector<int> > matrix;

public:
    void printPlataforma();

    plataforma();

    void print();

};

#endif // PLATAFORMA_H





