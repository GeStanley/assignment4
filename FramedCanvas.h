#ifndef FRAMEDCANVAS_H_
#define FRAMEDCANVAS_H_


#include <vector>
#include "Canvas.h"
using namespace std;

class FramedCanvas : public Canvas
{
public:
  //**** constructors ****//
  FramedCanvas (const int & , const int &, const string & = "A framed canvas");

  //**** virtual functions ****//
  void clear(const char & = ' ') override;
  void put(const int & , const int & , const char & = '*') override;
  const char get(const int & , const int & ) const override;
  void decorate() override;

private:
  string title;
};

#endif
