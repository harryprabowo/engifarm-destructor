#ifndef _CELL_H
#define _CELL_H

class Cell{
	protected:
		int x;
		int y;
	public:
		Cell(int _x, int _y);
		int getX();
		int getY();
};

#endif