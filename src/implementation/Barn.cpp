#include "../class/renderables/obj/cell/land/Barn.h"

using namespace std;

Barn::Barn(int x, int y):Land(x, y)
{
	if (hasGrass())
		setRender('@');
	else
    	setRender('x');
}

void Barn::setGrass(bool b){
	Land::setGrass(b);
	if(b)
		setRender('@');
	else
		setRender('x');
}