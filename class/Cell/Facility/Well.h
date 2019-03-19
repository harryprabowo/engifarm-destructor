#ifndef _WELL_H
#define _WELL_H 

#include "../Facility.h"

class Well : public Facility
{
public:
	Well(); //ctor
	int facilityType(); //return an int representation of child class well
	void Interact(Player& P); //mengisi wadah air
};
#endif