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


private:
  long height;

};

#endif
