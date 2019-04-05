#include "../class/renderables/obj/FarmAnimal.h"
#include <stddef.h>

using namespace std;

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


/* Methods */
void FarmAnimal::eatFood() {
	
}
// Hewan makan rumput jika lapar dan berada pada Cell yang ditumbuhi rumput \
Hewan yang memiliki FarmProduct akan berbeda jika makan

void FarmAnimal::talk() {}
// talk with player

Product FarmAnimal::interact() {
	Product p, *q = &p;

	q = NULL;
	
	return p;
}
// interact oleh player menghasilkan product - NULL default

Product FarmAnimal::kill() {
	return NULL;
}
// kill oleh player menghasilkan nama daging - NULL default
