#ifndef MAP_H
#define MAP_H

//#include generic parent template
#include <tuple>
#include "linkedlist/Node.h"
#

using namespace std;

#define MAX_MAP_WIDTH 500
#define MAX_MAP_HEIGHT 400

template<class T>
class Map
{
  private:
    const short m_mapWidth;
    const short m_mapHeight;
    vector<shared_ptr<Renderables>> m_mapArray;

  public:
    // default constructor - create new file from empty template
    Map();

    // constructor with map ID parameter
    Map(int map_id);

    // destructor - creates temp. savefile
    ~Map();

    /* ------------------------------METHODS------------------------------ */
    // returns TRUE if (x,y) is empty, else FALSE
    bool isEmptyAt(int x, int y);

    // getter - can access abstract properties only
    // if is empty, throw ObjectNotFound exception
    T &getObjectAt(int x, int y);

    // setter
    // if not empty, throw MultipleOccupancy exception
    void setObjectAt(int x, int y, T &obj);

    // returns position (x,y) of obj
    // if obj not on map, throw ObjectNotFound exception
    tuple<int, int> searchMap(T &obj);

    /* --------------------FILES-|-Directory MUST Exist------------------- */
    // loads map from textfile
    Node<T> importMap(ifstream &file);
    
    // writes map to textfile
    Node<T> exportMap(ofstream &file);
};

#include "../../implementation/Map.cpp"

#endif