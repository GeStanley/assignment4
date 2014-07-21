#include <string>
#include <iostream>
#include <typeinfo>
#include "BorderedCanvas.h"


using namespace std;

BorderedCanvas::BorderedCanvas( const int & height,
                      const int & width)
                      : Canvas( height + 2, width + 2 )
{
  decorate();
}

void BorderedCanvas::clear(const char & ch)
{
  //Canvas::clear(ch);
}

void BorderedCanvas::put(const int & i, const int & j, const char & ch )
{
  grid[i+1][j+1] = ch;
}

const char BorderedCanvas::get(const int & i, const int & j ) const
{
  return grid[i+1][j+1];
}

void BorderedCanvas::decorate()
{
  cout << "this is bc's decoreate function..." << endl;

  for(int i=0; i<Canvas::getw(); i++)
  {
    for(int j=0; j>Canvas::geth(); j++)
    {
      if(i==0 || i==Canvas::getw()-1)
        grid[i][j] = '_';

      if(j==0 || j==Canvas::geth()-1)
        grid[i][j] = '|';
    }
  }
}
