#include <iostream>
#include <stddef.h>

#include "../class/map/Map.h"

// erase
#include "../class/renderables/obj/cell/land/Barn.h"
#include "../class/renderables/obj/cell/land/Coop.h"
#include "../class/renderables/obj/cell/land/Grassland.h"
#include "../class/renderables/obj/cell/facility/Mixer.h"
#include "../class/renderables/obj/cell/facility/Well.h"
#include "../class/renderables/obj/cell/facility/Truck.h"

using namespace std;

// default constructor - create new file from empty template

Map::Map()
    : m_mapWidth(MAX_MAP_WIDTH), m_mapHeight(MAX_MAP_HEIGHT)
{
    for (int i = 0; i < m_mapWidth; ++i){
        for (int j = 0; j < m_mapHeight; ++j)
            m_mapArray.push_back(new Cell(i, j));
    }
}

/* ------------------------------METHODS------------------------------ */
// returns TRUE if (x,y) is empty, else FALSE

bool Map::isEmptyAt(int x, int y)
{
    return m_mapArray[y * m_mapWidth + x] == NULL;
}

// getter - can access abstract properties only
Cell *Map::getObjectAt(int y, int x)
{
    return m_mapArray[y * m_mapWidth + x];
}

// setter
// if not empty, throw MultipleOccupancy exception
void Map::setObjectAt(int y, int x, Cell *obj)
{
    m_mapArray[y * m_mapWidth + x] = obj;
}

void Map::print()
{
    for (int i = 0; i < m_mapWidth * m_mapHeight; ++i)
    {
        if(m_mapArray[i]->getRenderable() != NULL)
            cout << m_mapArray[i]->getRenderable()->render();
        else
            cout << m_mapArray[i]->render();

        if ((i + 1) % m_mapWidth == 0)
            cout << endl;
        else
            cout << " ";
    }

    cout << endl;
}