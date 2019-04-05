#include "../class/renderables/obj/cell/land/Grassland.h"

using namespace std;

Grassland::Grassland(int x, int y) : Land(x, y)
{
	if (hasGrass())
		setRender('@');
	else
    	setRender('x');
}

void Grassland::setGrass(bool b){
	Land::setGrass(b);
	if(b)
		setRender('@');
	else
		setRender('*');
}