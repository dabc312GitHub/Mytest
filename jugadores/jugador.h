#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>
using namespace std;

class jugador
{
    string name, position;
    int number, aggressivity;
public:
    jugador();
    jugador(string, int, string, int);
    void setName(string);
    void setNumber(int);
    void setPosition(string);
    void setAggressivity(int);

    void print();
};

#endif // JUGADOR_H
