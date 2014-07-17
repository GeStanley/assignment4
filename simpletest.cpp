
using namespace std;

//#include "Shape.h"
#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Rhombus.h"
#include "Isosceles.h"
#include "RightIsosceles.h"

int main()
{
  Rectangle shape1(10,15);
  cout << shape1.toString() << endl;
  cout << "height:" << shape1.getHeight() << endl;
  cout << "width" << shape1.getWidth() << endl;

  Rectangle shape2(25,30, "A Test Shape");
  cout << shape2.toString() << endl;
  cout << "height:" << shape2.getHeight() << endl;
  cout << "width" << shape2.getWidth() << endl;

  Rhombus shape3(10);
  cout << shape3.toString() << endl;
  cout << "diagonal" << shape3.getDiagonal() << endl;

  Rhombus shape4(25, "second rhombus");
  cout << shape4.toString() << endl;
  cout << "diagonal" << shape4.getDiagonal() << endl;

  Isosceles shape5(10);
  cout << shape5.toString() << endl;
  cout << "height:" <<  shape5.getHeight() << endl;

  Isosceles shape6(25, "second isosceles");
  cout << shape6.toString() << endl;
  cout << "height:" <<  shape6.getHeight() << endl;

  RightIsosceles shape7(34);
  cout << shape7.toString() << endl;
  cout << "height:" <<  shape7.getHeight() << endl;

  RightIsosceles shape8(22, "second right isosceles");
  cout << shape8.toString() << endl;
  cout << "height:" <<  shape8.getHeight() << endl;

}
