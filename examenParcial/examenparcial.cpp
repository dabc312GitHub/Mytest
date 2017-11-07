#include <iostream>
using namespace std;

void itoa(int n, char s[]){
    int i, sign;
    if((sign=n)<0)
        n=-n;
    i=0;

    do{
        s[i++]=n%10+'0';
    }        while((n/=10)>0);
    if(sign < 0)
        s[i++]='-';
    s[i]='\0';
    reverse(s);
}

void atof(char s[]){
    double val, power;
    int i, sign;
    for(i=0;isspace(s[i]); i++);

    sign = (s[i]=='-') ? -1 : 1;

    if(s[i]=='+')

}

int main(){
    int
}
