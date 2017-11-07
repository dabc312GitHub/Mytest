#include "equipo.h"

equipo::equipo(){
    nameEquip="";
}

equipo::equipo(string n, jugador jres[11]){
    setNameEquipo(n);
    setEquipo(jres);
}

void equipo::setNameEquipo(string nam){
    nameEquip=nam;
}

void equipo::setEquipo(jugador jres[11]){
    cout<<"El nombre del TEAM es: "<<nameEquip<<endl;
    cout<<endl;
    for(int i=0; i<11 ;i++){
        a=jres[i];
        a.print();
    }
}

