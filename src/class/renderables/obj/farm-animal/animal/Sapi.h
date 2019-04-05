#ifndef SAPI_H
#define SAPI_H

#include "../MilkProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Sapi : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal
{
  public:
    /* Constructor */
    Sapi(); // generate at random cell, set representation

    /* Overrides */
    void eatFood();
    void talk();
    Product interact();
    Product kill();
};

#endif