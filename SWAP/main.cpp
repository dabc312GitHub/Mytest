#include <iostream>

using namespace std;

/*
void swaps(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}

int main()
{
    int x=2, y=3;
    swaps(x,y); //copia del valor x ; y
    cout << x << " " << y << endl;//para q funcione debe ser paso por referencia
    return 0;
}
*/

/*
int main(){
    int x=5;
    int *p=&x;
    cout<<*p<<endl;
    cout<<p<<endl;
    return 0;
}
*/



/*
int sumar(int arr[], int n){
    int sum=0;
    if(p==4)
        return sum;
    return sum+sumar(p++,n);
}
*/

int sum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=*(arr++);
    return sum;
}

int st(char *s){
    int i, len=0;
    for(i=0;*(s++)!='\0';i++)
        len++;
    return len;
}

int cadenas(char *s){
    char *p=s;
    while(*p!='\0')
        p++;
    return p-s;
}

int main(){
    int a[]={11,12,13,14};
    char cadena[]="ciencia";
/*
    int x, y, sum=0, *pa;

    pa = &a[0];
    x = *pa;
    y = *(pa+2);
    y+=3;
    cout<<*pa<<" "<<x<<" "<<y<<" "<<a[2];

    for(int i=0;i<4;i++)
        sum+=*(pa++);
    cout<<sum;
*/
    cout<<sum(a,4)<<endl;
    cout<<cadenas(cadena);

    return 0;
}






