#ifndef MILK_PRODUCING_FARMANIMAL_H
#define MILK_PRODUCING_FARMANIMAL_H

#include "../FarmAnimal.h"

class MilkProducingFarmAnimal : public FarmAnimal //ABC
{
  protected:
    bool farmProductReady; // Hewan sudah memiliki FarmProduct atau belum

  public:
    /* Getters & setters */
    bool hasFarmProductReady();
    void setFarmProductReady(bool);

    /* Overrides */
    void eatFood();
    Product interact();
};

#endif