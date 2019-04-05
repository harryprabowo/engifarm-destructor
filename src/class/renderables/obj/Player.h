#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "cell/Cell.h"
#include "../product/Product.h"
#include "../map/Map.h"

using namespace std;

class Player
{
  public:
	/* Constructor */
	Player(string); // call map constructor as well
	/* Destructor */
	~Player();

	/* Getters */
	int getBottle();
	int getTick();
	Cell getLocation();
	vector<Product> getInventory();
	const Map<Renderables> &getMap() const;

	/* Setters */
	void setName(string);
	void setBottle(int);

	/* Methods concerning processTick() */
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void talk(); // talk to animal
	void mix(FarmProduct &, FarmProduct &);
	void interact(Facility);
	void interact(FarmAnimal);
	void kill();
	void grow();

  private:
	const Map<Renderables> &map; // permanent(?) reference to map

	static int tick; // menghitung jumlah aksi yang dilalui
	int bottle;
	Cell *location;
	vector<Product> inventory;

	void processTick();
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