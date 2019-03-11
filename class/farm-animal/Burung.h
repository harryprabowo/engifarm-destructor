#ifndef BURUNG_H
#define BURUNG_H

#include "MeatProducingFarmAnimal.h"

class Burung : public MeatProducingFarmAnimal {
public:
    // Konstruktor Burung
    Burung();
    // Berbicara dengan Player
    void TalkWithPlayer();
};

#endif