#include "../class/renderables/obj/cell/facility/Well.h"

using namespace std;

Well::Well(int x, int y) : Facility(x, y)
{
    setRender('W');
}

int Well::interact()
{
    return 3;
}

int Well::mix()
{
    return 3;
}