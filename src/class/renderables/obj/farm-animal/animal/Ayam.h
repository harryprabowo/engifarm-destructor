#ifndef AYAM_H
#define AYAM_H

#include "../EggProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"
#include "../../../../Product/farm-product/ChickenMeat.h"
#include "../../../../Product/farm-product/ChickenEgg.h"

class Ayam : public EggProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Constructor */
    Ayam(); // generate at random cell, set representation

    /* Overrides */
    void eatFood();
    void talk();
    Product* interact();
    Product* kill();
};

#endif