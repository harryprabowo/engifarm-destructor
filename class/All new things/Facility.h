#ifndef _FACILITY_H
#define _FACILITY_H

#include "Cell.h"

class Facility : public Cell{
	public:
		int cellType(); //return an int representation of child class facility
		virtual int facilityType();
};


#endif