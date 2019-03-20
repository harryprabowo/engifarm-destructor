#ifndef _GoatMilk_H
#define _GoatMilk_H  

#include "../FarmProduct.h"

const int harga;

class GoatMilk : public FarmProduct
{
public:
	GoatMilk();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif