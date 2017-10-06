#pragma once

#include "IProductA.h"

class CProductA2 : public IProductA
{
public:
	CProductA2(void) {};
	~CProductA2(void) {};

public:
	virtual void SetProductInfo() {
		std::cout << "This is Product A_2" << std::endl;
	}
};
