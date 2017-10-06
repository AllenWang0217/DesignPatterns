#pragma once
#include "IFactory.h"

class CFactory1 : public IFactory
{
public:
	CFactory1(void) {};
	~CFactory1(void) {};

public:
	IProductA* CreateProductA();
	IProductB* CreateProductB();
};
