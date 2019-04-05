#ifndef EGG_PRODUCING_FARMANIMAL_H
#define EGG_PRODUCING_FARMANIMAL_H

#include "../FarmAnimal.h"
#include "../../../Product/FarmProduct.h"

class EggProducingFarmAnimal : public FarmAnimal // ABC
{
protected:
  FarmProduct *egg;

public:
  virtual void eatFood();
  virtual void talk();
  virtual Product interact();
};

#endif