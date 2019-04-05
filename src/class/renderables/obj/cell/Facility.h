#ifndef FACILITY_H
#define FACILITY_H

#include "../Cell.h"

class Facility : public Cell{
    Facility(int,int);
    
    virtual void interact();
    virtual void mix();
};

#endif