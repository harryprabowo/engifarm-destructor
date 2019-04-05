#include <iostream>
#include <stddef.h>

#include "../class/map/Map.h"

// erase
#include "../class/renderables/obj/cell/land/Barn.h"
#include "../class/renderables/obj/cell/land/Coop.h"
#include "../class/renderables/obj/cell/land/Grassland.h"

using namespace std;

// default constructor - create new file from empty template

Map::Map()
    : m_mapWidth(MAX_MAP_WIDTH), m_mapHeight(MAX_MAP_HEIGHT)
{
    for (int i = 0; i < m_mapWidth * m_mapHeight; ++i)
        m_mapArray.push_back(NULL);
}

/* ------------------------------METHODS------------------------------ */
// returns TRUE if (x,y) is empty, else FALSE

bool Map::isEmptyAt(int x, int y)
{
    return m_mapArray[x * m_mapWidth + y] == NULL;
}

// getter - can access abstract properties only
Cell *Map::getObjectAt(int x, int y)
{
    if (x >= 0 && y >= 0 && x < m_mapWidth && y < m_mapHeight && m_mapArray[x * m_mapWidth + y]->getRenderable() != NULL)
    {
        return m_mapArray[x * m_mapWidth + y];
    }
    else
    {
        return NULL;
    }
}

// setter
// if not empty, throw MultipleOccupancy exception
void Map::setObjectAt(int x, int y, Cell *obj)
{
    m_mapArray[x * m_mapWidth + y] = obj;
}

void Map::print()
{
    for (int i = 0; i < m_mapWidth * m_mapHeight; ++i)
    {
        if (m_mapArray[i] == NULL)
            cout << ".";
        else
            cout << m_mapArray[i]->render();

        if ((i + 1) % m_mapWidth == 0)
            cout << endl;
        else
            cout << " ";
    }
}

main()
{
    Map m;
    Cell *c;
    Grassland g(0, 0);
    g.setGrass(false);
    Coop coop(0, 1);
    coop.setGrass(false);
    Barn barn(0, 2);
    barn.setGrass(false);

    c = &g;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn;
    m.setObjectAt(c->getX(), c->getY(), c);

    m.print();
}