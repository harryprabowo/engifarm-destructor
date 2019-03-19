#ifndef SAPI_H
#define SAPI_H

#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Sapi : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {
public:
    // Konstruktor sapi
    Sapi();
    Sapi(int _x, int _y);
    // Berbicara dengan Player
    void TalkWithPlayer();
};

#endif