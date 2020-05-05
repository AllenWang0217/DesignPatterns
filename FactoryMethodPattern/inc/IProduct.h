#pragma once
#include <iostream>

class IProduct
{
public:
	IProduct(void) {};
	~IProduct(void) {};

public:
	virtual void SetProductInfo() = 0;
};
