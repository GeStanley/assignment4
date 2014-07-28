#include <string>
#include <iostream>
#include <typeinfo>
#include "FramedCanvas.h"


using namespace std;

FramedCanvas::FramedCanvas( const int & width,
                      const int & height,
                      const string & title)
                      : Canvas( width + 2, height + 4 )
{
  this->title = title;
  decorate();
}

void FramedCanvas::clear(const char & ch)
{
  //iterate through each cell in the client area.
  //start at row 3 and column 1 to adjust for frame.
  for(int i=3; i<grid.size()-1; i++)
    for(int j=1; j<grid[i].size()-1; j++)
      grid[i][j] = ch;
}

void FramedCanvas::put(const int & i, const int & j, const char & ch )
{//first test to see if the parameters past are in the range of the vectors
  //then adjust them to fit within the borders
  if(i>=0 && j>=0 && i<Canvas::geth()-4 && j<Canvas::getw()-2)
    grid[i+3][j+1] = ch;
}

const char FramedCanvas::get(const int & i, const int & j ) const
{//first test to see if the parameters past are in the range of the vectors
  //then adjust them to fit within the borders
  if(i>=0 && j>=0 && i<Canvas::geth()-4 && j<Canvas::getw()-2)
    return grid[i+3][j+1];
  else//return null ptr
    return 0;
}

void FramedCanvas::decorate()
{

  int index=0;
  //insert the title
  for(char c : title)
  {
    grid[1].at(1+index) = c;
    index++;
  }

  //iterate through each coordinate in the grid.
  for(int i=0; i<Canvas::geth(); i++)
  {
    for(int j=0; j<Canvas::getw(); j++)
    {
      //if it's at the top of the bottom form a
      //vertical border
      if(i==0 || i==2 || i==Canvas::geth()-1)
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
