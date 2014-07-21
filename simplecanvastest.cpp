
using namespace std;

//#include "Shape.h"
#include <iostream>
#include <string>
#include "Canvas.h"


int main()
{
  Canvas canvas(20,10);
  canvas.clear('-');
  cout << canvas.toString() << endl;

}
