#include "../class/renderables/obj/cell/land/Coop.h"

using namespace std;

Coop::Coop(int x, int y):Land(x, y)
{
	if (grass)
		setRender('@');
	else
    	setRender('o');
}

void Coop::setGrass(bool b){
	Land::setGrass(b);
	if(b)
		setRender('@');
	else
		setRender('o');
}