#include "../class/renderables/obj/farm-animal/animal/Ayam.h"
#include <iostream>

using namespace std;

void Ayam::eatFood(){
	if(egg = NULL){
		egg = new ChickenEgg();
	}
}

void Ayam::talk(){
	cout << "Petok.." << endl;
}

Product* Ayam::interact(){
	Product* res = egg;
	egg = NULL;
	return res;
}

Product* Ayam::kill(){
	ChickenMeat cm;
	Product *p = &cm;
	return p;
}