#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum_square=n*(n+1)*(2*n+1)/6;
    int sum=n*(n+1)/2;
    int square=sum*sum;

    cout << square-sum_square << endl;
    return 0;
}
