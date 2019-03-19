#ifndef _COOP_H
#define _COOP_H 

#include "../Land.h"

class Coop : public Land{
	public:
		int landType(); //return an int representation of child class coop
};

#endif