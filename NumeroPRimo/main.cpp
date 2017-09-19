#include <iostream>
using namespace std;

/*
int main(){
    int i=3,contador=1,n,f;
    cout<<"Ingrese numero: "<<endl;
    cin>>n;

    while(contador<n){
        f=0;
        for(int j=2;j<=i/2;++){
            if(i%j==0){
                f=1;
            }
        if(f==0)
        {
            contador++
        }
        i++;
        }
    }
    cout<<"enesimo numero: "<<i-1;
    return 0;
}
*/

//pner un numero primo por orden

int main(){
    int i=3,contador=1,n,f;
    cout<<"Ingrese numero: "<<endl;
    cin>>n;

    while(contador<n){
        f=0;
        for(int j=2;j<=i/2;++){
            if(i%j==0){
                f=1;
            }
        if(f==0)
        {
            contador++
        }
        i++;
        }
    }
    cout<<"enesimo numero: "<<i-1;
    return 0;
}
