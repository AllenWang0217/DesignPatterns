#pragma once
#include "IProductB.h"

class CProductB1 : public IProductB
{
public:
	CProductB1(void) {};
	~CProductB1(void) {};

public:
	void SetProductInfo() {
		std::cout << "This is Product B_1" << std::endl;
	}
};
