#include <iostream>
#include "jugador.h"
#include "equipo.h"
using namespace std;

int main()
{
    jugador a("leon", 1, "arquero", 5);
    jugador b("jonas", 2, "defensa", 2);
    jugador c("butron", 3, "defensa", 12);
    jugador d("gallese", 4, "defensa", 43);
    jugador e("paolo", 5, "defensa", 32);
    jugador f("cueva", 6, "centro", 11);
    jugador g("lobaton", 7, "centro", 5);
    jugador h("junior", 8, "centro", 29);
    jugador i("alberto", 9, "delantero", 30);
    jugador j("carlos", 10, "delantero", 32);
    jugador k("zambrano", 11, "delantero", 21);

    jugador z[]={a,b,c,d,e,f,g,h,i,j,k};

    jugador jugador;
    equipo x("PERU", z);
    return 0;
}
