#ifndef SHAPE_H_
#define SHAPE_H_

using namespace std;

class Shape
{
public:
  //**** constructors ****//
  Shape( const string & );

  //**** getters and setters ****//
  //const long getIdNumber() const;
  //void setIdNumber( const long & );
  //const string getName() const;
  //void setName( const string & );
  const string getDescription() const;
  void setDescription( const string & );

  //void scale( const int & );
  //const long computeArea() const;
  //const long computePerimeter() const;

private:
  //int idNumber;
  //string name;
  string description;

};

#endif
