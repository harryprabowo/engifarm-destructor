#include "../class/renderables/obj/Cell.h"
#include <stddef.h>

using namespace std;

Cell::Cell(int _x, int _y){
    x = _x;
    y = _y;
    r = NULL;
}

int Cell::getX(){
	return x;
}

int Cell::getY(){
	return y;
}

Renderables* Cell::getRenderable(){
	return r;
}

void Cell::setRenderable(Renderables* _r){
	r = _r;
}