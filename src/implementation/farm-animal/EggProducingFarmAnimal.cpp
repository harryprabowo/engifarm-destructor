#include "../../class/renderables/obj/farm-animal/EggProducingFarmAnimal.h"

// Konstruktor EggProducingFarmAnimal
EggProducingFarmAnimal::EggProducingFarmAnimal(int _x, int _y) {
	farmProductReady = false;
}


// farmProductReady
bool EggProducingFarmAnimal::GetFarmProductReady() {
	return farmProductReady;
}

// Mengubah farmProductReady
void EggProducingFarmAnimal::SetFarmProductReady(bool state) {
	farmProductReady = state;
}


// Makan
void EggProducingFarmAnimal::EatFood() {
	if (hungry) {
        FarmAnimal::EatFood();
        farmProductReady = true;
    }
}
