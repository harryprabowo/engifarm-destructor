#include "../class/renderables/obj/FarmAnimal.h"
#include <stddef.h>
#include <ctime>

#define HUNGRY_DURATION 5

using namespace std;

FarmAnimal::FarmAnimal(Map * m)
{
	hungry = false;
	hungryDuration = 0;

	map = m;

	srand(time(NULL));
	int x = rand() % MAX_MAP_WIDTH;
	srand(time(NULL));
	int y = rand() % MAX_MAP_HEIGHT;

	location = m->getObjectAt(x, y);
	location->setRenderable(this);
}

FarmAnimal::~FarmAnimal()
{
}

// Move dan Eat belum implementasi

/* Getters & setters */
Cell *FarmAnimal::getCell()
{
	return location;
}
//returns container cell

bool FarmAnimal::isHungry()
{
	return hungry;
}

int FarmAnimal::getHungryDuration()
{
	return hungryDuration;
}

void FarmAnimal::setHungry(bool h)
{
	hungry = h;
}

void FarmAnimal::setHungryTime(int t)
{
	hungryDuration = t;
}

void FarmAnimal::setCell(Cell *c)
{
	*location = *c;
}

/* Position-related methods - Setter for &cell */

void FarmAnimal::move(int x, int y)
{
	Cell *c = map->getObjectAt(location->getX() + x, location->getY() + y);

	if (c->getRenderable() == NULL)
	{
		location->setRenderable(NULL);
		location = c;
		location->setRenderable(this);
	}
	else
		moveRand();
}
//random move

void FarmAnimal::moveUp()
{
	if (location->getY() == 0)
		return;

	move(-1, 0);
}

void FarmAnimal::moveDown()
{
	if (location->getY() == MAX_MAP_HEIGHT - 1)
		return;

	move(1, 0);
}

void FarmAnimal::moveLeft()
{
	if (location->getX() == 0)
		return;

	move(0, -1);
}

void FarmAnimal::moveRight()
{
	if (location->getY() == MAX_MAP_WIDTH - 1)
		return;

	move(0, 1);
}

void FarmAnimal::moveRand()
{
	srand(time(NULL));

	int n = rand() % 4 + 1;

	if (n == 1)
		moveUp();
	else if (n == 2)
		moveDown();
	else if (n == 3)
		moveLeft();
	else
		moveRight();
}

void FarmAnimal::eatFood()
{
}
void FarmAnimal::talk()
{
}

Product *FarmAnimal::interact()
{
}

Product *FarmAnimal::kill()
{
}