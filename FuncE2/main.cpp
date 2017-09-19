#include <iostream>

using namespace std;


bool primo(int n){
    int a=0;
    for(int i=1;i<n;i=i+1){
        if(n%i==0)
        a=a+1;
        }
        if(a!=1)
        return true;
        else
        return false;


}

int main()
{
int n;
    cout<<"Ingrese numero"<<endl;
    cin>>n;

    if(primo(n)==true)
    cout<<"No es Primo";
    else
    cout<<"Si es Primo";
    return 0;
}
