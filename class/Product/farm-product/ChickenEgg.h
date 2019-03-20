#ifndef _ChickenEgg_H
#define _ChickenEgg_H  

#include "../FarmProduct.h"

const int harga;

class ChickenEgg : public FarmProduct
{
public:
	ChickenEgg();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif