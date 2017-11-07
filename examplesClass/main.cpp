#include <iostream>
#include <string>

#include "myclass.h"
using namespace std;

int main() {
  myClass ob1("David");
  myClass ob2("Amy");
  cout << ob1.getName();
  return 0;
}
