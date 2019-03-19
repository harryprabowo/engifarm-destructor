#ifndef _GoatMeat_H
#define _GoatMeat_H  

#include "../FarmProduct.h"

class GoatMeat : public FarmProduct
{
public:
	GoatMeat();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif