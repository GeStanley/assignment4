#include <string>
#include <math.h>
#include "Canvas.h"
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
  base = 2 * height - 1;
}

const long Isosceles::getVerticalExtent() const
{
  return height;
}

const long Isosceles::getHorizontalExtent() const
{
  return base;
}

const double Isosceles::getGeometricArea() const
{
  return (height * base)/2;
}

const long Isosceles::getScreenArea() const
{
  return height * height;
}

const double Isosceles::getGeometricPerimeter() const
{
  return base + 2*sqrt(0.25*(base*base)+(height*height));
}

const long Isosceles::getScreenPerimeter() const
{
  return 4*(height-1);
}

void Isosceles::draw(int c, int r, Canvas & canvas, char) const
{}
