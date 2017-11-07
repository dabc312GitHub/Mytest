
#include <iostream>

using namespace std;

int main()
{
     int f=3,c=3,mayor=0,menor=0,cont,mediana;
     float sum,prom;
     int matriz[f][c];
     //lleno la matriz
    for(int i=0; i<f; i++)
    {
        for(int j=0; j<c; j++)
        {
             cout<<"ingresa tus numeros:";
             cin>>matriz[i][j];
        }
    }
    //imprimo la matriz como se lleno
    cout<<"\nLos Datos De La Matriz Fuero Introducidos Asi"<<endl;
    for(int i=0; i<f; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

     //ordeno la matriz de mayor a menor o menor a mayor si cambio
     //el signo y la variable de mayor por menor

 //determinio una matriz[i][j] que se valla comparando con la matriz[x][y]

     for(int i=0; i<f; i++)
     {
        for(int j=0; j<c; j++)
        {
            for(int x=0; x<f;x++)
            {
                for(int y=0; y<c; y++)
                {
                    if(matriz[i][j]<matriz[x][y])
                    {
                        menor=matriz[i][j];
                        matriz[i][j]=matriz[x][y];
                        matriz[x][y]=menor;
                    }

                }
            }
         }

    }

    //imprimo la matriz como ordenada
    cout<<"\nLos Datos De La Matriz Fueron Ordenados de Menor a Mayor"<<endl;



    for(int i=0; i<f; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }


    //determino max y min mientras valla recorriendo posicion a posicion
    //hasta encontrar el numero mas grande y el mas pequeño
    int MAX;
    int MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+matriz[i][j];
            cont++;
            if(matriz[i][j]>MAX){
                MAX=matriz[i][j];
            }
            if(matriz[i][j]<MIN){
                MIN=matriz[i][j];
            }
        }
    }
    //doy la mediana por medio que voy contanto las posiciones
    //y las divido por un contador
    mediana = matriz[1][1];
    prom=sum/cont;
    cout<<"el minimo es :"<< MIN<<endl;
    cout<<"el maximo es :"<<MAX<<endl;
    cout<<"la mediana es :"<<mediana<<endl;
    return 0;

}
