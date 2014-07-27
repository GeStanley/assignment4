#include <string>
#include <math.h>
#include "Canvas.h"
#include "Isosceles.h"


using namespace std;

Isosceles::Isosceles( const int & height,
                      const string & desc )
                      : Shape( desc , "Isosceles")
{
  setHeight(height);
}

const int Isosceles::getHeight() const
{
  return height;
}

void Isosceles::setHeight( const int & h)
{
  height = h;
  base = 2 * height - 1;
}

const int Isosceles::getVerticalExtent() const
{
  return height;
}

const int Isosceles::getHorizontalExtent() const
{
  return base;
}

const double Isosceles::getGeometricArea() const
{
  return (height * base)/2.0;
}

const int Isosceles::getScreenArea() const
{
  return height * height;
}

const double Isosceles::getGeometricPerimeter() const
{
  return base + 2.0*sqrt(0.25*(base*base)+(height*height));
}

const int Isosceles::getScreenPerimeter() const
{
  return 4*(height-1);
}

void Isosceles::draw(int c, int r, Canvas & canvas, char ch) const
{
  int starsInRow = 1;
  int offset = getHeight()-1;

  for(int i=0; i<getHeight(); i++)
  {
    for(int j=0; j<starsInRow; j++)
        canvas.put(i+r, j+c+offset, ch);

    starsInRow += 2;
    offset -= 1;
  }
}

void Isosceles::scale( const int & n)
{
  //test to ensure the Isosceles can be scaled.
  if(getHeight()+n>=1)
    setHeight(getHeight()+1);
  //if not, do nothing.

}
