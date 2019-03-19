#ifndef _LAND_H
#define _LAND_H

#include "Cell.h"

enum LAND_TYPE {
	COOP,
	GRASS,
	BARN
}

class Land : public Cell{
	public:
		Land(); //ctor

		CELL_TYPE cellType(); //return an int representation of child class land

		void Grow(Player &P); //mengubah land menjadi grassland dengan menyiramnya

		virtual LAND_TYPE landType() = 0; //mengembalikan jenis land
};

#endif