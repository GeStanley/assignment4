
using namespace std;

//#include "Shape.h"
#include <iostream>
#include <string>
#include "Canvas.h"
#include "BorderedCanvas.h"


int main()
{
  Canvas canvas(20,10);
  canvas.clear('-');
  cout << canvas.toString() << endl;
  

  BorderedCanvas bd(5,10);
  bd.clear('-');
  cout << bd.toString() << endl;
}
