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

  const long getVerticalExtent() const override;
  const long getHorizontalExtent() const override;
  const double getGeometricArea() const override;
  const long getScreenArea() const override;
  const double getGeometricPerimeter() const override;
  const long getScreenPerimeter() const override;
  void draw(int c, int r, Canvas & canvas, char ch = '*') const override;

private:
  long width;
  long height;
};

#endif
