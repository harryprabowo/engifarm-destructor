#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <string>

class Product
{
private:
	string prodName;
protected:
	int price;

public:
	int getPrice();
	virtual string getProdName();
	virtual void setProdName(string S);
};
#endif