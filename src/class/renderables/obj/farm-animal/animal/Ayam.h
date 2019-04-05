#ifndef AYAM_H
#define AYAM_H

#include "../EggProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"
#include "../../../../Product/farm-product/ChickenMeat.h"
#include "../../../../Product/farm-product/ChickenEgg.h"

class Ayam : public EggProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Overrides */
    void eatFood();
    void talk();
    Product* interact();
    Product* kill();
};

#endif