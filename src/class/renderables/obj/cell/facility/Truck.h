#ifndef _TRUCK_H
#define _TRUCK_H 

#include "../Facility.h"

const int cooldown;

class Truck : public Facility
{
private:
	int lastUsed; //mengecek tick terakhir saat truck digunakan. untuk mengecek apa truck cooldown
public:
	Truck(int, int); //ctor

	int cooldown(); //return cooldown tetap dari truck

	int interact();
	int mix();
};
#endif