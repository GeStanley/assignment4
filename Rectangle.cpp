#include <string>
#include <iostream>
#include <typeinfo>
#include "Rectangle.h"


using namespace std;

Rectangle::Rectangle( const long & width,
                      const long & height,
                      const string & desc )
                      : Shape( desc , "Rectangle")
{
  setWidth(width);
  setHeight(height);

  cout << "Rectangle is calling test function : " << testFunction() << endl;
  cout << "Rectangle calls base class Shape test function : " << Shape::testFunction() << endl;
  cout << "this" << typeid(this).name() << endl;
  cout << "*this" << typeid(*this).name() << endl;
}

const long Rectangle::getWidth() const
{
  return width;
}

void Rectangle::setWidth( const long & w)
{
  width = w;
}

const long Rectangle::getHeight() const
{
  return height;
}

void Rectangle::setHeight( const long & h)
{
  height = h;
}

const long Rectangle::getVerticalExtent()
{
  return 999L;
}

const long Rectangle::getHorizontalExtent()
{}
const long Rectangle::getGeometricArea()
{}
const long Rectangle::getScreenArea()
{}
const long Rectangle::getGeometricPerimeter()
{}
const long Rectangle::getScreenPerimeter()
{}

const string Rectangle::testFunction()
{
  return "derive";
}
