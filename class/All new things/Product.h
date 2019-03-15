#ifndef _PRODUCT_H
#define _PRODUCT_H 

class Product
{
protected:
	int price;
public:
	Product();
	~Product();
	int getPrice();
	void setPrice(int p);
};
#endif