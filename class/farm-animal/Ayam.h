#ifndef AYAM_H
#define AYAM_H

#include "EggProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Ayam : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
public:
    // Konstruktor ayam
    Ayam();
    Ayam(int _x, int _y);
    // Berbicara dengan Player
    void TalkWithPlayer();
};

#endif