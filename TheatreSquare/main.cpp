#include <iostream>

using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long p = m/a + (m % a == 0 ? 0 : 1);
	long long l = n/a + (n % a == 0 ? 0 : 1);
    cout<<p*l;
    return 0;
}


