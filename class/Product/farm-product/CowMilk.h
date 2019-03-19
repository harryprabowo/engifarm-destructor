#ifndef _CowMilk_H
#define _CowMilk_H  

#include "../FarmProduct.h"

class CowMilk : public FarmProduct
{
public:
	CowMilk();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif