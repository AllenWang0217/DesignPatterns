#pragma once
#include "IProductBase.h"

class CProductA : public IProductBase
{
public:
	CProductA(void) {};
	~CProductA(void) {};

public:
	void SetProductInfo() {
		std::cout << "This is Product A" << std::endl;
	}
};
