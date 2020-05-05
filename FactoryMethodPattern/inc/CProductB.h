#pragma once

#include "IProduct.h"

class CProductB : public IProduct
{
public:
	CProductB(void) {};
	~CProductB(void) {};

public:
	virtual void SetProductInfo() {
		std::cout << "This is Product B" << std::endl;
	}
};
