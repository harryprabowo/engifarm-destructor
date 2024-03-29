#ifndef CELL_H
#define CELL_H

#include "../Renderables.h"

class Cell : public Renderables // ABC
{
public:
  Cell(int, int);
  /* Getter */
  int getX(); // returns cell position in map
  int getY();

  Renderables *getRenderable();
  void setRenderable(Renderables *);

private:
  int x; // given by map
  int y;
  Renderables *r;
};

#endif