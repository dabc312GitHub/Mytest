#include "jugador.h"

jugador::jugador(){
    name = "";
    number = 0;
    position = "";
    aggressivity = 0;
};

jugador::jugador(string n, int num, string pos, int agg){
    name = n;
    number = num;
    position = pos;
    aggressivity = agg;
};

void jugador::setName (string n){
    name=n;
};

void jugador::setNumber (int num){
    number = num;
};


void jugador::setPosition (string pos){
    position = pos;
};


void jugador::setAggressivity (int agg){
    aggressivity = agg;
};

void jugador::print(){

    cout<<"nombre: "<<name<<endl;
    cout<<"numero: "<<number<<endl;
    cout<<"posicion: "<<position<<endl;
    cout<<"agresividad: "<<aggressivity<<endl;
    cout<<endl;
};
