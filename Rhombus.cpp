#include <string>
#include <iostream>
#include <math.h>
#include "Canvas.h"
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
const double Rhombus::getGeometricArea() const
{
  return (diagonal * diagonal)/2;
}
const long Rhombus::getScreenArea() const
{
  long n = diagonal/2;
  return 2*n*(n+1)+1;
}
const double Rhombus::getGeometricPerimeter() const
{
  return (2 * sqrt(2)) * diagonal;
}
const long Rhombus::getScreenPerimeter() const
{
  return 2*(diagonal-1);
}

void Rhombus::draw(int c, int r, Canvas & canvas, char ch) const
{

  //this part draws the top half of the diamond
  //as well as the center line
  int starsInRow = 1;
  int offset = getDiagonal()/2-1;

  for(int i=0; i<getDiagonal()/2+1; i++)
  {
    for(int j=0; j<starsInRow; j++)
        canvas.put(i+r, j+c+offset, ch);

    starsInRow += 2;
    offset -= 1;
  }

  //this part draws the bottom half of the diamond
  starsInRow = getDiagonal()-2;
  offset = 0;

  for(int i=getDiagonal()/2+1; i<getDiagonal(); i++)
  {
    for(int j=0; j<starsInRow; j++)
        canvas.put(i+r, j+c+offset, ch);

    starsInRow -= 2;
    offset += 1;
  }
}
