#pragma once

#include "IProductA.h"
#include "IProductB.h"

class IFactory
{
public:
	IFactory(void) {};
	virtual ~IFactory(void) {};

public:
	virtual IProductA* CreateProductA() = 0;
	virtual IProductB* CreateProductB() = 0;
};
