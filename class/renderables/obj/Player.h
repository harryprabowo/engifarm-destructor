#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>
#include <vector>
#include <iterator>
#include "cell/Land.h"
#include "cell/Facility.h"
#include "../product/Product.h"
#include "../product/FarmProduct.h"
#include "../map/Map.h"

using namespace std;

class Player
{
  private:
	string name;
	int bottle;
	int tick; //menghitung jumlah aksi yang dilalui
	Cell &location;
	vector<Product> inventory;
	Map<Cell> &map;

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

  public:
	//ctor player, memanggil juga ctor map
	Player(string _name);
	//dtor
	~Player();

	//getter
	string getName();
	int getBottle();
	int getTick();
	Cell getLocation();
	vector<Product> getInventory();
	Map<Cell> getMap();

	//setter
	void setName(string);
	void setBottle(int);
	void addProduct(string productName, int count);
	void removeProduct(string productName, int count);

	//Fungsi-fungsi yang memanggil processTick
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
	void Talk(); //talk to animal
	void Mix(FarmProduct &, FarmProduct &);
	void Interact();
	void Kill();
	void Grow();
};

#endif