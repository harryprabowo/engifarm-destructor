#ifndef _GRASSLAND_H
#define _GRASSLAND_H

#include "../Land.h"

class Grassland : public Land
{
  public:
		Grassland(); // generate at random cell, set representation

		LAND_TYPE landType(); //return an int representation of child class grassland
};

#endif