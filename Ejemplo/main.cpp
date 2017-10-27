#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

#define MaxDimensiones 4


void bloques(int v[][MaxDimensiones]){
    for(int i = 0; i < MaxDimensiones; ++i) {
        for(int j = 0; j < MaxDimensiones; ++j) {
            cout << v[ i ][ j ] << " ";
            if(j==MaxDimensiones-1)
                cout<<endl;
        }
    }
    cout<<endl;
}

void invertirBloque(int v[][MaxDimensiones]){
    for(int i = 0; i < MaxDimensiones; ++i) {
        for(int j = 0; j < MaxDimensiones; ++j) {
            cout << v[ j ][ i ] << " ";
            if(j==MaxDimensiones-1)
                cout<<endl;
        }
    }
    cout<<endl;
}




int main()
{
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

    int num=6, valAl;
    srand(time(NULL));

    for(int ind=1; ind<=num; ind++){
           int valAl = 1 + rand() % 10 +1 ;

        switch(valAl){
            case 1:
                bloques(T1);

            case 2:
                bloques(T2);

            case 3:
                bloques(T3);

            case 4:
                bloques(T4);

            case 5:
                bloques(T5);

            case 6:
                bloques(T6);

            default:
                bloques(T7);

        }
    }
    return 0;
}
