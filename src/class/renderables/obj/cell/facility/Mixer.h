#ifndef MIXER_H
#define MIXER_H

#include "../Facility.h"

class Mixer : public Facility
{
  public:
	/* Constructor */
	Mixer(int, int); // generate at hardcoded cell pos

	void mix();
};

#endif