#ifndef SHAPE_H_
#define SHAPE_H_

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
  virtual const long getVerticalExtent()=0;
  virtual const long getHorizontalExtent()=0;
  virtual const long getGeometricArea()=0;
  virtual const long getScreenArea()=0;
  virtual const long getGeometricPerimeter()=0;
  virtual const long getScreenPerimeter()=0;
  
  virtual const string testFunction();
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
