#ifndef RHOMBUS_H_
#define RHOMBUS_H_

#include "Shape.h"

class Rhombus : public Shape
{
public:

  Rhombus(const long &,
            const string & ="Generic Rhomnus");

  //**** getters and setters ****//
  const long getDiagonal() const;
  void setDiagonal( const long & );


private:
  long diagonal;

};

#endif
