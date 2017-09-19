#include <iostream>

using namespace std;

int suma(int a[], int n){
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+a[i];
    return sum;
}

int main()
{
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    cout<<suma(a,m)<<endl;
    return 0;
}
