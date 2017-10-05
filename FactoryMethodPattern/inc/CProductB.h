#pragma once

#include "IProductBase.h"

class CProductB : public IProductBase
{
public:
	CProductB(void) {};
	~CProductB(void) {};

public:
	virtual void SetProductInfo() {
		std::cout << "This is Product B" << std::endl;
	}
};
