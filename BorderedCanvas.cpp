#include <string>
#include <iostream>
#include <typeinfo>
#include "BorderedCanvas.h"


using namespace std;

BorderedCanvas::BorderedCanvas( const int & height,
                      const int & width)
                      : Canvas( height, width )
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
