#ifndef KAMBING_H
#define KAMBING_H

#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Kambing : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {
public:
    // Konstruktor kambing
    Kambing();
    // Berbicara dengan Player
    void TalkWithPlayer();
};

#endif