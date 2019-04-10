#ifndef MEAT_PRODUCING_FARMANIMAL_H
#define MEAT_PRODUCING_FARMANIMAL_H

#include "../FarmAnimal.h"

class MeatProducingFarmAnimal : public FarmAnimal // ABC
{
    public:
        virtual ~MeatProducingFarmAnimal(){}
        virtual Product* kill(){}
};

#endif