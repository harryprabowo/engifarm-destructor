#ifndef CELL_H
#define CELL_H

#include <tuple>

#include "../Renderables.h"

class Cell : public Renderables // ABC
{
public:
  /* Getter */
  tuple<int, int> getPosition(); // returns cell position in map

  /* Overrides */
  void setRender(char); //override Renderables method

private:
  const tuple<int, int> position; // given by map
};

#endif