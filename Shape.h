#ifndef SHAPE_H_
#define SHAPE_H_

#include "Canvas.h"
using namespace std;

class Shape
{
public:
  //**** constructors ****//
  Shape( const string &, const string & );

  const string toString() const;

  //**** getters and setters ****//
  const int getIdNumber() const;
  void setIdNumber( const int & );
  const string getName() const;
  const string getDescription() const;
  void setDescription( const string & );


  //**** virtual functions ****//
  virtual const int getVerticalExtent() const = 0;
  virtual const int getHorizontalExtent() const = 0;
  virtual const double getGeometricArea() const = 0;
  virtual const int getScreenArea() const = 0;
  virtual const double getGeometricPerimeter() const = 0;
  virtual const int getScreenPerimeter() const = 0;
  virtual void draw(int c, int r, Canvas & canvas, char ch = '*') const = 0;
  virtual void scale( const int & ) = 0;


private:
  static int numberOfShapes;
  int idNumber;
  string name;
  string description;

  void setName( const string & );
};
  //*********
  //NON-MEMBER OPERATORS
  //extraction operator <<
  ostream & operator << ( ostream &, const Shape & );
#endif
