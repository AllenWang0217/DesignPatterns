#pragma once

#include "IProductB.h"

class CProductB2 : public IProductB
{
public:
	CProductB2(void) {};
	~CProductB2(void) {};

public:
	virtual void SetProductInfo() {
		std::cout << "This is Product B_2" << std::endl;
	}
};
