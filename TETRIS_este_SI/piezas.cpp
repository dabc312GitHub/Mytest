#include "piezas.h"

piezas::piezas()
{

}

void piezas::printPiezas(int v[4][4]){
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            cout << v[ i ][ j ] << " ";
            if(j==4-1)
                cout<<endl;
        }
    }
    cout<<endl;

}
