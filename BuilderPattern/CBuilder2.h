#pragma once

#include "IBuilder.h"
#include <iostream>

using namespace std;

class CBuilder2 :public IBuilder
{
public:
    CBuilder2() {};
	~CBuilder2() {};
	void buildPartA() { product.setProductPartA("ConcreteBuilder2 builded part A\n"); };
	void buildPartB() { product.setProductPartB("ConcreteBuilder2 builded part B\n"); };
	void buildPartC() { product.setProductPartC("ConcreteBuilder2 builded part C\n"); };
};
