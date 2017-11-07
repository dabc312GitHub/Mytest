#ifndef FUTBOL_H
#define FUTBOL_H
#include <string>
#include <iostream>
using namespace std;
class futbol
{
public:
    futbol(string a, int b, string c, int d){
        setName(a);
        setAgresividad(b);
        setPosicion(c);
        setNumero(d);

    }
    void setName(string w){
        name=w;
    }
    void setAgresividad(int x){
        name=x;
    }
    void setPosicion(string y){
        name=y;
    }
    void setNumero(int z){
        name=z;
    }


};

#endif // FUTBOL_H
