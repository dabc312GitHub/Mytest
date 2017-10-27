#include "complex.h"

int main()
{
    complex s;
    complex x(3,5);
    complex y(1,-9);

    x.Impresion();

    y.Impresion();


    s.Suma(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());

    s.Resta(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());

    x.ProductoEscalar(3);

    cout<<endl;
    return 0;
}
