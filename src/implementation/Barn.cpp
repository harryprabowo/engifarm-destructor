#include "../class/renderables/obj/cell/land/Barn.h"

using namespace std;

Barn::Barn(int x, int y):Land(x, y)
{
    setRender('x');
}
