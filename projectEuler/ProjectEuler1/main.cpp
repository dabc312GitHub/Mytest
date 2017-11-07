#include <iostream>

using namespace std;

int multiplo(int n){
    return (n%3==0 || n%5==0);
}

int sumaMultiplos(int n){
    int sum=0;
    for(int x=0 ; x<n ; x++){
        if(multiplo(x)==1)
            sum=sum+x;
    }
    return sum;

}


int main()
{

    int n;
    cin>>n;
    cout << sumaMultiplos(n) << endl;
    return 0;
}



