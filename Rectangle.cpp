#include <string>
#include "Rectangle.h"


using namespace std;

Rectangle::Rectangle( const long & width,
                      const long & height,
                      const string & desc )
                      : Shape( desc )
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
