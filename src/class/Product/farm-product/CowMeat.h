#ifndef _CowMeat_H
#define _CowMeat_H  

#include "../FarmProduct.h"

const int harga;

class CowMeat : public FarmProduct
{
public:
	CowMeat();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif