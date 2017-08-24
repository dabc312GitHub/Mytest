#include <iostream>

using namespace std;

int main()
{
    int primo,i,add;
    cout<<"ingrese un numero"<<endl;
    cin>>primo;
    if(primo==0)
        cout<<"el numero no es primo"<<endl;
    i=0, add=1;
    while(add<=primo)
    {
        if(primo%add == 0)
            i=i+1;
        add=add+1;
    }
    if(i>2)
        cout<<"el numero no es primo"<<endl;
    else
        cout<<"el numero es primo"<<endl;

    return 0;
}
