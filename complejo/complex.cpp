#include "complex.h"

complex::complex(){
    R=0;
    I=0;
}

complex::complex(double a, double b){
     R = a;
     I = b;
}


double complex::Real(){
    return R;
}

double complex::Imaginario(){
    return I;
}

void complex::Impresion(){
    cout << "\nNumero Complejo: ";
    if(I>0)
        cout << R << "+" << I << "i" << endl;

    else if(I<0)
        cout << R << I << "i" << endl<< endl;
}


void complex::Suma( double a, double b, double c, double d){
    cout <<"\nLa suma de los numeros es: ";
    if(b + d >= 0)
        cout << a + c << "+" << b + d << "i" << endl;

    else if(b + d < 0)
        cout << a + c << b + d << "i" << endl;
}


void complex::Resta( double a, double b, double c, double d){
    cout <<"\nLa resta de los numeros es: ";

    if(b - d >= 0)
        cout << a - c << "+" << b - d << "i" << endl;

    else if(b - d < 0)
        cout << a - c << b - d << "i" << endl;
}

void complex::ProductoEscalar( double m){
    cout <<"\nEl producto escalar de los numeros es: ";

    if(I >= 0)
        cout << m*R << "+" << m*I << "i" << endl;

    else
        cout << m*R << m*I << "i" << endl;
}

