#include <iostream>

using namespace std;

/*
int main(){
    int x=0;
    int y=0;
    while(true){
        if(x++==10){
            y++;
        cout<<++x<<" ";
            break;
        }
    cout<<++x<<" ";
    cout<<++y<<endl;
    if (x%2==0)
        continue;
    cout<<++x<<" ";
    cout<<++y<<endl;
    }

    cout<<++x<<" ";
    cout<<++y<<endl;
    return 0;

}
*/

void burbuja(int a[], int n){
    int i,j,aux;
    for(i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            aux=a[j];
            a[j]=a[j+1];
            a[j+1]=aux;
        }
        }
    }
}

void porRef(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void porPunteros(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}



void invertirCadena(char *ptr, int len) {
    if(len/2 == 0)
        return;

    else {
        char tmp = *ptr;
        *ptr = *(ptr+len-1);
        *(ptr+len-1) = tmp;
        invertirCadena(++ptr, len-2);
    }
}

int strlen(char *cadena) {
    int len=0;
    for(; *cadena != '\0'; cadena++,len++);
    return len;
}


int main(){
    /*int a[]={2,3,1,5,4};
    int n=sizeof(a)/sizeof(int);
    iny y=n-1
    burbuja(a,n);

    cout<<"Ascendente ";
    for(int i=0;i<y;i++)
        cout<<a[i]<<" ";
    */

    char cadena[] = "ciencia";
    cout << strlen(cadena) << endl;
    invertirCadena(cadena, strlen(cadena));
    cout << cadena << endl;

    char arr[]="hola";
    cout<<sizeof(arr)/sizeof(char);
    return 0;
}







