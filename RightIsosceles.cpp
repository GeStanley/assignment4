#include <string>
#include <math.h>
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
  base = height;
}

const long RightIsosceles::getVerticalExtent() const
{
  return height;
}

const long RightIsosceles::getHorizontalExtent() const
{
  return height;
}

const long RightIsosceles::getGeometricArea() const
{
  return (height * height)/2;
}

const long RightIsosceles::getScreenArea() const
{
  return height*(height + 1)/2;
}

const long RightIsosceles::getGeometricPerimeter() const
{
  return (2+sqrt(2)) * height;
}

const long RightIsosceles::getScreenPerimeter() const
{
  return 3*(height-1);
}
