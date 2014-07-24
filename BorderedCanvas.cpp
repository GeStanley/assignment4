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

  for(int i=1; i<grid.size()-1; i++)
    for(int j=1; j<grid[i].size()-1; j++)
      grid[i][j] = ch;
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

  for(int i=0; i<Canvas::geth(); i++)
  {
    for(int j=0; j<Canvas::getw(); j++)
    {

      if(i==0 || i==Canvas::geth()-1)
        grid[i][j] = '-';

      if(j==0 || j==Canvas::getw()-1)
        grid[i][j] = '|';

      if((i==0 && j==0) ||
          (i==0 && j==Canvas::getw()-1) ||
          (i==Canvas::geth()-1 && j==Canvas::getw()-1) ||
          (i==Canvas::geth()-1 && j==0))
        grid[i][j] = '+';

    }
  }
}
