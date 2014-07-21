#ifndef BORDEREDCANVAS_H_
#define BORDEREDCANVAS_H_

#include <vector>
using namespace std;

class BorderedCanvas : public Canvas
{
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
  virtual void decorate() = 0;

private:
  int height;
  int width;
  vector<vector<char>> grid;
};

#endif
