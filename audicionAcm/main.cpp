#include <iostream>
#include <string>
using namespace std;


int main()
{
    int s;
    string nota;
    cin >> s >> nota;
    string pentagrama[12]={"DO","DO#","RE","RE#","MI","FA","FA#","SOL","SOL#","LA","LA#","SI"};

    for (int i=0; nota==pentagrama[i] ;i++)
    cout<<pentagrama[i-s];

    return 0;
}


/*
int main()
{
    long long N,P[100000],C[100000];
    cin>>N;
    cout<<endl;
    for (int i=0; i<N;i++){
        cin>>P[i];
        cin>>C[i];
    }
    return 0;
}
*/
