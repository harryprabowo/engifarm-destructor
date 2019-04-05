#ifndef _GRASSLAND_H
#define _GRASSLAND_H

#include "../Land.h"

class Grassland : public Land
{
  public:
	Grassland(int, int); // generate at random cell, set representation
	void setGrass(bool); //setter grass
};

#endif