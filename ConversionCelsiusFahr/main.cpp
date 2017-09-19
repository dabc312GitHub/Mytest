#include <iostream>

using namespace std;

/*
int main()
{
    int fahr, celsius;
    int lower,upper,step;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;
    while(fahr<=upper){
        celsius=5*(fahr-32)/9;
        cout<<fahr<<"\t"<<celsius<<endl;
        fahr=fahr+step;
    }

    cout << "Hello world!" << endl;
    return 0;
}
*/

int main()
{
    int fahr;
    for(int fahr=0;fahr<=300;fahr=fahr+20){
            cout<<fahr<<"\t"<<5*(fahr-32)/9<<endl;

    }
    return 0;

}
