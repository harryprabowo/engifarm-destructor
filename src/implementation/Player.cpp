#include "../class/renderables/obj/Player.h"
#include <iostream>
#include <typeinfo>

using namespace std;

Player::Player(Map m){
	map = &m;
	tick = 0;
	bottle = 10;
	location = m.getObjectAt(1,1);
	vector<Product*> v;
	inventory = v;
}

FarmProduct& Player::searchInInvent(string p){
	for(int i=0;i<inventory.size();i++){
		if(typeid(inventory[i]).name() == p){
			return inventory[i];
		}
	}
	return NULL;
}

int Player::searchInInventPos(string p){
	for(int i=0;i<inventory.size();i++){
		if(typeid(inventory[i]).name() == p){
			return i;
		}
	}
	return 0;
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

vector<Product*> Player::getInventory(){
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
	bool animal = false;
	Renderables *r_top = map->getObjectAt(location->getX(),location->getY()+1)->getRenderable();
	Renderables *r_bot = map->getObjectAt(location->getX(),location->getY()-1)->getRenderable();
	Renderables *r_rig = map->getObjectAt(location->getX()+1,location->getY())->getRenderable();
	Renderables *r_lef = map->getObjectAt(location->getX()-1,location->getY())->getRenderable();
	if(r_top!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			fa->talk(); animal = true;
		}
	}
	else if(r_rig!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			fa->talk(); animal = true;
		}
	}
	else if(r_bot!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			fa->talk(); animal = true;
		}
	}
	else if(r_bot!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			fa->talk(); animal = true;
		}
	}
	if(!animal){
		cout << "No animal to talk to" << endl;
	}
}

void Player::mix(string p1, string p2){
	FarmProduct a = searchInInvent(p1); 
	FarmProduct b = searchInInvent(p2);
	int pos_a = searchInInventPos(p1); 
	int pos_b = searchInInventPos(p2);
	if(pos_a != NULL && pos_b != NULL){
		if((ChickenEgg* p1 = dynamic_cast<ChickenEgg*>(a) && (DuckEgg* p2 = dynamic_cast<DuckEgg*>(b))) || (ChickenEgg* p3 = dynamic_cast<ChickenEgg*>(b) && (DuckEgg* p4 = dynamic_cast<DuckEgg*>(a)))){
			inventory.erase(pos_a); inventory.erase(pos_b);
			inventory.push_back(new MysteriousEgg());
		}	
		else if((BirdMeat* p1 = dynamic_cast<BirdMeat*>(a) && (SnakeMeat* p2 = dynamic_cast<SnakeMeat*>(b))) || (SnakeMeat* p3 = dynamic_cast<SnakeMeat*>(b) && (BirdMeat* p4 = dynamic_cast<BirdMeat*>(a)))){
			inventory.erase(pos_a); inventory.erase(pos_b);
			inventory.push_back(new MysteriousMeat());
		}
		else if((GoatMilk* p1 = dynamic_cast<GoatMilk*>(a) && (CowMilk* p2 = dynamic_cast<CowMilk*>(b))) || (CowMilk* p3 = dynamic_cast<CowMilk*>(b) && (GoatMilk* p4 = dynamic_cast<GoatMilk*>(a)))){
			inventory.erase(pos_a); inventory.erase(pos_b);
			inventory.push_back(new MysteriousMilk());
		}
		else{
			cout << "Tidak bisa melakukan mix antara product tersebut" <<endl;
		}
	}
	else{
		cout << "Product tidak ada di inventory" << endl;
	}
}

void Player::interact(Facility&){
	bool animal = false;
	Renderables *r_top = map->getObjectAt(location->getX(),location->getY()+1)->getRenderable();
	Renderables *r_bot = map->getObjectAt(location->getX(),location->getY()-1)->getRenderable();
	Renderables *r_rig = map->getObjectAt(location->getX()+1,location->getY())->getRenderable();
	Renderables *r_lef = map->getObjectAt(location->getX()-1,location->getY())->getRenderable();
	if(r_top!= NULL){
		if(Facility* fa = dynamic_cast<Facility*>(r_top)){
			switch(fa->interact()){
				case 1 : cout << "Use command Mix" << endl; break;
				case 2 :
					int tot = 0;
					for(int i = 0;i<inventory.size();i++){
						tot+=inventory[i].getPrice();
					}
					inventory = new vector<Product>();
					cout << "Sold all items for "<<tot << endl;
					break;
				case 3 : bottle = 10; cout << "Bottle filled to the brim" << endl; break;
				default : cout << "Failed to use facility" << endl; break;
			}
		}
	}
	else if(r_rig!= NULL){
		if(Facility* fa = dynamic_cast<Facility*>(r_top)){
			Product* p = fa->interact(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	else if(r_bot!= NULL){
		if(Facility* fa = dynamic_cast<Facility*>(r_top)){
			Product* p = fa->interact(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	else if(r_bot!= NULL){
		if(Facility* fa = dynamic_cast<Facility*>(r_top)){
			Product* p = fa->interact(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	if(!animal){
		cout << "No animal to talk to" << endl;
	}
}

void Player::interact(FarmAnimal){
	bool animal = false;
	Renderables r_top = map->getObjectAt(location->getX(),location->getY()+1)->getRenderable();
	Renderables r_bot = map->getObjectAt(location->getX(),location->getY()-1)->getRenderable();
	Renderables r_rig = map->getObjectAt(location->getX()+1,location->getY())->getRenderable();
	Renderables r_lef = map->getObjectAt(location->getX()-1,location->getY())->getRenderable();
	if(r_top!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			Product* p = fa->interact(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	else if(r_rig!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			Product* p = fa->interact(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	else if(r_bot!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			Product* p = fa->interact(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	else if(r_bot!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			Product* p = fa->interact(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	if(!animal){
		cout << "No animal to talk to" << endl;
	}
}

void Player::kill(){
	bool animal = false;
	Renderables r_top = map->getObjectAt(location->getX(),location->getY()+1)->getRenderable();
	Renderables r_bot = map->getObjectAt(location->getX(),location->getY()-1)->getRenderable();
	Renderables r_rig = map->getObjectAt(location->getX()+1,location->getY())->getRenderable();
	Renderables r_lef = map->getObjectAt(location->getX()-1,location->getY())->getRenderable();
	if(r_top!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			Product* p = fa->kill(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	else if(r_rig!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			Product* p = fa->kill(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	else if(r_bot!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			Product* p = fa->kill(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	else if(r_bot!= NULL){
		if(FarmAnimal* fa = dynamic_cast<FarmAnimal*>(r_top)){
			Product* p = fa->kill(); animal = true;
			if(p!= null){inventory.push_back(p);}
		}
	}
	if(!animal){
		cout << "No animal to kill" << endl;
	}
}

void Player::grow(){
	if(!bottle){
		if(Land cell = dynamic_cast<Land*>(*location)){
			if(!cell->hasGrass()){
				bottle--;
				cell->setGrass(true);
			}
			else{
				cout << "Can't grow grass here" << endl;
			}
		}
		else{
			cout << "Already has grass" << endl;
		}
		
	}
	else{
		cout << "No water" << endl;
	}
}