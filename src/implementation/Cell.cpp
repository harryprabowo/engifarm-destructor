#include "../class/renderables/obj/Cell.h"
#include <stddef.h>

using namespace std;

Cell::Cell(int _x, int _y){
    x = _x;
    y = _y;
}

int Cell::getX(){
	return x;
}

int Cell::getY(){
	return y;
}

FarmAnimal *Cell::getAnimal()
{
	return animal;
}

void Cell::setAnimal(FarmAnimal *_r)
{
	animal = _r;
}