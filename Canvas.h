#ifndef CANVAS_H_
#define CANVAS_H_

#include <vector>
using namespace std;

class Canvas
{
protected:
  vector<vector<char>> grid;
public:
  //**** constructors ****//
  Canvas (const int & , const int &);

  const string toString() const;

  //**** getters and setters ****//
  const int geth() const;
  void seth( const int & );
  const int getw() const;
  void setw( const int & );

  //**** virtual functions ****//
  virtual void clear(const char & = ' ');
  virtual void put(const int & , const int & , const char & = '*');
  virtual const char get(const int & , const int & ) const;
  virtual void decorate();

private:
  int height;
  int width;

};
  //*********
  //NON-MEMBER OPERATORS
  //extraction operator <<
  ostream & operator << ( ostream &, const Canvas & );
#endif
