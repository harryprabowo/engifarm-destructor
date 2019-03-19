#ifndef _FACILITY_H
#define _FACILITY_H

#include "Cell.h"

#define WELL_IDX 1
#define MIXER_IDX 2
#define TRUCK_IDX 3

class Facility : public Cell{
	public:
		Facility(); //ctor
		int cellType(); //return an int representation of child class facility
		virtual int facilityType(); //mengembalikan jenis facility
		virtual void Interact(Player& P);
};

#endif