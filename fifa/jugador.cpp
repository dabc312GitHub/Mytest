#include "jugador.h"

jugador::jugador()
{
    name = "";

};

jugador::jugador(string n){
    name=n;
};

void jugador::print(){
    cout<<name;
};
