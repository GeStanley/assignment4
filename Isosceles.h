#ifndef ISOSCELES_H_
#define ISOSCELES_H_

#include "Canvas.h"
#include "Shape.h"

class Isosceles : public Shape
{
public:

  Isosceles(const int &,
            const string & ="Generic Isosceles Triangle");

  //**** getters and setters ****//
  const int getHeight() const;
  void setHeight( const int & );

  const int getVerticalExtent() const override;
  const int getHorizontalExtent() const override;
  const double getGeometricArea() const override;
  const int getScreenArea() const override;
  const double getGeometricPerimeter() const override;
  const int getScreenPerimeter() const override;
  void draw(int c, int r, Canvas & canvas, char ch = '*') const override;
  void scale( const int & ) override;

private:
  int height;
  int base;

};

#endif
