#pragma once
#include "IFactorybase.h"

class CFactoryB : public IFactoryBase
{
public:
	CFactoryB(void) {};
	~CFactoryB(void) {};

public:
	virtual IProductBase* CreateProduct();
};
