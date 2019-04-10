#ifndef ULAR_H
#define ULAR_H

#include "../EggProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"
#include "../../../../Product/farm-product/SnakeMeat.h"
#include "../../../../Product/farm-product/SnakeEgg.h"

class Ular : public EggProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Overrides */
    void eatFood();
    void talk();
    Product* interact();
    Product* kill();
};

#endif