#include <iostream>

using namespace std;

int mcd(int a, int b) {
    while (b) {
        int prev = b;
        b = a % b;
        a = prev;
    }
    return a;
}

int mcm(int a, int b) {
    return a * (b / mcd(a, b));
}

int peque(int n){
    int num;
    for ( num=n-1; num>1; --num) {
        n=mcm(n, num);
}
return n;
}


int main() {

    cout << peque(20);
}
