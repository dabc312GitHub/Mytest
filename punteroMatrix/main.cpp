#include <iostream>

using namespace std;
//pedimos dimensiones al usuario para el llenado de matrices y su multiplicacion
void pedirValores(int*a,int*b,int*c,int*d){


    cout << "Ingresa numero de filas de la matriz 1: ";
    cin >> *a;
    cout << "Ingresa numero de columnas de la matriz 1: ";
    cin >> *b;
    cout << "Ingresa numero de filas de la matriz 2: ";
    cin >> *c;
    cout << "Ingresa numero de columnas de la matriz 2: ";
    cin >> *d;
    if(*b!=*c)
        pedirValores(a,b,c,d);
}
//creamos la matriz usando espacios de memoria que se encuentren vacios
void crearM(int**matriz,int n,int m){

    if(n!=1){
        crearM(matriz,n-1,m);
    }
    matriz[n-1] = new int[m];
}
//Funciones para llenar la matriz
void llenarF(int**matriz,int n,int m){
    if(m!=1){
        llenarF(matriz,n,m-1);
    }

    cout <<"ingresa los valores para tus matrices  :  ";
    cin>>*(*(matriz+n)+(m-1));

        //ingresar el valor para las matrices
}
void llenadoM(int**matriz,int n,int m){
    if(n!=1){
        llenadoM(matriz,n-1,m);
    }
    llenarF(matriz,n-1,m);
}
//imprimir matrices

void mostrarF(int**matriz,int n,int m){
    if(m!=1){
        mostrarF(matriz,n,m-1);
    }
    cout<<*(*(matriz+n)+(m-1))<<" ";
        //imprimir el valor de matriz[n][m-1]
}
void mostrarM(int**matriz,int n,int m){
    if(n!=1){
        mostrarM(matriz,n-1,m);
    }
    mostrarF(matriz,n-1,m);
    cout<<"\n";
}
//multiplicacion recursiva tomando en cuenta los espacios de memoria a usar

void elementos(int**matA,int**matB,int**matR,int n,int m,int o){
    if(o!=1){
        elementos(matA,matB,matR,n,m,o-1);
    }
    *(*(matR+n)+m)+=(*(*(matA+n)+(o-1)))*(*(*(matB+(o-1))+m));
}
void columnas(int**matA,int**matB,int**matR,int n,int m,int o){
    if(m!=1){
        columnas(matA,matB,matR,n,m-1,o);
    }
    *(*(matR+n)+m-1)=0;
    elementos(matA,matB,matR,n,m-1,o);
}
void multiplicacion(int**matA,int**matB,int**matR,int n,int m,int o){
    if(n!=1){
        multiplicacion(matA,matB,matR,n-1,m,o);
    }
    columnas(matA,matB,matR,n-1,m,o);
}
//borrar recursivamente todos los espacios de memoria que ocupan los valores
void borrarF(int**matriz,int n,int m){
    if(n!=0){
        borrarF(matriz,n-1,m);
    }
    delete[] (*(matriz+n));
}
void borrarM(int**matriz,int n,int m){
    borrarF(matriz,n-1,m);
    delete[] matriz;
}
int main()
{
    //creamos espacios de memoria para poder almacenar las matrices
    int*n=new int;
    int*m=new int;
    int*n2=new int;
    int*m2=new int;
    //funcion para pedir al usuario las dimensiones de las matrices
    pedirValores(n,m,n2,m2);
    //se crean las matrices y se usa una funcion para crear fila por fila de este modo es mas facil hacerlo recursivo
    int**matrizA = new int*[*n];
    int**matrizB = new int*[*n2];
    int**matrizR = new int*[*n];
    crearM(matrizA,*n,*m);
    crearM(matrizB,*n2,*m2);
    crearM(matrizR,*n,*m2);
    //funciones para ingresar los valores de las dos matrices para multiplicarlas
    llenadoM(matrizA,*n,*m);
    llenadoM(matrizB,*n2,*m2);
    //Se ejecuta la funcion de multiplicacion y se imprimen las matrices
    multiplicacion(matrizA,matrizB,matrizR,*n,*m2,*m);
    cout<<"matrizA:\n";
    mostrarM(matrizA,*n,*m);
    cout<<"matrizB:\n";
    mostrarM(matrizB,*n2,*m2);
    cout<<"matriz resultante:\n";
    mostrarM(matrizR,*n,*m2);
    //Se eliminan las matrices y las variables creadas para liberar el espacio de memoria
    borrarM(matrizA,*n,*m);
    borrarM(matrizB,*n2,*m2);
    borrarM(matrizR,*n,*m2);
    delete n;
    delete m;
    delete n2;
    delete m2;
    return 0;
}
