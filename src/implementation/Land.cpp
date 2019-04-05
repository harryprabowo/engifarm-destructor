#include "../class/renderables/obj/cell/Land.h"

using namespace std;

/* Getters */
CELL_TYPE cellType()
{
    return LAND;
}

/* Methods */
//void grow(Player &P);
bool isGrass()
{
    return grass;
}

void setGrass(bool);

/* Virtuals */
virtual LAND_TYPE landType() = 0; //meng