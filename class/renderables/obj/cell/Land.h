#ifndef _LAND_H
#define _LAND_H

#include "Cell.h"

enum LAND_TYPE {
	COOP,
	GRASS,
	BARN
};

class Land : public Cell{
	private:
		bool grass; //kondisi apakah ada rumput atau tidak di land ini

	public:
		Land(); //ctor

		CELL_TYPE cellType(); //return an int representation of child class land

		void Grow(Player &P); //menumbuhkan rumput pada Land

    	bool IsGrass(); //return grass

    	void setGrass(bool); //setter grass

		virtual LAND_TYPE landType() = 0; //mengembalikan jenis land
};

#endif