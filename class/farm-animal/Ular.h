#ifndef ULAR_H
#define ULAR_H

#include "EggProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Ular : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
public:
    // Konstruktor ular
    Ular();
    Ular(int _x, int _y);
    // Berbicara dengan Player
    void TalkWithPlayer();
};

#endif