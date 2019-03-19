#ifndef _MysteriousMilk_H
#define _MysteriousMilk_H  

#include "../SideProduct.h"

class MysteriousMilk : public SideProduct //GoatMilk + CowMilk
{
public:
	MysteriousMilk();
	//set price dari Product ini

	int sideProductType(); //mengembalikan identifier dari produk ini
};
#endif