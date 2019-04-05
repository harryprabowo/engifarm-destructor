#include "../class/renderables/obj/farm-animal/animal/Kambing.h"
#include <iostream>

using namespace std;

void Kambing::eatFood(){
	if(milk = NULL){
		milk = new GoatMilk();
	}
}

void Kambing::talk(){
	cout << "Mbek.." << endl;
}

Product* Kambing::interact(){
	Product* res = milk;
	milk = NULL;
	return res;
}

Product* Kambing::kill(){
	GoatMeat gm;
	Product *p = &gm;
	return p;
}