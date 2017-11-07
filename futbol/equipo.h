#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
#include "jugador.h"

using namespace std;

class equipo
{
public:
    string nombre;
    int tam;

    Jugador jugadores[1];

    equipo();
};

#endif // EQUIPO_H
