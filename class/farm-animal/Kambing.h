#ifndef KAMBING_H
#define KAMBING_H

#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Kambing : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {
public:
    // Konstruktor kambing
    Kambing();
    Kambing(int _x, int _y);
    // Berbicara dengan Player
    void TalkWithPlayer();
};

#endif