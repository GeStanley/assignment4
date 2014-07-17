#include <string>
#include <typeinfo>
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
  string result;

  result+="Shape Information\n";
  result+="-----------------\n";
  result+="Type of this:  ";
  result+=typeid(this).name();
  result+="\n";
  result+="Type of *this: ";
  result+=typeid(*this).name();
  result+="\n";
  result+="Generic name:  " + getName() + "\n";
  result+="Description:   " + getDescription() + "\n";
  result+="id:            " + to_string(getIdNumber()) + "\n";
  result+="H extent:      \n";
  result+="V extent:      \n";
  result+="Scr area:      \n";
  result+="Geo area:      \n";
  result+="Scr perimeter: \n";
  result+="Geo perimiter: \n";

  return result;
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
