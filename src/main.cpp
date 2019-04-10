#include <iostream>
#include "class/renderables/obj/Player.h"

using namespace std;

int main()
{
    Map m;
    Cell *c;
    Grassland gland(0, 0);
    gland.setGrass(false);
    Coop coop(0, 1);
    coop.setGrass(false);
    Barn barn(0, 2);
    barn.setGrass(false);

    c = &gland;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn;
    m.setObjectAt(c->getX(), c->getY(), c);

    m.print();

    return 0;
}