#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

using namespace std;

class Jugador
{
public:
    int number, aggre;
    string name, position;

    Jugador();
    Jugador(string n, int num, string pos, int agg);
};

#endif // JUGADOR_H
