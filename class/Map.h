#ifndef MAP_H
#define MAP_H

//#include generic parent template
#include <string>
#include <vector>
#include <tuple>
#include <memory>
#include "exception/exception.h"

using namespace std;

#define MAX_MAP_WIDTH 500
#define MAX_MAP_HEIGHT 400

class Map
{
  friend class Table;

  private:
    const short m_mapWidth;
    const short m_mapHeight;
    vector<vector<shared_ptr<GameObjType>>> m_mapArray; // parent type object undefined!

  public:
    // default constructor - create new file from empty template
    Map();

    // constructor with map ID parameter
    Map(string map_id);

    // copy constructor
    Map(const Map &M);

    // destructor - creates temp. savefile
    ~Map();
    
    // assignment operator overloading
    Map& operator=(const Map &M);

    /* ------------------------------METHODS------------------------------ */
    // returns TRUE if (x,y) is empty, else FALSE
    bool isEmptyCell(short x, short y);

    // getter - can access abstract properties only
    // if is empty, throw ObjectNotFound exception
    GameObjType &getObjectAt(short x, short y);

    // setter
    // if not empty, throw MultipleOccupancy exception
    void setObjectAt(short x, short y, GameObjType &obj);

    // returns position (x,y) of obj
    // if obj not on map, throw ObjectNotFound exception
    tuple<short, short> searchMap(GameObjType &obj);

    /* --------------------FILES-|-Directory MUST Exist------------------- */
    // loads map from textfile
    void importMap(ifstream &file);
    
    // writes map to textfile
    void exportMap(ofstream &file);
};

#endif