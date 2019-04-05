#ifndef MILK_PRODUCING_FARMANIMAL_H
#define MILK_PRODUCING_FARMANIMAL_H

#include "../FarmAnimal.h"
#include "../../../Product/FarmProduct.h"

class MilkProducingFarmAnimal : public FarmAnimal //ABC
{
protected:
  FarmProduct *milk;

  public:
  virtual void eatFood();
  virtual void talk();
  virtual Product* interact();
  
};

#endif