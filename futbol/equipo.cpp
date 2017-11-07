#include "equipo.h"

equipo::equipo()
{

}

void setName(string n){
    nombre=n;
};

void setTam(int t){
    tam=t ;
};

void print(){
    cout<<"nombre: "   << nombre<<endl;
    cout<<"tamanio: "  <<  tam;
    for(int i=0;i<=tam;i++){
        jugadores[i];
    }
};
