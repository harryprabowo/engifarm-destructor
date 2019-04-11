#include "../class/renderables/obj/Player.h"
#include <iostream>
#include <typeinfo>

#include "../../src/class/Product/farm-product/BirdMeat.h"
#include "../../src/class/Product/farm-product/ChickenEgg.h"
#include "../../src/class/Product/farm-product/ChickenMeat.h"
#include "../../src/class/Product/farm-product/CowMeat.h"
#include "../../src/class/Product/farm-product/CowMilk.h"
#include "../../src/class/Product/farm-product/DuckEgg.h"
#include "../../src/class/Product/farm-product/DuckMeat.h"
#include "../../src/class/Product/farm-product/GoatMeat.h"
#include "../../src/class/Product/farm-product/GoatMilk.h"
#include "../../src/class/Product/farm-product/SnakeEgg.h"
#include "../../src/class/Product/farm-product/SnakeMeat.h"

using namespace std;

Player::Player(Map *m)
{
	map = m;
	tick = 0;
	bottle = 10;
	money = 0;

	location = m->getObjectAt(0, 0); 
	location->setRenderable(this);

	vector<Product *> v;
	inventory = v;
	
	setRender('?');
}

Player::~Player()
{

}

FarmProduct *Player::searchInInvent(string p)
{
	for (int i = 0; i < inventory.size(); i++)
	{
		if (typeid(inventory[i]).name() == p)
		{
			FarmProduct *some = static_cast<FarmProduct *>(inventory[i]);
			return some;
		}
	}

	return NULL;
}

int Player::searchInInventPos(string p)
{
	for (int i = 0; i < inventory.size(); i++)
	{
		if (typeid(inventory[i]).name() == p)
		{
			return i;
		}
	}
	return 0;
}

int Player::getBottle()
{
	return bottle;
}

int Player::getTick()
{
	return tick;
}

double Player::getMoney()
{
	return money;
}

Cell *Player::getLocation()
{
	return location;
}

vector<Product *> Player::getInventory()
{
	return inventory;
}

Map *Player::getMap()
{
	return map;
}

void Player::setBottle(int b)
{
	bottle = b;
}

void Player::move(int x, int y)
{
	Cell *c = map->getObjectAt(location->getX() + x, location->getY() + y);
	if (c->getRenderable() != NULL)
		cout << "Can't move there" << endl;
	else
	{
		location->setRenderable(NULL);
		location = c;
		location->setRenderable(this);
	}
}

void Player::moveUp()
{
	if(location->getX() == 0)
		return;

	move(-1,0);
}

void Player::moveDown()
{
	if (location->getX() == MAX_MAP_HEIGHT - 1)
		return;

	move(1,0);
}

void Player::moveLeft()
{
	if (location->getY() == 0)
		return;

	move(0,-1);
}

void Player::moveRight()
{
	if (location->getY() == MAX_MAP_WIDTH - 1)
		return;

	move(0,1);
}

void Player::talk()
{
	bool animal = false;
	Renderables *r_top = map->getObjectAt(location->getX(), location->getY() + 1)->getRenderable();
	Renderables *r_bot = map->getObjectAt(location->getX(), location->getY() - 1)->getRenderable();
	Renderables *r_rig = map->getObjectAt(location->getX() + 1, location->getY())->getRenderable();
	Renderables *r_lef = map->getObjectAt(location->getX() - 1, location->getY())->getRenderable();
	if (r_top != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_top))
		{
			fa->talk();
			animal = true;
		}
	}
	else if (r_rig != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_top))
		{
			fa->talk();
			animal = true;
		}
	}
	else if (r_bot != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_top))
		{
			fa->talk();
			animal = true;
		}
	}
	else if (r_bot != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_top))
		{
			fa->talk();
			animal = true;
		}
	}
	if (!animal)
	{
		cout << "No animal to talk to" << endl;
	}
}

void Player::mix(string s1, string s2)
{
	FarmProduct *a = searchInInvent(s1);
	FarmProduct *b = searchInInvent(s2);
	
	int pos_a = searchInInventPos(s1);
	int pos_b = searchInInventPos(s2);

	if (pos_a != NULL && pos_b != NULL)
	{
		if ((static_cast<ChickenEgg *>(a) != NULL && static_cast<DuckEgg *>(b) != NULL) || (static_cast<ChickenEgg *>(b) != NULL && (static_cast<DuckEgg *>(a) != NULL)))
		{
			inventory.erase(inventory.begin() + pos_a);
			inventory.erase(inventory.begin() + pos_b);
			inventory.push_back(new MysteriousEgg());
		}
		else if ((static_cast<GoatMilk *>(a) != NULL && (static_cast<CowMilk *>(b) != NULL)) || (static_cast<CowMilk *>(a) != NULL && (static_cast<GoatMilk *>(b) != NULL)))
		{
			inventory.erase(inventory.begin() + pos_a);
			inventory.erase(inventory.begin() + pos_b);
			inventory.push_back(new MysteriousMilk());
		}
		else if ((static_cast<BirdMeat *>(a) != NULL && (static_cast<SnakeMeat *>(b) != NULL)) || (static_cast<SnakeMeat *>(a) != NULL && (static_cast<BirdMeat *>(b) != NULL)))
		{
			inventory.erase(inventory.begin() + pos_a);
			inventory.erase(inventory.begin() + pos_b);
			inventory.push_back(new MysteriousMeat());
		}
		else
		{
			cout << "Tidak bisa melakukan mix antara product tersebut" << endl;
		}
	}
	else
	{
		cout << "Product tidak ada di inventory" << endl;
	}
}

void Player::interact(Facility &)
{
	bool animal = false;
	Renderables *r_top = map->getObjectAt(location->getX(), location->getY() + 1)->getRenderable();
	Renderables *r_bot = map->getObjectAt(location->getX(), location->getY() - 1)->getRenderable();
	Renderables *r_rig = map->getObjectAt(location->getX() + 1, location->getY())->getRenderable();
	Renderables *r_lef = map->getObjectAt(location->getX() - 1, location->getY())->getRenderable();
	if (r_top != NULL)
	{
		if (Facility *fa = static_cast<Facility *>(r_top))
		{
			switch (fa->interact())
			{
			case 1:
				cout << "Use command Mix" << endl;
				break;
			case 2:
			{
				int tot = 0;

				for (int i = 0; i < inventory.size(); i++)
					tot += inventory[i]->getPrice();

				inventory.clear();

				cout << "Sold all items for " << tot << endl;
				break;
			}
			case 3:
				bottle = 10;
				cout << "Bottle filled to the brim" << endl;
				break;
			default:
				cout << "Failed to use facility" << endl;
				break;
			}
		}
	}
	else if (r_rig != NULL)
	{
		if (Facility *fa = static_cast<Facility *>(r_rig))
		{
			switch (fa->interact())
			{
			case 1:
				cout << "Use command Mix" << endl;
				break;
			case 2:
			{
				int tot = 0;

				for (int i = 0; i < inventory.size(); i++)
					tot += inventory[i]->getPrice();

				inventory.clear();

				cout << "Sold all items for " << tot << endl;
				break;
			}
			case 3:
				bottle = 10;
				cout << "Bottle filled to the brim" << endl;
				break;
			default:
				cout << "Failed to use facility" << endl;
				break;
			}
		}
	}
	else if (r_bot != NULL)
	{
		if (Facility *fa = static_cast<Facility *>(r_bot))
		{
			switch (fa->interact())
			{
			case 1:
				cout << "Use command Mix" << endl;
				break;
			case 2:
			{
				int tot = 0;

				for (int i = 0; i < inventory.size(); i++)
					tot += inventory[i]->getPrice();

				inventory.clear();

				cout << "Sold all items for " << tot << endl;
				break;
			}
			case 3:
				bottle = 10;
				cout << "Bottle filled to the brim" << endl;
				break;
			default:
				cout << "Failed to use facility" << endl;
				break;
			}
		}
	}
	else if (r_lef != NULL)
	{
		if (Facility *fa = static_cast<Facility *>(r_lef))
		{
			switch (fa->interact())
			{
			case 1:
				cout << "Use command Mix" << endl;
				break;
			case 2:
			{
				int tot = 0;

				for (int i = 0; i < inventory.size(); i++)
					tot += inventory[i]->getPrice();

				inventory.clear();

				cout << "Sold all items for " << tot << endl;
				break;
			}
			case 3:
				bottle = 10;
				cout << "Bottle filled to the brim" << endl;
				break;
			default:
				cout << "Failed to use facility" << endl;
				break;
			}
		}
	}
	if (!animal)
	{
		cout << "No animal to talk to" << endl;
	}
}

void Player::interact(FarmAnimal)
{
	bool animal = false;
	Renderables *r_top = map->getObjectAt(location->getX(), location->getY() + 1)->getRenderable();
	Renderables *r_bot = map->getObjectAt(location->getX(), location->getY() - 1)->getRenderable();
	Renderables *r_rig = map->getObjectAt(location->getX() + 1, location->getY())->getRenderable();
	Renderables *r_lef = map->getObjectAt(location->getX() - 1, location->getY())->getRenderable();

	if (r_top != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_top))
		{
			Product *p = fa->interact();
			animal = true;
			if (p != NULL)
			{
				inventory.push_back(p);
			}
		}
	}
	else if (r_rig != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_rig))
		{
			Product *p = fa->interact();
			animal = true;
			if (p != NULL)
			{
				inventory.push_back(p);
			}
		}
	}
	else if (r_bot != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_bot))
		{
			Product *p = fa->interact();
			animal = true;
			if (p != NULL)
			{
				inventory.push_back(p);
			}
		}
	}
	else if (r_lef != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_lef))
		{
			Product *p = fa->interact();
			animal = true;
			if (p != NULL)
			{
				inventory.push_back(p);
			}
		}
	}
	if (!animal)
	{
		cout << "No animal to talk to" << endl;
	}
}

void Player::kill()
{
	bool animal = false;

	Renderables *r_top = map->getObjectAt(location->getX(), location->getY() + 1)->getRenderable();
	Renderables *r_bot = map->getObjectAt(location->getX(), location->getY() - 1)->getRenderable();
	Renderables *r_rig = map->getObjectAt(location->getX() + 1, location->getY())->getRenderable();
	Renderables *r_lef = map->getObjectAt(location->getX() - 1, location->getY())->getRenderable();

	if (r_top != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_top))
		{
			Product *p = fa->kill();
			animal = true;
			if (p != NULL)
			{
				inventory.push_back(p);
			}
		}
	}
	else if (r_bot != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_bot))
		{
			Product *p = fa->kill();
			animal = true;
			if (p != NULL)
			{
				inventory.push_back(p);
			}
		}
	}
	else if (r_rig != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_rig))
		{
			Product *p = fa->kill();
			animal = true;
			if (p != NULL)
			{
				inventory.push_back(p);
			}
		}
	}
	else if (r_lef != NULL)
	{
		if (FarmAnimal *fa = static_cast<FarmAnimal *>(r_lef))
		{
			Product *p = fa->kill();
			animal = true;
			if (p != NULL)
			{
				inventory.push_back(p);
			}
		}
	}

	if (!animal)
	{
		cout << "No animal to kill" << endl;
	}
}

void Player::grow()
{
	if (!bottle)
	{
		if (Land *cell = static_cast<Land *>(location))
		{
			if (!cell->hasGrass())
			{
				bottle--;
				cell->setGrass(true);
			}
			else
			{
				cout << "Can't grow grass here" << endl;
			}
		}
		else
		{
			cout << "Already has grass" << endl;
		}
	}
	else
	{
		cout << "No water" << endl;
	}
}

void Player::printInventory()
{
	cout << "INVENTORY" << endl;
	cout << "----------------------------" << endl;

	if(inventory.empty())
		cout << "<empty>" << endl;
	else {
		for (auto i = inventory.begin(); i != inventory.end(); ++i)
			cout << (*i)->getProdName() << endl;
	}
}