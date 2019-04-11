#include <iostream>
#include "class/renderables/obj/Player.h"

using namespace std;

int main()
{
    Map m;
    Player p(&m);

    Cell *c;
    Grassland gland(0, 1);
    gland.setGrass(false);
    Coop coop(1, 0);
    coop.setGrass(false);
    Barn barn(2, 3);
    barn.setGrass(false);

    c = &gland;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn;
    m.setObjectAt(c->getX(), c->getY(), c);

    p.moveRight();
    p.moveRight();
    p.moveRight();
    p.moveDown();

    m.print();

    return 0;
}