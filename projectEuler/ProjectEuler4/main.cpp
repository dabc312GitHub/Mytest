#include<iostream>
using namespace std;

int invertir(int numero){
    int invertido = 0;
    while (numero > 0){
        int resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero /= 10;
    }
    return invertido;
}

int main(){
    int palindrome = 0;
    for(int m=999;m>=100;m--){
        for(int n=999;n>=m;n--){
    int prod=m*n;
    if(prod>palindrome && invertir(prod)==prod)
    palindrome=prod;
    }
}
    cout << "Largest " << palindrome << endl;
    return 0;
}
