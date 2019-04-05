#include "../class/renderables/obj/cell/facility/Truck.h"

using namespace std;

Truck::Truck(int x, int y) : Facility(x, y)
{
    setRender('T');
}

void Truck::cooldown()
{
    lastUsed -= COOL_DOWN;
}

int Truck::interact()
{
    if (lastUsed == 0)
        return 2;
    else
        return -1;    
}

int Truck::mix()
{
    return 2;
}