#include <iostream>

using namespace std;

/*
int main()
{
    int x=5;
    int *ptr=&x;
    while(*ptr <= 10){
        cout << *ptr++ << endl;
    }
    cout << x << endl;
    return 0;
}

*/
int main(){
    int x=5;
    int &y = x;
    while(x <= 10){
        if(y++ == 5)
            continue;
        else
            break;
    }
    cout << x << endl;
    return 0;
}
