#ifndef MILKPRODUCINGFARMANIMAL_H
#define MILKPRODUCINGFARMANIMAL_H

#include "../FarmAnimal.h"

class MilkProducingFarmAnimal : public FarmAnimal {
protected:
    bool farmProductReady;   // Hewan sudah memiliki FarmProduct atau belum

public:
    // Konstruktor MilkProducingFarmAnimal
    MilkProducingFarmAnimal();

    // Mendapatkan status FarmProductReady
    bool GetFarmProductReady();
    // Mengubah FarmProductReady
    void SetFarmProductReady(bool);

    // Makan
    void EatFood();

    // Fungsi Interact dengan Player
    virtual void Interact(Player& P) = 0;
};

#endif