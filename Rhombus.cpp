#include <string>
#include <math.h>
#include "Rhombus.h"


using namespace std;

Rhombus::Rhombus( const long & diagonal,
                      const string & desc )
                      : Shape( desc , "Rhombus")
{
  if(diagonal%2==1)
    setDiagonal(diagonal);
  else
    setDiagonal(diagonal+1);
}

const long Rhombus::getDiagonal() const
{
  return diagonal;
}

void Rhombus::setDiagonal( const long & d)
{
  diagonal = d;
}

const long Rhombus::getVerticalExtent() const
{
  return diagonal;
}

const long Rhombus::getHorizontalExtent() const
{
  return diagonal;
}
const long Rhombus::getGeometricArea() const
{
  return (diagonal * diagonal)/2;
}
const long Rhombus::getScreenArea() const
{
  long n = diagonal/2;
  return 2*n*(n+1)+1;
}
const long Rhombus::getGeometricPerimeter() const
{
  return (2 * sqrt(2)) * diagonal;
}
const long Rhombus::getScreenPerimeter() const
{
  return 2*(diagonal-1);
}
