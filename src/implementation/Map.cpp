#include <tuple>
#include "../class/map/Map.h"

using namespace std;

#define MAX_MAP_WIDTH 500
#define MAX_MAP_HEIGHT 400

// const short m_mapWidth;
// const short m_mapHeight;
// Node<T> *m_mapArray; // parent type object undefined!

// default constructor - create new file from empty template
template <class T>
Map<T>::Map()
{
}

// constructor with map ID parameter
template <class T>
Map<T>::Map(int map_id) {}

// destructor - creates temp. savefile
template <class T>
Map<T>::~Map() {}

/* ------------------------------METHODS------------------------------ */
// returns TRUE if (x,y) is empty, else FALSE
template <class T>
bool Map<T>::isEmpty(int x, int y) {}

// getter - can access abstract properties only
// if is empty, throw ObjectNotFound exception
template <class T>
T& Map<T>::getObjectAt(int x, int y) {}

// setter
// if not empty, throw MultipleOccupancy exception
template <class T>
void Map<T>::setObjectAt(int x, int y, T &obj) {}

// returns position (x,y) of obj
// if obj not on map, throw ObjectNotFound exception
template <class T>
tuple<int, int> Map<T>::searchMap(T &obj) {}

/* --------------------FILES-|-Directory MUST Exist------------------- */
// loads map from textfile
template <class T>
Node<T> Map<T>::importMap(ifstream &file) {}

// writes map to textfile
template <class T>
Node<T> Map<T>::exportMap(ofstream &file) {}