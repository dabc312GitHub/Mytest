#include <iostream>

using namespace std;

long long factorPrimoMayor(long long n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
            n=n/i;
            }
    return n;
}

int main() {
    long long n = 600851475143;
    cout<<factorPrimoMayor(n);
    return 0;
}
