#ifndef _LAND_H
#define _LAND_H

#include "Cell.h"

#define COOP_IDX 1
#define GRASS_IDX 2
#define BARN_IDX 3

class Land : public Cell{
	public:
		Land(); //ctor
		int cellType(); //return an int representation of child class land
		void Grow(Player& P); //mengubah land menjadi grassland dengan menyiramnya
		virtual int landType(); //mengembalikan jenis land
};

#endif