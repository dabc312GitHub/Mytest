#include <iostream>

using namespace std;

int * getPtrToFive(){
    int *x=new int;
    *x=5;
    return x;
}

int main()
{
    /*
    int *p=getPtrToFive();
    cout<<*p<<endl;
    delete p;
    */
    int *p;
    for (int i=0;i<1000000000000;++i){
        p=getPtrToFive();
        cout<<*p<<endl;
    }
    delete p;

    cout << "Hello World!" << endl;
    return 0;
}
