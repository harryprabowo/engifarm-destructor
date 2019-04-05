#include "../class/renderables/obj/farm-animal/animal/Ular.h"
#include <iostream>

using namespace std;

void Ular::eatFood(){
	if(egg = NULL){
		egg = new SnakeEgg();
	}
}

void Ular::talk(){
	cout << "Sshhh.." << endl;
}

Product* Ular::interact(){
	Product* res = egg;
	egg = NULL;
	return res;
}

Product* Ular::kill(){
	SnakeMeat sm;
	Product *p = &sm;
	return p;
}