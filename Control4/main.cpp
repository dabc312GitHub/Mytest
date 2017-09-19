#include <iostream>

using namespace std;

int main()
{
    char* a[4]= {"hola,", "Voy a terminar mis tareas","Cerrare el Facebook y WhatsApp!","Bye"};
    for (int i=4;i>=0;--i)
        cout<<a[i]<<endl;
    return 0;
}
