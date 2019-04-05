#include "../class/renderables/obj/cell/facility/Truck.h"

using namespace std;

Truck::Truck(int x, int y) : Facility(x, y)
{
}

int Truck::interact()
{
    return 2;
}

int Truck::mix()
{
    return 2;
}