#ifndef MEATPRODUCINGFARMANIMAL_H
#define MEATPRODUCINGFARMANIMAL_H

#include "FarmAnimal.h"

class MeatProducingFarmAnimal : public FarmAnimal {
public:
    // Konstruktor MeatProducingFarmAnimal
    MeatProducingFarmAnimal(string MeatType);

    // Fungsi Kill oleh Player menghasilkan nama daging
    virtual void Kill(Player& P);
};

#endif