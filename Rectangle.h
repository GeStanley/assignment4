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

  const long getVerticalExtent() override;
  const long getHorizontalExtent() override;
  const long getGeometricArea() override;
  const long getScreenArea() override;
  const long getGeometricPerimeter() override;
  const long getScreenPerimeter() override;

  const string testFunction() override;
private:
  long width;
  long height;
};

#endif
