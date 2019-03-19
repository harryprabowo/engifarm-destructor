#ifndef _GoatMilk_H
#define _GoatMilk_H  

#include "../FarmProduct.h"

class GoatMilk : public FarmProduct
{
public:
	GoatMilk();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif