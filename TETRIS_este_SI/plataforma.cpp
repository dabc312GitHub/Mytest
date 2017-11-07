#include "plataforma.h"
#define Filas 10
#define Columnas 8

plataforma::plataforma()
{

}


void plataforma::printPlataforma(){
     int v[Filas][Columnas];
        for(int a=0; a<2;a++){
            for(int i = 0; i < Filas ; ++i) {
                for(int j = 0; j < Columnas ; ++j) {

                    v[i][j]= 0;

                    if(j==0 || j==Columnas-1 || i==Filas-1)
                        v[i][j]= 1;

                    cout << v[ i ] [ j ] ;

                    if(j==Columnas-1)
                        cout<<endl;
                }
            }
        cout<<endl;
        }
}

void plataforma::print()
{
    for (  auto & item : colors )
    {
        cout << item << endl;
    }
}


