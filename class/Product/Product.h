#ifndef _PRODUCT_H
#define _PRODUCT_H 

enum PRODUCT_TYPE {
	FARMPRODUCT,
	SIDEPRODUCT
};

class Product
{
protected:
	int price;
public:
	int getPrice();
};
#endif