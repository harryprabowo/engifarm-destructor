#ifndef ULAR_H
#define ULAR_H

#include "../EggProducingFarmAnimal.h"
#include "../MeatProducingFarmAnimal.h"

class Ular : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
public:
    // Konstruktor ular
    Ular();
    Ular(int _x, int _y);
    // Berbicara dengan Player
    void Talk();
    void Interact(Player& P); //create new SnakeEgg, add to inventory
    void Kill(Player& P); //create new SnakeMeat, add to inventory

    char Render();        //outputs char representation
    void SetRender(char); //setter
};

#endif