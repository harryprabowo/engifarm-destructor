#ifndef EGGPRODUCINGFARMANIMAL_H
#define EGGPRODUCINGFARMANIMAL_H

#include "FarmAnimal.h"

class EggProducingFarmAnimal : public FarmAnimal{
protected:
    string Egg;         // Nama telur yang dihasilkan
    bool FarmProductReady;   // Hewan sudah memiliki FarmProduct atau belum

public:
    // Konstruktor EggProducingFarmAnimal
    EggProducingFarmAnimal(string EggType);

    // Egg
    string GetEgg();

    // FarmProductReady
    bool GetFarmProductReady();
    // Mengubah FarmProductReady menjadi TRUE
    void SetFarmProductReady();

    // Makan
    void EatFood();

    // Fungsi Interact dengan Player
    string InteractWithPlayer();
};

#endif