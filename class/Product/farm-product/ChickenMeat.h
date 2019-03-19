#ifndef _ChickenMeat_H
#define _ChickenMeat_H  

#include "../FarmProduct.h"

class ChickenMeat : public FarmProduct
{
public:
	ChickenMeat();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif