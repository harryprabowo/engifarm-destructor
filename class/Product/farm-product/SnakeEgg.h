#ifndef _SnakeEgg_H
#define _SnakeEgg_H  

#include "../FarmProduct.h"

const int harga;

class SnakeEgg : public FarmProduct
{
public:
	SnakeEgg();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif