#include "../class/renderables/obj/Cell.h"

using namespace std;

Cell::Cell(int _x, int _y)
    : x(_x), y(_y)
{
    
}

int Cell::getX()
{
    return x;
}

int Cell::getY()
{
    return y;
}