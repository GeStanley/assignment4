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
  void setName( const string & );
  const string getDescription() const;
  void setDescription( const string & );


  //**** virtual functions ****//
  virtual const long getVerticalExtent() const =0;
  virtual const long getHorizontalExtent() const =0;
  virtual const double getGeometricArea() const =0;
  virtual const long getScreenArea() const =0;
  virtual const double getGeometricPerimeter() const =0;
  virtual const long getScreenPerimeter() const =0;
  virtual void draw(int c, int r, Canvas & canvas, char ch = '*') const = 0;

  //void scale( const int & );
  //const long computeArea() const;
  //const long computePerimeter() const;

private:
  static int numberOfShapes;
  int idNumber;
  string name;
  string description;

};

#endif
