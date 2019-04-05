#include "../class/renderables/obj/farm-animal/animal/Sapi.h"
#include <iostream>

using namespace std;

Sapi::Sapi(){
	hungry = false;
	hungryDuration = 0;
}

void Sapi::eatFood(){
	if(milk = NULL){
		milk = new CowMilk();
	}
}

void Sapi::talk(){
	cout << "Moo.." << endl;
}

Product* Sapi::interact(){
	Product* res = milk;
	milk = NULL;
	return res;
}

Product* Sapi::kill(){
	CowMeat cm;
	Product *p = &cm;
	return p;
}