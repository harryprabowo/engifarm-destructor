#include "../../class/renderables/obj/farm-animal/MilkProducingFarmAnimal.h"

// Konstruktor MilkProducingFarmAnimal
MilkProducingFarmAnimal::MilkProducingFarmAnimal() {
    farmProductReady = false;
}

// Mendapatkan status farmProductReady
bool MilkProducingFarmAnimal::GetFarmProductReady() {
	return farmProductReady;
}

// Mengubah farmProductReady
void MilkProducingFarmAnimal::SetFarmProductReady(bool state) {
	farmProductReady = state;
}

// Makan
void MilkProducingFarmAnimal::EatFood() {
    if (hungry) {
        FarmAnimal::EatFood();
        farmProductReady = true;
    }
}