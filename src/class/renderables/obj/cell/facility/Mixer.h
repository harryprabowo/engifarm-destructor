#ifndef MIXER_H
#define MIXER_H

#include "../Facility.h"

class Mixer : public Facility
{
  public:
	/* Constructor */
	Mixer(); // generate at hardcoded cell pos

	/* Overrides */
	FACILITY_TYPE facilityType(); //return an int representation of child class mixer

	char Render();		  //outputs char representation
	void SetRender(char); //setter
};

#endif