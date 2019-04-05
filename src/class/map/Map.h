#ifndef MAP_H
#define MAP_H

//#include generic parent template
#include <vector>

#include "../renderables/obj/Cell.h"

using namespace std;

#define MAX_MAP_WIDTH 20
#define MAX_MAP_HEIGHT 20

class Map
{
private:
  const int m_mapWidth;
  const int m_mapHeight;
  vector<Cell*> m_mapArray;

public:
  // default constructor - create new file from empty template
  Map();

  /* ------------------------------METHODS------------------------------ */
  // returns TRUE if (x,y) is empty, else FALSE
  bool isEmptyAt(int, int);

  // getter - can access abstract properties only
  // if is empty, throw ObjectNotFound exception
  Cell* getObjectAt(int, int);

  // setter
  // if not empty, throw MultipleOccupancy exception
  void setObjectAt(int, int, Cell*);

  void print();
};

#endif