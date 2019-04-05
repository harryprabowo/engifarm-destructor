#include "../class/renderables/obj/cell/land/Coop.h"

using namespace std;

Coop::Coop(int x, int y):Cell(x, y)
{
    setRender('o');
}
