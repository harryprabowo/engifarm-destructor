#include "../class/renderables/obj/farm-animal/animal/Ular.h"
#include <iostream>

using namespace std;

Ular::Ular(){
	hungry = false;
	hungryDuration = 0;
}

void Ular::eatFood(){

}

void Ular::talk(){
	cout << "Sshhh..." << endl;
}

Product Ular::interact(){
	
}

Product Ular::kill(){
	SnakeMeat sm;
	Product *p = &sm;
	return *p;
}