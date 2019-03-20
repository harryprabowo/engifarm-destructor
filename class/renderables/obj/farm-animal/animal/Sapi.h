#ifndef SAPI_H
#define SAPI_H

#include "../MilkProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Sapi : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal {

public:
    // Konstruktor sapi
    Sapi();
    Sapi(int _x, int _y);
    // Berbicara dengan Player
    void Talk();
    void Interact(Player& P); //create new CowMilk, add to inventory
    void Kill(Player& P); //create new CowMeat, add to inventory

    char Render();        //outputs char representation
    void SetRender(char); //setter
};

#endif