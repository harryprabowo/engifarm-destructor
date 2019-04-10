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

  FarmAnimal *getAnimal();
  void setAnimal(FarmAnimal *);

private:
  int x; // given by map
  int y;
  FarmAnimal *animal;
};

#endif