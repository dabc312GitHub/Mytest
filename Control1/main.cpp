#include <iostream>

using namespace std;


int main(){
    int i=0,j=0;
    cout<<"arr[][]: {";
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    while(j<3){
    cout<<arr[0][j]<<", ";
    j++;
    }

    while(i<3){
    cout<<arr[i][3]<<", ";
    i++;
    }
    while(j>0){
    cout<<arr[3][j]<<", ";
    j--;
    }
    while(i>0){
    cout<<arr[i][0]<<", ";
    i--;
    }

    i++, j++;

    while(j<3){
    cout<<arr[i][j]<<", ";
    j++;
    }

    i++;j--;

    while(j>0){
    cout<<arr[i][j];
    if(j!=1)
    cout<<", ";
    --j;

    }

    cout<<"}";
    return 0;
}
