#include "../class/renderables/obj/Player.h"
#include "../class/Product/farm-product/SnakeMeat.h" // i dunno why
#include <iostream>
#include <typeinfo>

using namespace std;

Player::Player(Map m)
{
	map = &m;
	tick = 0;
	bottle = 10;
	location = m.getObjectAt(1, 1);
	vector<Product *> v;
	inventory = v;
	
	setRender('P');
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

void Player::moveUp()
{
	Cell *newLoc = map->getObjectAt(location->getX(), location->getY() + 1);
	if (newLoc == NULL)
	{
		cout << "Can't move there" << endl;
	}
}

void Player::moveDown()
{
	Cell *newLoc = map->getObjectAt(location->getX(), location->getY() - 1);
	if (newLoc == NULL)
	{
		cout << "Can't move there" << endl;
	}
}

void Player::moveLeft()
{
	Cell *newLoc = map->getObjectAt(location->getX() - 1, location->getY());
	if (newLoc == NULL)
	{
		cout << "Can't move there" << endl;
	}
}

void Player::moveRight()
{
	Cell *newLoc = map->getObjectAt(location->getX() + 1, location->getY());
	if (newLoc == NULL)
	{
		cout << "Can't move there" << endl;
	}
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
	
	for (auto i = inventory.begin(); i != inventory.end(); ++i)
		cout << (*i)->getProdName() << endl;
}