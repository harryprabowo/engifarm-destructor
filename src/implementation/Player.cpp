#include "../class/renderables/obj/Player.h"
#include <iostream>

using namespace std;

Player::Player(Map m){
	map = &m;
	tick = 0;
	bottle = 10;
	location = m.getObjectAt(1,1);
	vector<Product> v;
	inventory = v;
}

int Player::getBottle(){
	return bottle;
}

int Player::getTick(){
	return tick;
}

Cell* Player::getLocation(){
	return location;
}

vector<Product> Player::getInventory(){
	return inventory;
}

Map* Player::getMap(){
	return map;
}

void Player::setBottle(int b){
	bottle = b;
}

void Player::moveUp(){
	Cell* newLoc = map->getObjectAt(location->getX(),location->getY()+1);
	if(newLoc == NULL){
		cout << "Can't move there" << endl;
	}
}

void Player::moveDown(){
	Cell* newLoc = map->getObjectAt(location->getX(),location->getY()-1);
	if(newLoc == NULL){
		cout << "Can't move there" << endl;
	}
}

void Player::moveLeft(){
	Cell* newLoc = map->getObjectAt(location->getX()-1,location->getY());
	if(newLoc == NULL){
		cout << "Can't move there" << endl;
	}
}

void Player::moveRight(){
	Cell* newLoc = map->getObjectAt(location->getX()+1,location->getY());
	if(newLoc == NULL){
		cout << "Can't move there" << endl;
	}
}

void Player::talk(){

}

void Player::mix(FarmProduct &, FarmProduct &){

}

void Player::interact(Facility){

}

void Player::interact(FarmAnimal){

}

void Player::kill(){

}

void Player::grow(){

}