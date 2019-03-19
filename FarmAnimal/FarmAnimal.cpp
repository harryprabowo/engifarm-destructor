#include "FarmAnimal.h"

// *************************** FarmAnimal ***************************//
// Konstruktor FarmAnimal
FarmAnimal::FarmAnimal(string nama) : name(nama) {
	X = 0;
    Y = 0;
    Hungry = false;
    HungryTime = 0;
}

// Name
string FarmAnimal::GetName() {
	return name;
}

void FarmAnimal::SetName(string nama) {
	name = nama;
}

// Position
int FarmAnimal::GetX() {
	return X;
}

int FarmAnimal::GetY() {
	return Y;
}

void FarmAnimal::SetX(int _x) {
	X = _x;
}

void FarmAnimal::SetY(int _y) {
	Y = _y;
}

// Hewan bergerak berdasarkan sumbu X
void FarmAnimal::MoveX() {
	
}

// Hewan bergerak berdasarkan sumbu Y
void FarmAnimal::MoveY() {
	
}


// Hungry
bool FarmAnimal::GetHungry() {
	return Hungry;
}

// Mengecek hewan mati atau belum karena lapar
bool FarmAnimal::Dead() {
	if (HungryTime==5) {
        return true;
    }
    return false;
}

// Hewan makan makanan
void FarmAnimal::EatFood() {
	// Eat
    Hungry = false;
    HungryTime = 0;
}

// *************************** EggProducingFarmAnimal ***************************//
// Konstruktor EggProducingFarmAnimal
EggProducingFarmAnimal::EggProducingFarmAnimal(string EggType) : Egg(EggType) {
	FarmProductReady = false;
}

// Egg
string EggProducingFarmAnimal::GetEgg() {
	return Egg;
}

// FarmProductReady
bool EggProducingFarmAnimal::GetFarmProductReady() {
	return FarmProductReady;
}

// Fungsi Interact dengan Player
string EggProducingFarmAnimal::InteractWithPlayer() {
	if (FarmProductReady) {
        FarmProductReady = false;
        return Egg;
    }
    return "NULL";
}

// *************************** MilkProducingFarmAnimal ***************************//
// Konstruktor MilkProducingFarmAnimal
MilkProducingFarmAnimal::MilkProducingFarmAnimal(string MilkType) : Milk(MilkType) {
	FarmProductReady = false;
}


// Milk
string MilkProducingFarmAnimal::GetMilk() {
	return Milk;
}


// FarmProductReady
bool MilkProducingFarmAnimal::GetFarmProductReady() {
	return FarmProductReady;
}


// Fungsi Interact dengan Player
string MilkProducingFarmAnimal::InteractWithPlayer() {
	if (FarmProductReady) {
        FarmProductReady = false;
        return Milk;
    }
    return "NULL";
}

// *************************** MeatProducingFarmAnimal ***************************//
// Konstruktor MeatProducingFarmAnimal
MeatProducingFarmAnimal::MeatProducingFarmAnimal(string MeatType) : Meat(MeatType) {
    Alive = true;
}

// Meat
string MeatProducingFarmAnimal::GetMeat() {
	return Meat;
}

// Alive
bool MeatProducingFarmAnimal::GetAlive() {
    return Alive;
}

// Fungsi Kill oleh Player, menghasilkan nama daging
string MeatProducingFarmAnimal::KilledByPlayer() {
	Alive = false;
    return Meat;
}

// *************************** Types of Farm Animal ***************************//
// AYAM
// Konstruktor ayam dengan name = nama
Ayam::Ayam(string nama) : FarmAnimal(nama), EggProducingFarmAnimal("ChickenEgg"), MeatProducingFarmAnimal("ChickenMeat") {}

// Berbicara dengan Player
void Ayam::TalkWithPlayer() {
	cout << "Petok!!" << endl;
}

// Sapi
// Konstruktor sapi
Sapi::Sapi(string nama) : FarmAnimal(nama), MilkProducingFarmAnimal("CowMilk"), MeatProducingFarmAnimal("CowMeat") {}

// Berbicara dengan Player
void Sapi::TalkWithPlayer() {
	cout << "Moo!" << endl;
}

// Kambing
// Konstruktor kambing
Kambing::Kambing(string nama) : FarmAnimal(nama), MilkProducingFarmAnimal("GoatMilk"), MeatProducingFarmAnimal("GoatMeat") {}

// Berbicara dengan Player
void Kambing::TalkWithPlayer() {
	cout << "Mbek!!" << endl;
}

// Bebek
// Konstruktor Bebek
Bebek::Bebek(string nama) : FarmAnimal(nama), EggProducingFarmAnimal("DuckEgg"), MeatProducingFarmAnimal("DuckMeat") {}

// Berbicara dengan Player
void Bebek::TalkWithPlayer() {
	cout << "Kwek!" << endl;
}

// Burung
// Konstruktor Burung
Burung::Burung(string nama) : FarmAnimal(nama), MeatProducingFarmAnimal("BirdMeat") {}

// Berbicara dengan Player
void Burung::TalkWithPlayer() {
	cout << "Ciat!" << endl;
}


// Konstruktor ular
Ular::Ular(string nama) : FarmAnimal(nama), EggProducingFarmAnimal("SnakeEgg"), MeatProducingFarmAnimal("SnakeMeat") {}

// Berbicara dengan Player
void Ular::TalkWithPlayer() {
	cout << "Sshh..." << endl;
}
