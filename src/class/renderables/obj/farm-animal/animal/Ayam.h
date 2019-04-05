#ifndef AYAM_H
#define AYAM_H

#include "../EggProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Ayam : public EggProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Constructor */
    Ayam(); // generate at random cell, set representation

    /* Overrides */
    void talk();
};

#endif