#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>

using namespace std;

class polygon
{
protected:
  double base, altura;
  string figura;

public:
  polygon (string, double, double);
  polygon (string, double);
  virtual string tipo()=0;
  virtual double area ()=0;

  void printArea();
};

#endif // POLYGON_H

