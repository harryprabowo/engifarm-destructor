#ifndef _BARN_H
#define _BARN_H 

#include "../Land.h"

class Barn : public Land{
	public:
		Barn(); //ctor
		
		LAND_TYPE landType(); //return an int representation of child class barn
};

#endif