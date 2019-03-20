#ifndef _BirdMeat_H
#define _BirdMeat_H 

#include "../FarmProduct.h"

const int harga;

class BirdMeat : public FarmProduct
{
public:
	BirdMeat();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif