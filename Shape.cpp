#include <string>
#include <sstream>
#include <typeinfo>
#include <iostream>
#include "Shape.h"

using namespace std;

int Shape::numberOfShapes = 0;

Shape::Shape( const string & description,
              const string & name  )
{
  setDescription(description);
  setName(name);
  setIdNumber(++numberOfShapes);
}

const string Shape::toString() const
{
  stringstream result;

  result.precision(2);//set how many decimals are displayed by doubles.
  result << fixed;

  result << "Shape Information\n";
  result << "-----------------\n";
  result << "Type of this:  ";
  result << typeid(this).name();
  result << "\n";

  result << "Type of *this: ";
  result << typeid(*this).name();
  result << "\n";

  result << "Generic name:  " << getName() << "\n";
  result << "Description:   " << getDescription() << "\n";
  result << "id:            " << to_string(getIdNumber()) << "\n";
  result << "H extent:      " << to_string(getHorizontalExtent()) << "\n";
  result << "V extent:      " << to_string(getVerticalExtent()) << "\n";
  result << "Scr area:      " << to_string(getScreenArea()) << "\n";
  result << "Geo area:      " << getGeometricArea() << "\n";
  result << "Scr perimeter: " << to_string(getScreenPerimeter()) << "\n";
  result << "Geo perimiter: " << getGeometricPerimeter() << "\n";

  result << "\n";
  result << "\n";

  return result.str();
}

const int Shape::getIdNumber() const
{
  return idNumber;
}

void Shape::setIdNumber( const int & id)
{
  idNumber = id;
}

const string Shape::getName() const
{
  return name;
}

void Shape::setName( const string & n)
{
  name = n;
}

const string Shape::getDescription() const
{
  return description;
}

void Shape::setDescription( const string & d)
{
  description = d;
}

//********************* NON-MEMBER OPERATORS *********************//

ostream & operator << ( ostream &output, const Shape &shape )
{
  return output << shape.toString();
}
