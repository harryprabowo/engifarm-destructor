#ifndef BEBEK_H
#define BEBEK_H

#include "../EggProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Bebek : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
public:
    // Konstruktor Bebek
    Bebek();
    Bebek(int _x, int _y);
    // Berbicara dengan Player
    void TalkWithPlayer();
    void Interact(Player& P); //create new DuckEgg, add to inventory
    void Kill(Player& P); //create new DuckMeat, add to inventory

};

#endif