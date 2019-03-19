#ifndef _SnakeMeat_H
#define _SnakeMeat_H  

#include "../FarmProduct.h"

class SnakeMeat : public FarmProduct
{
public:
	SnakeMeat();
	//set price dari Product ini

	int farmProductType(); //mengembalikan identifier dari produk ini
};
#endif