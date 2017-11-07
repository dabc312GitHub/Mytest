#include <iostream>

using namespace std;

/*
int problem(int r, int p){
    int n=(r+1)/2;
    if(p<=n)
        return (2*p)-1;
    return 2*(p-n);
}

int main(){
    int r,p,n;
    cin>>r>>p;
    cout<<problem(r,p)<<endl;
    return 0;
}
*/

/*
int main(){
    int p;
    cin>>p;
    cout<<( p<=5 ? (2*p)-1 : 2*(p-5));
}
*/
long long arr(long long r, long long p, long long n){
    if(p<=n)
        return (2*p)-1;
    return 2*(p-n);
}

int main(){
    long long r,p;
    long long n;
    cin>>r>>p;
    n=(r+1)/2;
    cout<<arr(r,p,n);
    return 0;
}
