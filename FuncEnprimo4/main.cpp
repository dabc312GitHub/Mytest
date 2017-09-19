#include <iostream>
using namespace std;

int primo(int n){
    int a=0,i;
    for(i=1;i<n;i++){
        if(n%i==0)
            a++;
    }
    return (a==1);

}



int main(){
    int b,x;
    int y=0;
    cout<<"para los X valores" << endl;
    cin>>x;
    cout << "el enesimo primo"<<endl;
    cin>>b;
    for(int a=0;a<x;a++){
        if(primo(a)==1){
            y++;
            if(b==y)
                cout<<"Es: \t"<<a<<endl;
        }
    }

    return 0;
}
