#include <string>
#include "Shape.h"

using namespace std;

Shape::Shape( const string & description )
{
  setDescription(description);
}

const string Shape::getDescription() const
{
  return description;
}

void Shape::setDescription( const string & d)
{
  description = d;
}
