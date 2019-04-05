#ifndef _WELL_H
#define _WELL_H 

#include "../Facility.h"

class Well : public Facility
{
public:
	Well(int, int); //ctor

	void Interact(Player& P); //mengisi wadah air

	char Render();		  //outputs char representation
	void SetRender(char); //setter
};
#endif