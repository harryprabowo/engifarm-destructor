#ifndef _MysteriousMeat_H
#define _MysteriousMeat_H  

#include "../SideProduct.h"

const int harga;

class MysteriousMeat : public SideProduct //BirdMeat + SnakeMeat
{
public:
	MysteriousMeat();
	//set price dari Product ini

	SIDEPRODUCT_TYPE sideProductType(); //mengembalikan identifier dari produk ini
};
#endif