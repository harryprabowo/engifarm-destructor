#ifndef _SIDE_PRODUCT_H
#define _SIDE_PRODUCT_H 

#include "Product.h"
#include "Player.h"

enum SIDEPRODUCT_TYPE
{
    MYSTERIOUSEGG,
    MYSTERIOUSMEAT,
    MYSTERIOUSMILK
};

class SideProduct : public Product
{
public:
	void Mix(Player& P,FarmProduct&, FarmProduct&); //menghasilkan side product bila bisa dimix
	virtual SIDEPRODUCT_TYPE sideProductType() = 0;
};
#endif