#include <string>
#include <iostream>
#include <typeinfo>
#include "Canvas.h"
#include "Rectangle.h"


using namespace std;

Rectangle::Rectangle( const long & height,
                      const long & width,
                      const string & desc )
                      : Shape( desc , "Rectangle")
{
  setWidth(width);
  setHeight(height);
}

const long Rectangle::getWidth() const
{
  return width;
}

void Rectangle::setWidth( const long & w)
{
  width = w;
}

const long Rectangle::getHeight() const
{
  return height;
}

void Rectangle::setHeight( const long & h)
{
  height = h;
}

const long Rectangle::getVerticalExtent() const
{
  return height;
}

const long Rectangle::getHorizontalExtent() const
{
  return width;
}

const double Rectangle::getGeometricArea() const
{
  return height * width;
}

const long Rectangle::getScreenArea() const
{
  return height * width;
}

const double Rectangle::getGeometricPerimeter() const
{
  return 2*(height+width);
}

const long Rectangle::getScreenPerimeter() const
{
  return 2*(height+width)-4;
}

void Rectangle::draw(int c, int r, Canvas & canvas, char ch) const
{
  for(int row=0; row<getHeight(); row++)
    for(int col=0; col<getWidth(); col++)
      canvas.put(row+r, col+c, ch);
}
