#ifndef _SnakeMeat_H
#define _SnakeMeat_H  

#include "../FarmProduct.h"

const int harga;

class SnakeMeat : public FarmProduct
{
public:
	SnakeMeat();
	//set price dari Product ini

	FARMPRODUCT_TYPE farmProductType(); //mengembalikan identifier dari produk ini
};
#endif