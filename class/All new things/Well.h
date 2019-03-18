#ifndef _WELL_H
#define _WELL_H 

#include "Facility.h"

class Well : public Facility
{
public:
	Well();
	~Well();
	int facilityType(); //return an int representation of child class well
	
};
#endif