#ifndef ULAR_H
#define ULAR_H

#include "../EggProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Ular : public EggProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Constructor */
    Ular(); // generate at random cell, set representation

    /* Overrides */
    void talk();
};

#endif