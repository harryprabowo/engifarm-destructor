#ifndef _CowMilk_H
#define _CowMilk_H  

#include "../FarmProduct.h"

const int harga;

class CowMilk : public FarmProduct
{
public:
	CowMilk();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif