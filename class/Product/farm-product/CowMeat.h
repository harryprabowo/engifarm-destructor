#ifndef _CowMeat_H
#define _CowMeat_H  

#include "../FarmProduct.h"

class CowMeat : public FarmProduct
{
public:
	CowMeat();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif