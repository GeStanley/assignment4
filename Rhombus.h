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

  const long getVerticalExtent() const override;
  const long getHorizontalExtent() const override;
  const double getGeometricArea() const override;
  const long getScreenArea() const override;
  const double getGeometricPerimeter() const override;
  const long getScreenPerimeter() const override;

private:
  long diagonal;

};

#endif
