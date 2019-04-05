#ifndef _COOP_H
#define _COOP_H

#include "../Land.h"

class Coop : public Land
{
  public:
	Coop(); // generate at random cell, set representation

	LAND_TYPE landType(); //return an int representation of child class coop
};

#endif