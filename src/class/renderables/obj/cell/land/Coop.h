#ifndef _COOP_H
#define _COOP_H

#include "../Land.h"

class Coop : public Land
{
  public:
	Coop(); // generate at random cell, set representation
	void setGrass(bool); //setter grass
};

#endif