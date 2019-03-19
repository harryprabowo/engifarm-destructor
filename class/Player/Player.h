#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>
#include <vector>
#include <iterator>
#include "Cell.h"
#include "Land.h"
#include "Facility.h"
#include "Product.h"
#include "FarmProduct.h"

class Player
{
  private:
	string name;
	int bottle;
	Land *location;
	vector<Product> inventory;
  public:
	//ctor
	Player(string _name);
	//dtor
	~Player();
	//getter
	Land getLocation();
	string getName();
	//setLoc
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
	void setName();
	//function in player
	//talk to animal
	void Talk(FarmAnimal &);
	//mix in mixer
	void Mix(FarmProduct &, FarmProduct &);
	//interact
	void Interact(Well &);
	void Interact(Truck &);
	void Interact(FarmAnimal &);
	//kill animal
	void Kill(FarmAnimal &);
	//put water in a land
	void Grow(Land &);
};
#endif