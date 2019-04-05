#ifndef _FARM_PRODUCT_H
#define _FARM_PRODUCT_H 

#include "Product.h"

enum FARMPRODUCT_TYPE
{
    BIRDMEAT,
    CHICKENMEAT,
    COWMEAT,
    DUCKMEAT,
    GOATMEAT,
    SNAKEMEAT,

    CHICKENEGG,
    DUCKEGG,
    SNAKEEGG,

    COWMILK,
    GOATMILK
};

class FarmProduct : public Product{
public:
    FarmProduct(int);
	virtual FARMPRODUCT_TYPE farmProductType(); //mengembalikan jenis farm product
};
#endif