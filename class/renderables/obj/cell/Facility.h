#ifndef _FACILITY_H
#define _FACILITY_H

#include "Cell.h"

enum FACILITY_TYPE {
	WELL,
	MIXER,
	TRUCK
};

class Facility : public Cell{
	private:
		const CELLTYPE type;
	public:
		Facility(); //ctor

		CELL_TYPE cellType() const; //return an int representation of child class facility

		virtual int facilityType() const = 0; //mengembalikan jenis facility

		virtual void Interact(Player& P) = 0;
};

#endif