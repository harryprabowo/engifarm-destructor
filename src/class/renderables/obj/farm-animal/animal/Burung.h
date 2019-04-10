#ifndef BURUNG_H
#define BURUNG_H

#include "../MeatProducingFarmAnimal.h"
#include "../../../../Product/farm-product/BirdMeat.h"

class Burung : public MeatProducingFarmAnimal
{
  public:
    /* Overrides */
    void eatFood();
    void talk();
    Product* kill();
};

#endif