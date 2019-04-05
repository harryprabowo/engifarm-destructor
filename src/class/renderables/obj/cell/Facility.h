#ifndef FACILITY_H
#define FACILITY_H

#include "../Cell.h"

<<<<<<< HEAD
class Facility : public Cell{
	public
    Facility(int,int);
    
    virtual void interact();
    virtual void mix();
=======
class Facility : public Cell
{
  public:
    Facility(int, int);

    virtual int interact();
    virtual int mix();
>>>>>>> 07051eb724ffccc04b5261d5ba8ad7efb91e671d
};

#endif