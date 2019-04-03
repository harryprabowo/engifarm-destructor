#include "../../class/renderables/obj/farm-animal/animal/Ular.h"
#include <iostream>

// Konstruktor ular
Ular::Ular(int _x, int _y) : EggProducingFarmAnimal(), MeatProducingFarmAnimal(_x,_y) {}

// Berbicara dengan Player
void Ular::Talk() {
	cout << "Sshh..." << endl;
}

//create new SnakeEgg, add to inventory
void Ular::Interact(Player& P) {
	if (farmProductReady) {
        FarmProduct(8);
        P.addProduct("SNAKEEGG",1);
        farmProductReady = false;
    }
    else {
        cout << "No Egg yet" << endl;
    }
}

//create new SnakeMeat, add to inventory
void Ular::Kill(Player& P) {
	FarmProduct(5);
    P.addProduct("SNAKEMEAT",1);
    alive = false;
}

//outputs char representation
char Ular::Render() {
	return representation;
}

//setter
void Ular::SetRender(char r) {
	representation = r;
}