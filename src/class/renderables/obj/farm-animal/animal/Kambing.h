#ifndef KAMBING_H
#define KAMBING_H

#include "../MilkProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Kambing : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Overrides */
    void eatFood();
    void talk();
    Product* interact();
    Product* kill();
};

#endif