#ifndef _MysteriousMilk_H
#define _MysteriousMilk_H  

#include "../SideProduct.h"

const int harga;

class MysteriousMilk : public SideProduct //GoatMilk + CowMilk
{
public:
	MysteriousMilk();
	//set price dari Product ini

	SIDEPRODUCT_TYPE sideProductType(); //mengembalikan identifier dari produk ini
};
#endif