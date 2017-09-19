#include <iostream>
#include <cmath>
using namespace std;

int raiz(int n){
    int a;
    a=sqrt(n);
    return (n%2==0 && n/a==a);
}

int main()
{
    int n;
    cin>>n;
    if(raiz(n))
        cout << "si es"<<n << endl;
    else
        cout<<"no es exacta y multiplo de 2"<<endl;

    return 0;
}

