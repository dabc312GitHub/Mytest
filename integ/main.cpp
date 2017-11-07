#include <iostream>

using namespace std;

/*
class Integer{
public:
    int val;
    Integer(int v=0){
        val=v; cout<<"constructor with arg:  "<<v<<endl;
    }
};
*/

class Integer{
public:
    int val;
    Integer(int val=0){
    this->val=val;
    }
    void setVal(int val){
        this->val=val;
    }
};

int main()
{/*
    Integer i(3);
    Integer j=5;
    */

    Integer i;
    Integer j(3);
     /*
    Integer a[]={Integer(2)

    */
    cout << "Hello World!" << endl;
    return 0;
}
