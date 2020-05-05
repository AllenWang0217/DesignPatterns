#pragma once
#include "IFactory.h"

class CFactoryB : public IFactory
{
public:
	CFactoryB(void) {};
	~CFactoryB(void) {};

public:
	virtual IProduct* CreateProduct();
};
