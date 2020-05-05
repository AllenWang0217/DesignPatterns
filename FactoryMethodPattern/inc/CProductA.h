#pragma once
#include "IProduct.h"

class CProductA : public IProduct
{
public:
	CProductA(void) {};
	~CProductA(void) {};

public:
	void SetProductInfo() {
		std::cout << "This is Product A" << std::endl;
	}
};
