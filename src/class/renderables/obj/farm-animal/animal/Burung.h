#ifndef BURUNG_H
#define BURUNG_H

#include "../MeatProducingFarmAnimal.h"

class Burung : public MeatProducingFarmAnimal
{
  public:
    /* Constructor */
    Burung(); // generate at random cell, set representation

    /* Overrides */
    void talk();
};

#endif