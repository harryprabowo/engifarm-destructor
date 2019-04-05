#ifndef _BARN_H
#define _BARN_H

#include "../Land.h"

class Barn : public Land
{
  public:
	/* Constructor */
	Barn(int, int); // generate at random cell, set representation
	void setGrass(bool); //setter grass
};

#endif