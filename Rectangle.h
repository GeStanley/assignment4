#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
public:

  Rectangle( const long &, const long &,
            const string & ="Generic Rectangle");

  //**** getters and setters ****//
  const long getWidth() const;
  void setWidth( const long & );
  const long getHeight() const;
  void setHeight( const long & );


private:
  long width;
  long height;
};

#endif
