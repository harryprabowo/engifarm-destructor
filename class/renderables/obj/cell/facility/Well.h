#ifndef _WELL_H
#define _WELL_H 

#include "../Facility.h"

class Well : public Facility
{
public:
	Well(); //ctor

	FACILITY_TYPE facilityType(); //return an int representation of child class well

	void Interact(Player& P); //mengisi wadah air

	char Render();		  //outputs char representation
	void SetRender(char); //setter
};
#endif