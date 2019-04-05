#include "../class/renderables/obj/farm-animal/animal/Bebek.h"
#include <iostream>

using namespace std;

void Bebek::eatFood(){
	if(egg = NULL){
		egg = new DuckEgg();
	}
}

void Bebek::talk(){
	cout << "Kwek.." << endl;
}

Product* Bebek::interact(){
	Product* res = egg;
	egg = NULL;
	return res;
}

Product* Bebek::kill(){
	DuckMeat dm;
	Product *p = &dm;
	return p;
}