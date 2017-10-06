#pragma once
#include "IFactory.h"

class CFactory2 : public IFactory
{
public:
	CFactory2(void) {};
	~CFactory2(void) {};

public:
	IProductA* CreateProductA();
	IProductB* CreateProductB();
};
