#include <iostream>
#include <vector>
#include <string>

#include "piezas.h"
#include "plataforma.h"

using namespace std;

#define FILAS 11
#define COLUMNAS 22


#define HEIGHT 5
#define WIDTH 3
#define DEPTH 7



int main()
{
    int v[4][4]={{0,0,0,0},
                 {0,1,1,1},
                 {0,1,0,0},
                 {0,0,0,0}};

    cout << "Hello World!" << endl;

/*
    plataforma m;
    m.printPlataforma();
*/
    piezas piez;
    piez.printPiezas(v);

    plataforma plat;
    plat.printPlataforma();

    vector <int> vectorInts;
    vector <int>::iterator it;

    cout<<vectorInts.size()<<" elements \n";
    cout<<"añadir"<<endl;

    vectorInts.assign(4,3);

    cout<<"vectorInts has"<<vectorInts.size()<<"elements "<<endl;

    cout<<"vectorInts has these elements: \n";

    for (it=vectorInts.begin() ; it!=vectorInts.end() ; ++it)
        cout<<*it<<" ";
    cout<<endl;

// end da

/*
    vector< vector<int> > matrix(4,vector<int>(4));

    for(int i=0;i<4;i++)
    {
       for(int j=0;j<4;j++)
       {
          cin>>matrix[i][j];
       }
       cout<<endl;
    }

    cout<<"::matrix::"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
*/

    plataforma myColor;

    myColor.print();

    return 0;
}





