#include <string>
#include <iostream>
#include <math.h>
#include "Canvas.h"
#include "Rhombus.h"


using namespace std;

Rhombus::Rhombus( const int & diagonal,
                      const string & desc )
                      : Shape( desc , "Rhombus")
{
  if(diagonal%2==1)
    setDiagonal(diagonal);
  else
    setDiagonal(diagonal+1);
}

const int Rhombus::getDiagonal() const
{
  return diagonal;
}

void Rhombus::setDiagonal( const int & d)
{
  diagonal = d;
}

const int Rhombus::getVerticalExtent() const
{
  return diagonal;
}

const int Rhombus::getHorizontalExtent() const
{
  return diagonal;
}
const double Rhombus::getGeometricArea() const
{
  return (diagonal * diagonal)/2.0;
}
const int Rhombus::getScreenArea() const
{
  int n = diagonal/2;
  return 2*n*(n+1)+1;
}
const double Rhombus::getGeometricPerimeter() const
{
  return (2.0 * sqrt(2.0)) * diagonal;
}
const int Rhombus::getScreenPerimeter() const
{
  return 2*(diagonal-1);
}

void Rhombus::draw(int c, int r, Canvas & canvas, char ch) const
{

  //this part draws the top half of the diamond
  //as well as the center line
  int starsInRow = 1; //first row contains 1 star
  int offset = getDiagonal()/2-1; //offset from column

  for(int i=0; i<getDiagonal()/2+1; i++)
  {
    for(int j=0; j<starsInRow; j++)
        canvas.put(i+r, j+c+offset, ch);

    starsInRow += 2; //each row has 2 more stars
    offset -= 1; //the offset decreases by 1
  }

  //this part draws the bottom half of the diamond
  starsInRow = getDiagonal()-2;
  offset = 0;

  for(int i=getDiagonal()/2+1; i<getDiagonal(); i++)
  {
    for(int j=0; j<starsInRow; j++)
        canvas.put(i+r, j+c+offset, ch);

    starsInRow -= 2; //each row has 2 fewer stars
    offset += 1; //each row the offset increases by one
  }
}

void Rhombus::scale( const int & n)
{
  //check to ensure the Rhombus can be scaled
  if(getDiagonal()+n*2>=1)
    setDiagonal(getDiagonal()+n*2);
  //if not do nothing.
}
