#pragma once

#include "Product.h"

class Builder
{
public:
	Builder() {};
	virtual ~Builder() {};
	virtual void buildPartA() = 0;
	virtual void buildPartB() = 0;
	virtual void buildPartC() = 0;
	virtual void showPruduct() = 0;
	virtual Product* getProduct() = 0;
protected:
	Product product;
};
