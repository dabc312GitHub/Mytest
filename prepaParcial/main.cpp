#include <iostream>

using namespace std;

void swapReferencia(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}

void swapPuntero(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void invertirCadena(char *ptr, int len) {
    if(len/2 == 0) {
        return;
    }
    else {
        char tmp = *ptr;
        *ptr = *(ptr+len-1);
        *(ptr+len-1) = tmp;
        invertirCadena(++ptr, len-2);
    }
}


int strlen(char *cadena) {
    int len=0;
    for(len; *cadena != '\0'; len++){
        cadena++;
    }
    return len;
}

int main()
{
    char cadena[] = "ciencia";
    cout << strlen(cadena) << endl;
    invertirCadena(cadena, strlen(cadena));
    cout << cadena << endl;
    return 0;
}
