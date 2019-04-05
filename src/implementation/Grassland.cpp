#include "../class/renderables/obj/cell/land/Grassland.h"

using namespace std;

Grassland::Grassland(int x, int y) : Land(x, y)
{
    setRender('*');
}
