#ifndef BEBEK_H
#define BEBEK_H

#include "../EggProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"
#include "../../../../Product/farm-product/DuckMeat.h"
#include "../../../../Product/farm-product/DuckEgg.h"

class Bebek : public EggProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Overrides */
    void eatFood();
    void talk();
    Product* interact();
    Product* kill();
};

#endif