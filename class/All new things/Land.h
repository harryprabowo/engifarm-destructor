#ifndef _LAND_H
#define _LAND_H

#include "Cell.h"

class Land : public Cell{
	public:
		Land();
		int cellType(); //return an int representation of child class land
		virtual int landType();
};

#endif