#ifndef EQUIPO_H
#define EQUIPO_H

#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;

class equipo
{
    string nameEquip;
    jugador jres[11];
    jugador a;

public:

    equipo();
    equipo(string n, jugador jres[11]);

    void setNameEquipo(string);
    void setEquipo(jugador jres[11]);
};

#endif // EQUIPO_H
