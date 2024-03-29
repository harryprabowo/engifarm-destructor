#ifndef FARM_ANIMAL_H
#define FARM_ANIMAL_H

#include "Cell.h"
#include "../../map/Map.h"
#include "../../Product/Product.h"

class FarmAnimal : public Renderables //ABC
{
public:
	FarmAnimal(Map *);
	virtual ~FarmAnimal();

	/* Getters & setters */
	Cell *getCell(); //returns container cell
	bool isHungry();
	int getHungryDuration();

	void setHungry(bool);
	void setHungryTime(int);
	void setCell(Cell *);

	/* Position-related methods - Setter for &cell */
	void move(int,int); //random move
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void moveRand();

	/* Methods */
	virtual void eatFood();		 // Hewan makan rumput jika lapar dan berada pada Cell yang ditumbuhi rumput \
							Hewan yang memiliki FarmProduct akan berbeda jika makan
	virtual void talk();		 // talk with player
	virtual Product *interact(); // interact oleh player menghasilkan product - NULL default
	virtual Product *kill();	 // kill oleh player menghasilkan nama daging - NULL default

protected:
	Cell *location;			// Pointer ke lokasi hewan
	bool hungry;		// Menandai hewan lapar(true) dan tidak lapar(false)
	int hungryDuration; // Menghitung waktu hewan ketika lapar
	Map *map;
};

#endif