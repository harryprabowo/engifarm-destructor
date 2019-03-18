#ifndef _TRUCK_H
#define _TRUCK_H 

#include "Facility.h"

class Truck : public Facility
{
public:
	Truck();
	~Truck();
	int facilityType(); //return an int representation of child class truck
};
#endif