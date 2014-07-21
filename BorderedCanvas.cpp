#include <string>
#include <iostream>
#include <typeinfo>
#include "BorderedCanvas.h"


using namespace std;

BorderedCanvas::BorderedCanvas( const long & height,
                      const long & width)
                      : Canvas( heigh, width )
{
  decorate();
}
