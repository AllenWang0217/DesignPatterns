#pragma once

#include <iostream>
#include "IProduct.h"

class IFactory
{
public:
	IFactory(void) {};
	virtual ~IFactory(void) {};

public:
	virtual IProduct* CreateProduct() = 0;
};
