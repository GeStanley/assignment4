#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Canvas.h"
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
public:

  Rectangle( const int &, const int &,
            const string & ="Generic Rectangle");

  //**** getters and setters ****//
  const int getWidth() const;
  void setWidth( const int & );
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
  int width;
  int height;
};

#endif
