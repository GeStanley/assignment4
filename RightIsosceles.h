#ifndef RIGHTISOSCELES_H_
#define RIGHTISOSCELES_H_

#include "Shape.h"

class RightIsosceles : public Shape
{
public:

  RightIsosceles(const long &,
            const string & ="Generic Right Isosceles Triangle");

  //**** getters and setters ****//
  const long getHeight() const;
  void setHeight( const long & );

  const long getVerticalExtent() const override;
  const long getHorizontalExtent() const override;
  const double getGeometricArea() const override;
  const long getScreenArea() const override;
  const double getGeometricPerimeter() const override;
  const long getScreenPerimeter() const override;

private:
  long height;
  long base;

};

#endif
