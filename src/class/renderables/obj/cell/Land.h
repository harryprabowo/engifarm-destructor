#ifndef LAND_H
#define LAND_H

#include "../Cell.h"

enum LAND_TYPE
{
	COOP,
	GRASS,
	BARN
};

class Land : public Cell // ABC
{
  public:
		/* Getters */
		CELL_TYPE cellType(); //return an int representation of child class facility

		/* Methods */
		//void grow(Player &P); //menumbuhkan rumput pada Land - what is this?
		bool isGrass(); //return grass
		void setGrass(bool); //setter grass

		/* Virtuals */
		virtual LAND_TYPE landType() = 0; //mengembalikan jenis land

  private:
		bool grass; //kondisi apakah ada rumput atau tidak di land ini
};

#endif