#include <string>
#include <iostream>
#include <typeinfo>
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

const long Rectangle::getGeometricArea() const
{
  return height * width;
}

const long Rectangle::getScreenArea() const
{
  return height * width;
}

const long Rectangle::getGeometricPerimeter() const
{
  return 2*(height+width);
}

const long Rectangle::getScreenPerimeter() const
{
  return 2*(height+width)-4;
}
