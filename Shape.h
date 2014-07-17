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
