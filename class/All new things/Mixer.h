#ifndef _MIXER_H
#define _MIXER_H 

#include "Facility.h"

class Mixer : public Facility
{
public:
	Mixer();
	~Mixer();
	int facilityType(); //return an int representation of child class mixer	
};
#endif