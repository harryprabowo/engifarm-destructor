#ifndef MILKPRODUCINGFARMANIMAL_H
#define MILKPRODUCINGFARMANIMAL_H

#include "FarmAnimal.h"

class MilkProducingFarmAnimal : public FarmAnimal {
protected:
    bool FarmProductReady;   // Hewan sudah memiliki FarmProduct atau belum

public:
    // Konstruktor MilkProducingFarmAnimal
    MilkProducingFarmAnimal(string MilkType);

    // Mendapatkan status FarmProductReady
    bool GetFarmProductReady();
    // Mengubah FarmProductReady menjadi TRUE
    void SetFarmProductReady();

    // Makan
    void EatFood();

    // Fungsi Interact dengan Player
    virtual void Interact(Player& P);
};

#endif