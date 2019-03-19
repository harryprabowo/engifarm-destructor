#ifndef _DUCKEGG_H
#define _DUCKEGG_H  

#include "../FarmProduct.h"

class DuckEgg : public FarmProduct
{
public:
	DuckEgg();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif