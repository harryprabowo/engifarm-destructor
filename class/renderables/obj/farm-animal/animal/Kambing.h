#ifndef KAMBING_H
#define KAMBING_H

#include "../MilkProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Kambing : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {

public:
    // Konstruktor kambing
    Kambing();
    Kambing(int _x, int _y);
    // Berbicara dengan Player
    void Talk();
    void Interact(Player& P); //create new GoatMilk, add to inventory
    void Kill(Player& P); //create new GoatMeat, add to inventory

    char Render();        //outputs char representation
    void SetRender(char); //setter
};

#endif