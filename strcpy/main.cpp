#include <iostream>

using namespace std;

void strcpy(char s[], char t[]){
    int i;
    for(i=0;s[i]!='\0';i++)
        t[i] = s[i];
    t[i]='\0';
}

void strcpy1(char *s, char *t){
    while( *t++ = *s++  ); }

int main()
{
    char s[]="cien";
    char t[1000];
    strcpy1(s,t);

    cout << t << endl;

    return 0;
}
