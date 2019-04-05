#ifndef LAND_H
#define LAND_H

#include "../Cell.h"

class Land : public Cell // ABC
{
  public:
		/* Getters */
		bool hasGrass(); //return grass

		/* Methods */
		void setGrass(bool); //setter grass
  private:
		bool grass; //kondisi apakah ada rumput atau tidak di land ini
};

#endif