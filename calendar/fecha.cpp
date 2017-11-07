#include "fecha.h"

fecha::fecha(){
    dd=0;
    mm=0;
    aa=0;
}

fecha::fecha(int a, int b, int c){
    dd=a;
    mm=b;
    aa=c;
}

void fecha::print(){
    cout<<"La fecha es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
}

void fecha::setdd(int dia){
    dd=dia;
}


void fecha::setmm(int mes){
    mm=mes;
}


void fecha::setaa(int anio){
    aa=anio;
}

bool fecha::bisiesto(){
    return (aa % 4 == 0 && (aa % 100 != 0 || aa % 400 == 0));
}

void fecha::sumarDias(int dpp){
    dd=dd+dpp;
    cout<<"Al sumarle  "<<dpp<<"  dias, tenemos... "<<endl;
    if (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10){
        if(dd>31)
            cout<<dd-31<<"/"<<mm+1<<"/"<<aa<<endl;
        else
            cout<<dd<<"/"<<mm<<"/"<<aa<<endl;
    }

    else if(mm==12){
        if(dd>31)
            cout<<dd-31<<"/"<<"1"<<"/"<<aa<<endl;
        else
            cout<<dd<<"/"<<mm<<"/"<<aa<<endl;
    }

    else if(mm==4 || mm==6 || mm==9 || mm==11){
        if(dd>30)
            cout<<dd-30<<"/"<<mm+1<<"/"<<aa<<endl;
        else
            cout<<dd<<"/"<<mm<<"/"<<aa<<endl;
    }

    else{
        if(bisiesto()==1){
            if(dd>29)
                cout<<dd-29<<"/"<<mm+1<<"/"<<aa<<"  y es bisiesto "<<endl;
            else
                cout<<dd<<"/"<<mm<<"/"<<aa<<"  y es bisiesto "<<endl;
        }

        else{
            if(dd>28)
                cout<<dd-28<<"/"<<mm+1<<"/"<<aa<<"  y NO es bisiesto "<<endl;
            else
                cout<<dd<<"/"<<mm<<"/"<<aa<<"  y NO es bisiesto "<<endl;
        }
    }
}
