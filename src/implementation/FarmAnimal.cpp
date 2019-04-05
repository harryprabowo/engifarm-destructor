#include "../class/renderables/obj/FarmAnimal.h"
using namespace std;

Cell& FarmAnimal::getCell(){
	return *cell;
}

bool FarmAnimal::isHungry(){
	return hungry;
}

int FarmAnimal::getHungryDuration(){
	return hungryDuration;
}

