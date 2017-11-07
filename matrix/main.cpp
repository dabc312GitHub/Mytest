#include <iostream>
using namespace std;

void matriz(int m[][3], int nfilas, int ncol)
{
    cout<<"mostrando matriz original:\n";
        for(int i=0; i<nfilas; i++)
        {
            for(int j=0; j<ncol; j++)
            {
                cout<<m[i][j]<<" ";
            }
        cout<<"\n";
        }
}

int main()
{
    const int x = 2;
    const int y = 3;
    int m[x][y] = {{1,2,3},{4,5,6}};
    matriz(m, x, y);
    return 0;
}





/*
int mayor(int a[],int n){
    int i,may;
    may=a[0];
    for(i=0;i<n;i++){
        if(a[i]>may)
            may=a[i];
        }
    return may;
}

int main(){
    int m;
    cin>>m;
    int a[m];
    for(int i=0 ; i<m ; i++)
        cin>>a[i];
        cout<<mayor(a,m);
    return 0;
}
*/


























