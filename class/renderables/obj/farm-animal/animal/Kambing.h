#ifndef KAMBING_H
#define KAMBING_H

#include "../MilkProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Kambing : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {
private:
	GoatMilk milk;

public:
    // Konstruktor kambing
    Kambing();
    Kambing(int _x, int _y);
    // Berbicara dengan Player
    void TalkWithPlayer();
    void Interact(Player& P); //create new GoatMilk, add to inventory
    void Kill(Player& P); //create new GoatMeat, add to inventory
};

#endif