#ifndef FACILITY_H
#define FACILITY_H

#include "../Cell.h"

class Facility : public Cell
{
  public:
    Facility(int, int);

    virtual int interact();
    virtual int mix();
};

#endif