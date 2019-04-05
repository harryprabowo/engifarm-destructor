#include "../class/renderables/obj/farm-animal/animal/Ayam.h"
#include <iostream>

using namespace std;

Ayam::Ayam(){
	hungry = false;
	*cell = nullptr;
	hungryDuration = 0;
}

void Ayam::eatFood(){

}

void Ayam::talk(){
	cout << "Something" << endl;
}

Product Ayam::interact(){
	
}

Product Ayam::kill(){
	ChickenMeat cm;
	Product *p = &cm;
	return *p;
}