#pragma once
#include "IProductA.h"

class CProductA1 : public IProductA
{
public:
	CProductA1(void) {};
	~CProductA1(void) {};

public:
	void SetProductInfo() {
		std::cout << "This is Product A_1" << std::endl;
	}
};
