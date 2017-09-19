#include <iostream>

using namespace std;
// no acepte valores negativos
int main()
{
    short number;
    cout << "Enter a number: "<< endl;
    cin >> number;
    cout << "The factorial of " << number << " is " << endl;
    int accumalator = 1;
    for (; number > 0 ; accumalator *= number--);
        if(accumalator<0)
        cout << accumalator << ".\n";


        else
        cout << "no esta en el rango";

    return 0;
}
