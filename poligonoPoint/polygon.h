#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>

using namespace std;

class polygon
{
protected:
  double base, altura;
public:
  polygon (double, double);
  polygon (double);
  polygon ();
  virtual double area () =0;
  void printArea();
};

#endif // POLYGON_H

