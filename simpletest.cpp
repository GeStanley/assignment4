
using namespace std;

//#include "Shape.h"
#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Rhombus.h"
#include "RightIsosceles.h"
#include "Isosceles.h"
#include "Canvas.h"

int main()
{
  Rectangle shape1(10,15);
  cout << shape1.toString() << endl;


  Rectangle shape2(25,30, "A Test Shape");
  cout << shape2.toString() << endl;


  Rhombus shape3(10);
  cout << shape3.toString() << endl;


  Rhombus shape4(16, "Ace of diamond");
  cout << shape4.toString() << endl;


  Isosceles shape5(10);
  cout << shape5.toString() << endl;


  Isosceles shape6(25, "second isosceles");
  cout << shape6.toString() << endl;


  RightIsosceles shape7(10);
  cout << shape7.toString() << endl;


  RightIsosceles shape8(22, "second right isosceles");
  cout << shape8.toString() << endl;

  Canvas c1(20,20);
  c1.clear('.');
  shape1.draw(2,2,c1);
  cout << c1.toString() << endl;

  shape3.draw(5,5,c1,'o');
  cout << c1.toString() << endl;
}
