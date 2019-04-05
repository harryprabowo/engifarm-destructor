#ifndef CELL_H
#define CELL_H

#include "../Renderables.h"

enum CELL_TYPE
{
  FACILITY,
  LAND
};

class Cell : public Renderables
{
public:
  Cell(int, int);
  /* Getter */
  int getX(); // returns cell position in map
  int getY();

private:
  const int x; // given by map
  const int y;
  Renderables r;
};

#endif