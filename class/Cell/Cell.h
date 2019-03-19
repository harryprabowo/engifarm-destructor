#ifndef _CELL_H
#define _CELL_H

#define LAND_IDX 1
#define FAC_IDX 2

class Cell{
	protected:
		int x;
		int y;
		bool grass;
	public:
		Cell(int _x, int _y);
		int getX();
		int getY();
		bool getGrass();
		void setGrass(bool _grass);
		virtual int cellType();
};

#endif