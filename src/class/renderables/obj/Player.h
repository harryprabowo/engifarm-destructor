#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "Cell.h"
#include "FarmAnimal.h"
#include "../../Product/Product.h"
#include "../../map/Map.h"
#include "../../Product/FarmProduct.h"
#include "../../Product/SideProduct.h"
#include "cell/Facility.h"
#include "cell/Land.h"
#include "cell/land/Grassland.h"
#include "cell/land/Coop.h"
#include "cell/land/Barn.h"
#include "cell/facility/Mixer.h"
#include "cell/facility/Truck.h"
#include "cell/facility/Well.h"

using namespace std;

class Player : public Renderables
{
  public:
	/* Constructor */
	Player(Map *m); // call map constructor as well
	/* Destructor */
	virtual ~Player();

	/* Getters */
	int getBottle();
	int getTick();
	double getMoney();
	Cell* getLocation();
	vector<Product*> getInventory();
	Map* getMap();

	/* Setters */
	void setBottle(int);

	/* Methods concerning processTick() */
	void move(int, int);
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void talk(); // talk to animal
	void mix(string,string);
	void interact(Facility&);
	void interact(FarmAnimal);
	void kill();
	void grow();

	/* Other methods */
	void printInventory();

  private:
	Map *map; // permanent(?) reference to map

	int tick; // menghitung jumlah aksi yang dilalui
	int bottle;
	double money;
	Cell *location;
	vector<Product*> inventory;

	void processTick();
	FarmProduct* searchInInvent(string p);
	int searchInInventPos(string p);
	/*
		dipanggil setiap aksi :
		- move
		- talk
		- mix
		- interact
		- kill
		- grow

		mengatur penambahan tick, pergerakan random farm animal,
		dan juga mengecek kondisi berakhirnya game.
	*/
};

#endif