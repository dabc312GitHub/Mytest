#include <iostream>
#include <cstdlib>
#include <time.h>

#include "bloques.h"
#include "vector.h"

using namespace std;


#define MaxDimensiones 4

#define Filas 17
#define Columnas 11


void printBloque(int v[][MaxDimensiones]){
    for(int i = 0; i < MaxDimensiones; ++i) {
        for(int j = 0; j < MaxDimensiones; ++j) {
            cout << v[ i ][ j ] << " ";
            if(j==MaxDimensiones-1)
                cout<<endl;
        }
    }
    cout<<endl;
}



//PLATAFORMA
void repetir(int a){
    int v[Filas][Columnas];
    for(int a=0; a<2;a++){
        for(int i = 0; i < Filas ; ++i) {
            for(int j = 0; j < Columnas ; ++j) {
                v[i][j]= 0;
                if(j==0 || j==Columnas-1 || i==Filas-1)
                    v[i][j]= 1;

                cout << v[ i /* aqui debe cambiar */ ] [ j/* aqui debe cambiar */ ] ;

                if(j==Columnas-1)
                    cout<<endl;

            }
        }
    cout<<endl;
    }
}




int main(){
    int T1[][MaxDimensiones] = { {0,0,0,0},
                                 {1,2,1,0},
                                 {0,1,0,0},
                                 {0,0,0,0} };

    int T2[][MaxDimensiones] = { {0,0,0,0},
                                 {0,1,0,0},
                                 {0,1,2,1},
                                 {0,0,0,0} };

    int T3[][MaxDimensiones] = { {0,0,0,0},
                                 {0,0,0,0},
                                 {0,1,2,1},
                                 {0,1,0,0} };

    int T4[][MaxDimensiones] = { {0,1,0,0},
                                 {0,1,0,0},
                                 {0,2,0,0},
                                 {0,1,0,0} };

    int T5[][MaxDimensiones] = { {0,0,0,0},
                                 {0,1,1,0},
                                 {0,1,2,0},
                                 {0,0,0,0} };

    int T6[][MaxDimensiones] = { {0,0,0,0},
                                 {0,1,1,0},
                                 {0,0,2,1},
                                 {0,0,0,0} };

    int T7[][MaxDimensiones] = { {0,0,0,0},
                                 {0,0,1,1},
                                 {0,1,2,0},
                                 {0,0,0,0} };




    //repetir(0);

    cout<<endl<<endl;


/*
    int num=3, valAl;
    srand(time(NULL));

    for(int ind=1; ind<=num; ind++){
           int valAl = rand() % 7 ;

        switch(valAl){
            case 1:
                printBloque(T1);

            case 2:
                printBloque(T2);

            case 3:
                printBloque(T3);

            case 4:
                printBloque(T4);

            case 5:
                printBloque(T5);

            case 6:
                printBloque(T6);

            default:
                printBloque(T7);

        }
    }
*/

    vector o;
    o.print();


    return 0;
}
