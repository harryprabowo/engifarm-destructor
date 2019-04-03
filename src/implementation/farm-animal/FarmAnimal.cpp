#include "../../class/renderables/obj/FarmAnimal.h"
#include <stdlib.h>
#include <time.h>


// Konstruktor FarmAnimal
FarmAnimal::FarmAnimal(int _x, int _y) : Renderables(tuple<_x,_y>) {
	// How to do Location(?)
    hungry = false;
    hungryTime = 0;
	alive = true;
}

// Position
Cell& FarmAnimal::GetLocation() {
	return location;
}

void FarmAnimal::RandomMove() {
	srand(time(NULL));
	int rnum = rand() % 4;

	if (rnum==0) {
		MoveUp();
	} 
	else if (rnum==1) {
		MoveRight();
	}
	else if (rnum==2) {
		MoveDown();
	}
	else {
		MoveLeft();
	}
}

void FarmAnimal::MoveUp() {
	
}

void FarmAnimal::MoveDown() {
	
}

void FarmAnimal::MoveLeft() {
	
}

void FarmAnimal::MoveRight() {
	
}


// Setter dan Getter
// Melihat State Hungry
bool FarmAnimal::IsHungry() {
	return hungry;
}

// Melihat state Alive
bool FarmAnimal::IsAlive() {
	return alive;
}

// Mendapatkan HungryTime
int FarmAnimal::GetHungryTime() {
	return hungryTime;
}

// Mengubah state Hungry hewan
void FarmAnimal::SetHungry(bool state) {
	hungry = state;
}

// Mengubah HungryTime
void FarmAnimal::SetHungryTime(int time) {
	hungryTime = time;
}

// Mengubah Alive
void FarmAnimal::SetAlive(bool state) {
	alive = state;
}


// Mengecek hewan mati atau belum karena lapar, kalau mati Alive = false
void FarmAnimal::Dead() {
	if (hungryTime==5) {
		alive = false;
	}
}


// Hewan makan rumput jika lapar dan berada pada Cell yang ditumbuhi rumput
// Hewan yang memiliki FarmProduct akan berbeda jika makan
void FarmAnimal::EatFood() {
	if (hungry) {
		if (IsGrass()) {
			setGrass(false);
			hungry = false;
			hungryTime = 0;
		}
	}
}

// // *************************** Types of Farm Animal ***************************//
// // AYAM
// // Konstruktor ayam dengan name = nama
// Ayam::Ayam(string nama) : FarmAnimal(nama), EggProducingFarmAnimal("ChickenEgg"), MeatProducingFarmAnimal("ChickenMeat") {}

// // Berbicara dengan Player
// void Ayam::Talk() {
// 	cout << "Petok!!" << endl;
// }

// // Sapi
// // Konstruktor sapi
// Sapi::Sapi(string nama) : FarmAnimal(nama), MilkProducingFarmAnimal("CowMilk"), MeatProducingFarmAnimal("CowMeat") {}

// // Berbicara dengan Player
// void Sapi::Talk() {
// 	cout << "Moo!" << endl;
// }

// // Kambing
// // Konstruktor kambing
// Kambing::Kambing(string nama) : FarmAnimal(nama), MilkProducingFarmAnimal("GoatMilk"), MeatProducingFarmAnimal("GoatMeat") {}

// // Berbicara dengan Player
// void Kambing::Talk() {
// 	cout << "Mbek!!" << endl;
// }

// // Bebek
// // Konstruktor Bebek
// Bebek::Bebek(string nama) : FarmAnimal(nama), EggProducingFarmAnimal("DuckEgg"), MeatProducingFarmAnimal("DuckMeat") {}

// // Berbicara dengan Player
// void Bebek::Talk() {
// 	cout << "Kwek!" << endl;
// }

// // Burung
// // Konstruktor Burung
// Burung::Burung(string nama) : FarmAnimal(nama), MeatProducingFarmAnimal("BirdMeat") {}

// // Berbicara dengan Player
// void Burung::Talk() {
// 	cout << "Ciat!" << endl;
// }


// // Konstruktor ular
// Ular::Ular(string nama) : FarmAnimal(nama), EggProducingFarmAnimal("SnakeEgg"), MeatProducingFarmAnimal("SnakeMeat") {}

// // Berbicara dengan Player
// void Ular::Talk() {
// 	cout << "Sshh..." << endl;
// }
