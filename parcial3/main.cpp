#include <iostream>

using namespace std;

void a(char x[],int n, int i){
    void *p;
    for(int i=0;x[i]!='\0';i++){
        p=&(x[i]);
        ((char*)p);

    }
}


int main()
{
    char *x="cien";

    cout << a(x,4) << endl;
    return 0;
}
