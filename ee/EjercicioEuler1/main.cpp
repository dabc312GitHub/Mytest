#include <iostream>
using namespace std;


int main()
{
     int answer = 0;
     for (int i = 0; i < 1000; i++){
          if ((i%3 == 0) || (i%5 == 0))
          answer += i;
     }
     cout << endl << "The sum of all natural multiples (remainder method) of 3 and 5 between 0 and 1000 is " << answer << endl;
     return 0;
}
