#include <iostream>

using namespace std;

int main()
{
    int n,p,q,r;
    cin>>n;
    cout<<"\t";
    cin>>p;
    cout<<"\t";
    cin>>q;
    cout<<"\t";
    cin>>r;
    int a[n];
    for(int m=0;m<n;m++){
        cin>>a[m];
        cout<<"\t";
    }
    cout<<"\n";

    int i,j,k;
    cin>>i>>j>>k;
    if(i>=1 && j>=i && k>=j)
        cout<<(p*a[i-1])+(q*a[j-1])+(r*a[k-1]);
    return 0;
}
