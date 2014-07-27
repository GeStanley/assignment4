#ifndef RHOMBUS_H_
#define RHOMBUS_H_

#include "Canvas.h"
#include "Shape.h"

class Rhombus : public Shape
{
public:

  Rhombus(const int &,
            const string & ="Generic Rhomnus");

  //**** getters and setters ****//
  const int getDiagonal() const;
  void setDiagonal( const int & );

  const int getVerticalExtent() const override;
  const int getHorizontalExtent() const override;
  const double getGeometricArea() const override;
  const int getScreenArea() const override;
  const double getGeometricPerimeter() const override;
  const int getScreenPerimeter() const override;
  void draw(int c, int r, Canvas & canvas, char ch = '*') const override;
  void scale( const int & ) override;

private:
  int diagonal;

};

#endif
