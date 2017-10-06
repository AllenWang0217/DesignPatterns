#pragma once
#include <iostream>

class IProductB
{
public:
	IProductB(void) {};
	~IProductB(void) {};

public:
	virtual void SetProductInfo() = 0;
};
