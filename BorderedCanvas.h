#ifndef BORDEREDCANVAS_H_
#define BORDEREDCANVAS_H_


#include <vector>
#include "Canvas.h"
using namespace std;

class BorderedCanvas : public Canvas
{
public:
  //**** constructors ****//
  BorderedCanvas (const int & , const int &);

  //**** virtual functions ****//
  void clear(const char & = ' ') override;
  void put(const int & , const int & , const char & = '*') override;
  const char get(const int & , const int & ) const override;
  void decorate() override;

};

#endif
