#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class complex{

public:
    complex();
    complex(double, double);
    double Real(), Imaginario();
    void Suma(double, double, double, double);
    void Resta(double, double, double, double);
    void ProductoEscalar( double );

    void Impresion();

private:
    double R;
    double I;
};

#endif // COMPLEX_H
