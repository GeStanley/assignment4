#include <string>
#include "RightIsosceles.h"


using namespace std;

RightIsosceles::RightIsosceles( const long & height,
                      const string & desc )
                      : Shape( desc , "Right Isosceles")
{
  setHeight(height);
}

const long RightIsosceles::getHeight() const
{
  return height;
}

void RightIsosceles::setHeight( const long & h)
{
  height = h;
}
