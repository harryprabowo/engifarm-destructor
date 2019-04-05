#include "../class/renderables/obj/FarmAnimal.h"
#include <stddef.h>

using namespace std;

#define HUNGRY_DURATION 5

FarmAnimal::FarmAnimal() {
	hungry = false;
	hungryDuration = 0;
}

// Move dan Eat belum implementasi

/* Getters & setters */
Cell* FarmAnimal::getCell() {
	return cell;
}
//returns container cell

bool FarmAnimal::isHungry() {
	return hungry;
}

int FarmAnimal::getHungryDuration() {
	return hungryDuration;
}

void FarmAnimal::setHungry(bool h) {
	hungry = h;
}

void FarmAnimal::setHungryTime(int t) {
	hungryDuration = t;
}

void FarmAnimal::setCell(Cell *c){
	*cell = *c;
}


/* Position-related methods - Setter for &cell */
void FarmAnimal::move() {
	
}
//random move

void FarmAnimal::moveUp() {
	
}

void FarmAnimal::moveDown() {
	
}

void FarmAnimal::moveLeft() {
	
}

void FarmAnimal::moveRight() {
	
}

