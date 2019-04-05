#include "../class/renderables/obj/farm-animal/animal/Burung.h"
#include <iostream>

using namespace std;

Burung::Burung(){
	hungry = false;
	hungryDuration = 0;
}

void Burung::eatFood(){

}

void Burung::talk(){
	cout << "Chirp.." << endl;
}

Product Burung::interact(){
	
}

Product Burung::kill(){
	BirdMeat bm;
	Product *p = &bm;
	return *p;
}