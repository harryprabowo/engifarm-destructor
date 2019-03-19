#ifndef _TRUCK_H
#define _TRUCK_H 

#include "../Facility.h"

class Truck : public Facility
{
private:
	int lastUsed; //mengecek tick terakhir saat truck digunakan. untuk mengecek apa truck cooldown
public:
	Truck(); //ctor

	FACILITY_TYPE facilityType(); //return an int representation of child class truck

	void Interact(Player& P); //mengisi menjual semua product di inventori player jika tidak sedang cooldown

	char Render();		  //outputs char representation
	void SetRender(char); //setter
};
#endif