#ifndef FECHA_H
#define FECHA_H

#include <iostream>

using namespace std;

class fecha{
    public:
        fecha();
        fecha(int , int, int);
        void setaa(int);
        void setmm(int);
        void setdd(int);
        bool bisiesto();
        void sumarDias(int);
        void print();
    private:
        int dd,mm,aa;
        int dpp;

};

#endif // FECHA_H
