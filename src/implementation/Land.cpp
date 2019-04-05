#include "../class/renderables/obj/cell/Land.h"

using namespace std;

Land::Land(int x, int y) : Cell(x,y)
{
	grass = true;
}

/* Getters */
bool Land::hasGrass(){
    return grass;
}

/* Methods */
void Land::setGrass(bool b){
	grass = b;
}
