#ifndef _DuckMeat_H
#define _DuckMeat_H  

#include "../FarmProduct.h"

class DuckMeat : public FarmProduct
{
public:
	DuckMeat();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif