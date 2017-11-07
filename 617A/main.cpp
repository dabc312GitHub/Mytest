#include <iostream>

using namespace std;

//ELEPHANT
int main()
{
    long long x,y;
    cin>>x;
    y=x/5;
    if(x%5==0)
        cout<<y;
    else
        cout<<y+1;
    return 0;
}


