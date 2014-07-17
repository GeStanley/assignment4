#include <string>
#include "Rhombus.h"


using namespace std;

Rhombus::Rhombus( const long & diagonal,
                      const string & desc )
                      : Shape( desc , "Rhombus")
{
  setDiagonal(diagonal);
}

const long Rhombus::getDiagonal() const
{
  return diagonal;
}

void Rhombus::setDiagonal( const long & d)
{
  diagonal = d;
}
