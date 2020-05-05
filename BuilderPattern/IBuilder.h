#pragma once

#include "Product.h"

class IBuilder
{
public:
    IBuilder() {};
	virtual ~IBuilder() {};
	virtual void buildPartA() = 0;
	virtual void buildPartB() = 0;
	virtual void buildPartC() = 0;
    void showPruduct() { product.display(); }
    Product* getProduct() { return &product; };
protected:
	Product product;
};
