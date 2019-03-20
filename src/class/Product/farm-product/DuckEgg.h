#ifndef _DUCKEGG_H
#define _DUCKEGG_H  

#include "../FarmProduct.h"

const int harga;

class DuckEgg : public FarmProduct
{
public:
	DuckEgg();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif