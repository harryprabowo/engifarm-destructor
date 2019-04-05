#ifndef MEAT_PRODUCING_FARMANIMAL_H
#define MEAT_PRODUCING_FARMANIMAL_H

#include "../FarmAnimal.h"

class MeatProducingFarmAnimal : public FarmAnimal // ABC
{
    virtual Product kill();
};

#endif