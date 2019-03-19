#ifndef _ChickenEgg_H
#define _ChickenEgg_H  

#include "../FarmProduct.h"

class ChickenEgg : public FarmProduct
{
public:
	ChickenEgg();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif