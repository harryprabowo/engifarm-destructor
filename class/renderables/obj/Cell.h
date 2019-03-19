#ifndef _CELL_H
#define _CELL_H

#include <tuple>
#include "../Renderables.h"

enum CELL_TYPE
{
    FACILITY,
    LAND
};

class Cell : public Renderables
{
  private:
    tuple<int, int> position;
    bool grass;

  public:
    Renderables(tuple<int, int>);

    tuple<int, int> get_position();
    void SetPosition(tuple<int, int>);

    bool IsGrass();
    void SetGrass(bool);

    char render();
    void set_render(char);

    virtual CELL_TYPE cellType() const = 0;
};

#endif