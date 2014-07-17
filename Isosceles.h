#ifndef ISOSCELES_H_
#define ISOSCELES_H_

#include "Shape.h"

class Isosceles : public Shape
{
public:

  Isosceles(const long &,
            const string & ="Generic Isosceles Triangle");

  //**** getters and setters ****//
  const long getHeight() const;
  void setHeight( const long & );


private:
  long height;

};

#endif
