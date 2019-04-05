#ifndef KAMBING_H
#define KAMBING_H

#include "../MilkProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Kambing : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Constructor */
    Kambing(); // generate at random cell, set representation

    /* Overrides */
    void eatFood();
    void talk();
    Product* interact();
    Product* kill();
};

#endif