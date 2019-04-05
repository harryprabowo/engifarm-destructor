#include "../class/renderables/obj/farm-animal/animal/Burung.h"
#include <iostream>

using namespace std;

void Burung::eatFood(){}

void Burung::talk(){
	cout << "Chirp.." << endl;
}

Product* Burung::kill(){
	BirdMeat bm;
	Product *p = &bm;
	return p;
}