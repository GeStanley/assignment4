#include <string>
#include <math.h>
#include "Canvas.h"
#include "RightIsosceles.h"


using namespace std;

RightIsosceles::RightIsosceles( const int & height,
                      const string & desc )
                      : Shape( desc , "Right Isosceles")
{
  setHeight(height);
}

const int RightIsosceles::getHeight() const
{
  return height;
}

void RightIsosceles::setHeight( const int & h)
{
  height = h;
  base = height;
}

const int RightIsosceles::getVerticalExtent() const
{
  return height;
}

const int RightIsosceles::getHorizontalExtent() const
{
  return height;
}

const double RightIsosceles::getGeometricArea() const
{
  return (height * height)/2.0;
}

const int RightIsosceles::getScreenArea() const
{
  return height*(height + 1)/2;
}

const double RightIsosceles::getGeometricPerimeter() const
{
  return (2.0+sqrt(2.0)) * height;
}

const int RightIsosceles::getScreenPerimeter() const
{
  return 3*(height-1);
}

void RightIsosceles::draw(int c, int r, Canvas & canvas, char ch) const
{
  int starsInRow = 1;

  for(int i=0; i<getHeight(); i++)
  {
    for(int j=0; j<starsInRow; j++)
      canvas.put(i+r, j+c, ch);

    starsInRow++;
  }
}

void RightIsosceles::scale( const int & n)
{
  //test to ensure the Isosceles can be scaled.
  if(getHeight()+n>=1)
    setHeight(getHeight()+1);
  //if not, do nothing.
}
