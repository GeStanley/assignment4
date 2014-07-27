#include <string>
#include <vector>
#include <iostream>
#include "Canvas.h"
using namespace std;

Canvas::Canvas(const int & width, const int & height)
{
  setw(width);
  seth(height);

  grid.resize( height ,vector<char>( width , ' '));
}

const string Canvas::toString() const
{

  string result="";

  for(vector<char> v : grid) //get each row
    {
      for(char c : v)//get each column
        {
          result += c;//add element to the string
        }

        result += '\n';//create a row
    }

  return result;
}

const int Canvas::geth() const
{
  return height;
}

void Canvas::seth( const int & h )
{
  height = h;
}

const int Canvas::getw() const
{
  return width;
}

void Canvas::setw( const int & w )
{
  width = w;
}

void Canvas::put(const int & i, const int & j, const char & ch )
{
  if(i>=0 && j>=0 && i<geth() && j<getw())
    grid[i][j] = ch;
}

const char Canvas::get(const int & i, const int & j ) const
{
  if(i>=0 && j>=0 && i<geth() && j<getw())
    return grid[i][j];
  else
    return 0;
}

void Canvas::clear(const char & ch)
{
  for(int i=0; i<grid.size(); i++)
    for(int j=0; j<grid[i].size(); j++)
      grid[i][j] = ch;

}

void Canvas::decorate()
{
  //Doesn't need an implementation.
  //Nothing to decorate.
}

//********************* NON-MEMBER OPERATORS *********************//

ostream & operator << ( ostream &output, const Canvas &canvas )
{
   return output << canvas.toString();
}
