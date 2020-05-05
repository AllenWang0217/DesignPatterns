#pragma once

#include "IFactory.h"

class CFactoryA : public IFactory
{
public:
	CFactoryA(void) {};
	~CFactoryA(void) {};

public:
	virtual IProduct* CreateProduct();
};
