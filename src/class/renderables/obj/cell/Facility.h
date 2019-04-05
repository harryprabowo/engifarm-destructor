#ifndef FACILITY_H
#define FACILITY_H

#include "Cell.h"

enum FACILITY_TYPE
{
	WELL,
	MIXER,
	TRUCK
};

class Facility : public Cell //ABC
{
public:
	/* Getters */
	CELL_TYPE cellType(); //return an int representation of child class facility

	/* Virtuals */
	virtual FACILITY_TYPE facilityType() = 0; //mengembalikan jenis facility

protected:
	CELL_TYPE cellType;
};

#endif