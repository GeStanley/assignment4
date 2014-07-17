#include <string>
#include "Isosceles.h"


using namespace std;

Isosceles::Isosceles( const long & height,
                      const string & desc )
                      : Shape( desc , "Isosceles")
{
  setHeight(height);
}

const long Isosceles::getHeight() const
{
  return height;
}

void Isosceles::setHeight( const long & h)
{
  height = h;
}
