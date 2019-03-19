#ifndef _GRASSLAND_H
#define _GRASSLAND_H

#include "../Land.h"

class Grassland : public Land{
	public:
		Grassland(); //ctor

		LAND_TYPE landType(); //return an int representation of child class barn
};
#endif