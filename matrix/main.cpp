#include <iostream>
using namespace std;

/*
int main(){
    int m,n;
        cin>>m>>n;
    int A[m][n],B[m][n],C[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"A["<<i<<"]["<<j<<"]:";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"B["<<i<<"]["<<j<<"]:";
            cin>>B[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<endl;
        }
    }
    return 0;
}

*/





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



























