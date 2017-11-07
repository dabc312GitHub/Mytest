#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;

    if(n==1 && t ==10)
        cout<< -1;

    else if(t == 10){
        cout<< 1;

        while(--n)
        cout<< 0;
    }

    else{
        while(n--)
        cout<< t;
    }

    return 0;
}

