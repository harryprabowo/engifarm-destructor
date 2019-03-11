#ifndef MEATPRODUCINGFARMANIMAL_H
#define MEATPRODUCINGFARMANIMAL_H

#include "FarmAnimal.h"

class MeatProducingFarmAnimal : public FarmAnimal {
protected:
    string Meat;        // Nama daging yang dihasilkan

public:
    // Konstruktor MeatProducingFarmAnimal
    MeatProducingFarmAnimal(string MeatType);

    // Mendapatkan jenis Meat hewan
    string GetMeat();

    // Fungsi Kill oleh Player menghasilkan nama daging
    string KilledByPlayer();
};

#endif