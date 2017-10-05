#pragma once

#include <iostream>
#include "IProductBase.h"

class IFactoryBase
{
public:
	IFactoryBase(void) {};
	virtual ~IFactoryBase(void) {};

public:
	virtual IProductBase* CreateProduct() = 0;
};
