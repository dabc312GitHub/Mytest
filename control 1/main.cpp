#include <iostream>
using namespace std;

void porValor(int a){
    a = a + 2;
}

void porReferencia(int &a){
    a = a + 2;
}

int suma_recursiva(const int arr[], const int length) {
    if(length == 1)
        return arr[0];
    return arr[length-1] + suma_recursiva(arr, length-1);
}

int repeticionesCaracter(const char arr[], const char caracter) {
    int rep = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == caracter)
            rep++;
    cout<<arr[i]<<endl;
    }
    return rep;
}

void invertirCadena(char arr[], int inicio, int fin) {
    if(inicio < fin) {
        char temp = arr[inicio];
        arr[inicio] = arr[fin-1];
        arr[fin-1] = temp;
        invertirCadena(arr, inicio+1, fin-1);
    }
}

int main()
{
    int x = 6, y = 2;
    cout << !(x>2) << endl;
    cout << ( (x>y) && (y>0) ) << endl;
    cout << ( (x<y) && (y>0) ) << endl;
    cout << ( (x<y) || (y>0) ) << endl;

    porValor(x);
    cout << x << endl;
    porReferencia(x);
    cout << x << endl;

    int arreglo[] = {1,2,3,4,5,6,7,8,9};
    cout << suma_recursiva(arreglo, 9) << endl;

    char cadena[] = "ciencia";
    cout << repeticionesCaracter(cadena, 'i') << endl;

    invertirCadena(cadena, 0, 7);
    cout << cadena << endl;

    return 0;
}
