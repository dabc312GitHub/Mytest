#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>

using namespace std;

class jugador{
public:
    jugador();
    string name;
    jugador(string name);

    void print();
};

#endif // JUGADOR_H
