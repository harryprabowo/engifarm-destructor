#include "../class/renderables/obj/cell/facility/Truck.h"

using namespace std;

Truck::Truck(int x, int y) : Facility(x, y)
{
}

void Truck::cooldown()
{
    lastUsed -= COOL_DOWN;
}

int Truck::interact()
{
    if (cooldown == 0)
        return 2;
    else
        return -1;    
}

int Truck::mix()
{
    return 2;
}