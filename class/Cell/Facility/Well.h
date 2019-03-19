#ifndef _WELL_H
#define _WELL_H 

#include "Facility.h"

class Well : public Facility
{
public:
	int facilityType(); //return an int representation of child class well	
};
#endif