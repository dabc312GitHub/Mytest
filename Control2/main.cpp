#include<iostream>
using namespace std;




void invertir(int a[], int n){
    int temp;
    for(int i=0; i<n/2;++i){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
}

void imprimir(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    cout<<'\n';
}

int main(){
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    cout<<"antes"<<endl;
    imprimir(a,m);

    invertir(a,m);
    cout<<"despues"<<endl;
    imprimir(a,m);
    return 0;
}


