#ifndef SAPI_H
#define SAPI_H

#include "../MilkProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"
#include "../../../../Product/farm-product/CowMeat.h"
#include "../../../../Product/farm-product/CowMilk.h"

class Sapi : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Overrides */
    void eatFood();
    void talk();
    Product* interact();
    Product* kill();
};

#endif