#ifndef _BirdMeat_H
#define _BirdMeat_H 

#include "../FarmProduct.h"

class BirdMeat : public FarmProduct
{
public:
	BirdMeat();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif