#ifndef AYAM_H
#define AYAM_H

#include "EggProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Ayam : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
public:
    // Konstruktor ayam
    Ayam();
    // Berbicara dengan Player
    void TalkWithPlayer();
};

#endif