
using namespace std;

//#include "Shape.h"
#include <iostream>
#include <string>
#include "Rectangle.h"

int main()
{
  Rectangle shape1(10L,15L);
  cout << shape1.getDescription() << endl;
  cout << shape1.getHeight() << endl;
  cout << shape1.getWidth() << endl;

  Rectangle shape2(25L,30L, "blah");//, "A Test Shape");
  cout << shape2.getDescription() << endl;
  cout << shape2.getHeight() << endl;
  cout << shape2.getWidth() << endl;
}
