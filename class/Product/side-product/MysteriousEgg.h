#ifndef _MysteriousEgg_H
#define _MysteriousEgg_H 

#include "../SideProduct.h"

const int harga;

class MysteriousEgg : public SideProduct //ChickenEgg + DuckEgg
{
public:
	MysteriousEgg();
	//set price dari Product ini

	SIDEPRODUCT_TYPE sideProductType(); //mengembalikan identifier dari produk ini
};
#endif