#ifndef _FARM_PRODUCT_H
#define _FARM_PRODUCT_H 

#include "Product.h"

class FarmProduct : public Product
{
public:
	virtual int farmProductType(); //mengembalikan jenis farm product
};
#endif