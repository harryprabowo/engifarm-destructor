#ifndef MAP_H
#define MAP_H

//#include generic parent template
#include "exception/exception.h"
#include "linkedlist/Node.h"

using namespace std;

#define MAX_MAP_WIDTH 500
#define MAX_MAP_HEIGHT 400

template<class T>
class Map
{
  friend class Table;

  private:
    const short m_mapWidth;
    const short m_mapHeight;
    Node<T> *m_mapArray; // parent type object undefined!

  public:
    // default constructor - create new file from empty template
    Map();

    // constructor with map ID parameter
    Map(int map_id);

    // copy constructor
    Map(const Map &M);

    // destructor - creates temp. savefile
    ~Map();
    
    // assignment operator overloading
    Map& operator=(const Map &M);

    /* ------------------------------METHODS------------------------------ */
    // returns TRUE if (x,y) is empty, else FALSE
    bool isEmpty(int x, int y);

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

#endif