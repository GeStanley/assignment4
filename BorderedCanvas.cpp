#include <string>
#include <iostream>
#include <typeinfo>
#include "BorderedCanvas.h"


using namespace std;

BorderedCanvas::BorderedCanvas( const int & width,
                      const int & height )
                      : Canvas( width + 2, height + 2 )
{ //use the parent constructor then decorate
  decorate();
}

void BorderedCanvas::clear(const char & ch)
{ //loops start at 1 and stop at size -1
  //to adjust for borders
  for(int i=1; i<grid.size()-1; i++)
    for(int j=1; j<grid[i].size()-1; j++)
      grid[i][j] = ch;
}

void BorderedCanvas::put(const int & i, const int & j, const char & ch )
{ //first test to see if the parameters past are in the range of the vectors
  //then adjust them to fit within the borders
  if(i>=0 && j>=0 && i<Canvas::geth()-2 && j<Canvas::getw()-2)
    grid[i+1][j+1] = ch;
}

const char BorderedCanvas::get(const int & i, const int & j ) const
{ //first test to see if the parameters past are in the range of the vectors
  //then adjust them to fit within the borders
  if(i>=0 && j>=0 && i<Canvas::geth()-2 && j<Canvas::getw()-2)
    return grid[i+1][j+1];
  else//if they don't fit, return null pointer.
    return 0;
}

void BorderedCanvas::decorate()
{
  //iterate through each coordinate in the grid.
  for(int i=0; i<Canvas::geth(); i++)
  {
    for(int j=0; j<Canvas::getw(); j++)
    {
      //if it's at the top of the bottom form a
      //vertical border
      if(i==0 || i==Canvas::geth()-1)
        grid[i][j] = '-';

      //if it's on the left or right form a
      //horizontal border
      if(j==0 || j==Canvas::getw()-1)
        grid[i][j] = '|';

      //replace the previously inserted borders with +
      //in the four corners
      if((i==0 && j==0) ||
          (i==0 && j==Canvas::getw()-1) ||
          (i==Canvas::geth()-1 && j==Canvas::getw()-1) ||
          (i==Canvas::geth()-1 && j==0))
        grid[i][j] = '+';

    }
  }
}
