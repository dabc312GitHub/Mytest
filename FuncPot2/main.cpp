#include <iostream>

using namespace std;

//Potencia de 2 RECURSIVO
/*3
int pot(int x){
    if (x%2==1)
        return false;
    if(x==2)
        return true;
    if(x%2==0)
        return pot(x/2);
}

*/

//POTENCIA de dos operaciones binarias

int pot(int a){
    return ((a & (a-1))==0);

}



int main(){
    int n;
    cin>>n;
    if(pot(n)==true)
    cout<<"es potencia de 2"<<endl;
    else
    cout<<"no lo es"<<endl;

}
