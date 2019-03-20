#ifndef _ChickenMeat_H
#define _ChickenMeat_H  

#include "../FarmProduct.h"

const int harga;

class ChickenMeat : public FarmProduct
{
public:
	ChickenMeat();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif