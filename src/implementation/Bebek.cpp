#include "../class/renderables/obj/farm-animal/animal/Bebek.h"
#include <iostream>

using namespace std;

Bebek::Bebek(){
	hungry = false;
	hungryDuration = 0;
}

void Bebek::eatFood(){

}

void Bebek::talk(){
	cout << "Kwek!" << endl;
}

Product Bebek::interact(){
	
}

Product Bebek::kill(){
	DuckMeat dm;
	Product *p = &dm;
	return *p;
}