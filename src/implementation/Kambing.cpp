#include "../class/renderables/obj/farm-animal/animal/Kambing.h"
#include <iostream>

using namespace std;

Kambing::Kambing(){
	hungry = false;
	hungryDuration = 0;
}

void Kambing::eatFood(){

}

void Kambing::talk(){
	cout << "Mbek..." << endl;
}

Product Kambing::interact(){
	
}

Product Kambing::kill(){
	GoatMeat gm;
	Product *p = &gm;
	return *p;
}