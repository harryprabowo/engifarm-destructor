#ifndef _MIXER_H
#define _MIXER_H 

#include "../Facility.h"

class Mixer : public Facility
{
public:
	Mixer(); //ctor
	
	FACILITY_TYPE facilityType(); //return an int representation of child class mixer

	char Render();		  //outputs char representation
	void SetRender(char); //setter
};
#endif