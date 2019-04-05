#ifndef BURUNG_H
#define BURUNG_H

#include "../MeatProducingFarmAnimal.h"

class Burung : public MeatProducingFarmAnimal
{
  public:
    /* Overrides */
    void eatFood();
    void talk();
    Product* interact();
    Product* kill();
};

#endif