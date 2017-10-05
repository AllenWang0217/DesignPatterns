#pragma once
#include <iostream>

class IProductBase
{
public:
	IProductBase(void) {};
	~IProductBase(void) {};

public:
	virtual void SetProductInfo() = 0;
};
