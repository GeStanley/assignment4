#ifndef ISOSCELES_H_
#define ISOSCELES_H_

#include "Canvas.h"
#include "Shape.h"

class Isosceles : public Shape
{
public:

  Isosceles(const long &,
            const string & ="Generic Isosceles Triangle");

  //**** getters and setters ****//
  const long getHeight() const;
  void setHeight( const long & );

  const long getVerticalExtent() const override;
  const long getHorizontalExtent() const override;
  const double getGeometricArea() const override;
  const long getScreenArea() const override;
  const double getGeometricPerimeter() const override;
  const long getScreenPerimeter() const override;
  void draw(int c, int r, Canvas & canvas, char ch = '*') const override;

private:
  long height;
  long base;

};

#endif
