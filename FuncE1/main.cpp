#include <iostream>

using namespace std;



bool bisiesto(int anio){
    if(anio%4==0){
    if(anio%100!=0 || anio%400==0){
    return anio;
    }
    }
    else{
    return false;
    }
}


int main(){
    int n;
    cout << "ingrese año" << endl;
    cin>>n;
    if(bisiesto(n))
    cout << "Es bisiesto" << endl;
    else
    cout << "no lo es" << endl;
    return 0;
}
