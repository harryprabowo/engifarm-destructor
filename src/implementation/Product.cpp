#include "../class/Product/Product.h"
using namespace std;

int Product::getPrice(){
	return price;
}

string Product::getProdName()
{
	return prodName;
}

void Product::setProdName(string S)
{
	prodName = S;
}