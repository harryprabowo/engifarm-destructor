#include "../class/renderables/obj/cell/land/Grassland.h"

using namespace std;

Grassland::Grassland()
{
    setRender('*');
} // generate at random cell, set representation

LAND_TYPE Grassland::landType()
{

} //return an int representation of child class grassland