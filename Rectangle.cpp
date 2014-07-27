#include <string>
#include <iostream>
#include <typeinfo>
#include "Canvas.h"
#include "Rectangle.h"


using namespace std;

Rectangle::Rectangle( const int & width,
                      const int & height,
                      const string & desc )
                      : Shape( desc , "Rectangle")
{
  setWidth(width);
  setHeight(height);
}

const int Rectangle::getWidth() const
{
  return width;
}

void Rectangle::setWidth( const int & w)
{
  width = w;
}

const int Rectangle::getHeight() const
{
  return height;
}

void Rectangle::setHeight( const int & h)
{
  height = h;
}

const int Rectangle::getVerticalExtent() const
{
  return height;
}

const int Rectangle::getHorizontalExtent() const
{
  return width;
}

const double Rectangle::getGeometricArea() const
{
  return height * width;
}

const int Rectangle::getScreenArea() const
{
  return height * width;
}

const double Rectangle::getGeometricPerimeter() const
{
  return 2.0*(height+width);
}

const int Rectangle::getScreenPerimeter() const
{
  return 2*(height+width)-4;
}

void Rectangle::draw(int c, int r, Canvas & canvas, char ch) const
{
  for(int row=0; row<getHeight(); row++)
    for(int col=0; col<getWidth(); col++)
      canvas.put(row+r, col+c, ch);
}

void Rectangle::scale( const int & n)
{
  //make sure the rectangle can be scaled.
  if(getHeight()+n>=1 && getWidth()+n>=1)
    {
      setHeight(getHeight()+n);
      setWidth(getWidth()+n);
    }
  //if if can't. Do nothing.
}
