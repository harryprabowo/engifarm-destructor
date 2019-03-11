#ifndef MILKPRODUCINGFARMANIMAL_H
#define MILKPRODUCINGFARMANIMAL_H

#include "FarmAnimal.h"

class MilkProducingFarmAnimal : public FarmAnimal {
protected:
    string Milk;        // Nama susu yang dihasilkan
    bool FarmProductReady;   // Hewan sudah memiliki FarmProduct atau belum

public:
    // Konstruktor MilkProducingFarmAnimal
    MilkProducingFarmAnimal(string MilkType);

    // Milk
    string GetMilk();

    // Mendapatkan status FarmProductReady
    bool GetFarmProductReady();
    // Mengubah FarmProductReady menjadi TRUE
    void SetFarmProductReady();

    // Makan
    void EatFood();

    // Fungsi Interact dengan Player
    string InteractWithPlayer();
};

#endif