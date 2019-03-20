#ifndef _DuckMeat_H
#define _DuckMeat_H  

#include "../FarmProduct.h"

const int harga;

class DuckMeat : public FarmProduct
{
public:
	DuckMeat();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif