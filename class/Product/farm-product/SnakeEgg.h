#ifndef _SnakeEgg_H
#define _SnakeEgg_H  

#include "../FarmProduct.h"

class SnakeEgg : public FarmProduct
{
public:
	SnakeEgg();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif