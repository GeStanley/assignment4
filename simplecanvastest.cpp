
using namespace std;

//#include "Shape.h"
#include <iostream>
#include <string>
#include "Canvas.h"
#include "BorderedCanvas.h"
#include "FramedCanvas.h"

int main()
{
  Canvas canvas(20,10);
  canvas.clear('-');
  cout << canvas.toString() << endl;
  

  BorderedCanvas bd(5,10);
  bd.clear('.');
  cout << bd.toString() << endl;

  FramedCanvas fd(15,5);
  fd.clear('.');
  cout << fd.toString() << endl;

  FramedCanvas fd1(15,10, "testing");
  fd1.clear('.');
  cout << fd1.toString() << endl;

}
