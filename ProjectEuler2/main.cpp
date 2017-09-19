#include <iostream>

using namespace std;

/*
long fib(long x){
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    return fib(x-1) + fib(x-2);
}
*/

int fibo(int x){
    int a=1,b=1,c,sum=0;
    while(b<=x){
        if(b%2==0)
            sum=sum+b;
        c=b;
        b=a+b;
        a=c;

    }
   return sum;

}


int main()
{

    int x;
    cin>>x;
    cout<<fibo(x);
    return 0;
}
