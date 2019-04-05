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

	void Interact(Player& P); //menjual semua product di inventori player jika tidak sedang cooldown

	char Render();		  //outputs char representation
	void SetRender(char); //setter
};
#endif