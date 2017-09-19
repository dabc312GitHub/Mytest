#include <iostream>

using namespace std;


bool primo(int n){
    int i, add;
    i=0,add=1;
    while(add<=n){
        if(n%add == 0)
        i=i+1;
        add++;
    }
    return (i>2);

}


int main()
{
    int n;
    cin>>n;
    if(primo(n))
        cout<<"el numero no es primo"<<endl;
    else
        cout<<"el numero es primo"<<endl;

    return 0;
}




