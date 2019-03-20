#ifndef EGGPRODUCINGFARMANIMAL_H
#define EGGPRODUCINGFARMANIMAL_H

#include "../FarmAnimal.h"

class EggProducingFarmAnimal : public FarmAnimal{
  protected:
    bool FarmProductReady; // Hewan sudah memiliki FarmProduct atau belum

  public:
    // Konstruktor EggProducingFarmAnimal
    EggProducingFarmAnimal(int _x, int _y);

    // FarmProductReady
    bool GetFarmProductReady();
    // Mengubah FarmProductReady
    void SetFarmProductReady(bool);

    // Makan
    void EatFood();

    // Fungsi Interact dengan Player
    virtual void Interact(Player &P);
};

#endif