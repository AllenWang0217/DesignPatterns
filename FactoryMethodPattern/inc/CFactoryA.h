#pragma once

#include "IFactoryBase.h"

class CFactoryA : public IFactoryBase
{
public:
	CFactoryA(void) {};
	~CFactoryA(void) {};

public:
	virtual IProductBase* CreateProduct();
};
