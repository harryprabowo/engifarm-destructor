#ifndef BEBEK_H
#define BEBEK_H

#include "../EggProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

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