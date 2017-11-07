#include <iostream>

using namespace std;

int suma(int a[], int i, int n, int sum){
    if(i<n)
        return suma(a,i+1,n,sum+a[i]);
    return sum;
}



int main()
{
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    cout<<endl;
    cout<<suma(a,0,m,0)<<endl;
    return 0;
}
